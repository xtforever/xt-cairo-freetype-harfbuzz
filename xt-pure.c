

#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <locale.h>

#include <X11/Xaw/AllWidgets.h>
#include <X11/Xaw/XawInit.h>
#include <X11/Xft/Xft.h>
#include <X11/StringDefs.h>
#include <X11/Intrinsic.h>
#include <X11/Xaw/Box.h>
#include <X11/Xaw/Label.h>
#include <X11/Xmu/Editres.h>
#include <X11/Shell.h>

#include "xtcw/Wdemo3.h"


Widget toplevel;
XtAppContext app_con;

int main(int argc, char **argv)
{
    Widget box2;
    setlocale(LC_ALL, "" );
    XawInitializeWidgetSet();  
    toplevel = XtOpenApplication(&app_con, "xtpure",
				 NULL, 0, /* options */
				 &argc,argv,
				 NULL, /* fallback resources */ 
				 sessionShellWidgetClass,
				 NULL, 0 );
    XtAddEventHandler(toplevel, (EventMask) 0, True, _XEditResCheckMessages, NULL);
    box2 = XtVaCreateManagedWidget("main",boxWidgetClass, toplevel, 
				   XtNorientation, XtorientVertical,
				   NULL );
  
    XtVaCreateManagedWidget("demo0", wdemo3WidgetClass,box2,
			    XtNfontName, "Noto Serif-40",
			    XtNlang, 0,
			    XtNlabel, "Hello World",			    
			    XtNwidth, 800,
			    XtNheight, 100,
			    NULL );
    XtVaCreateManagedWidget("demo1", wdemo3WidgetClass,box2,
			    XtNfontName, "Noto Sans Arabic-40",
			    XtNlang, 1,
			    XtNlabel,     "هذه بعض النصوص العربية",
			    XtNwidth, 800,
			    XtNheight, 100,
			    NULL );

    XtVaCreateManagedWidget("demo2", wdemo3WidgetClass,box2,
			    XtNfontName, "Noto Serif CJK SC-32",
			    XtNlang, 2,
			    XtNlabel, "這是一些中",
			    XtNwidth, 800,
			    XtNheight, 200,
			    NULL );
      
    XtRealizeWidget(toplevel);
    XtAppMainLoop(app_con);
    return EXIT_SUCCESS;
}
