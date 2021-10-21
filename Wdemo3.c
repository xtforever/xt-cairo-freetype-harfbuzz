/* Generated by wbuild
 * (generator version 3.3)
 */
#include <X11/IntrinsicP.h>
#include <X11/StringDefs.h>
#line 105 "Wdemo3.widget"
#include <assert.h>
#line 106 "Wdemo3.widget"
#include <stdint.h>
#line 107 "Wdemo3.widget"
#include <X11/Intrinsic.h>
#line 108 "Wdemo3.widget"
#include <X11/Xmu/Converters.h>
#line 109 "Wdemo3.widget"
#include <X11/Xft/Xft.h>
#line 110 "Wdemo3.widget"
#include <X11/Xregion.h>
#line 111 "Wdemo3.widget"
#include "hb-example.h"
#include <xtcw/Wdemo3P.h>
static void _resolve_inheritance(
#if NeedFunctionPrototypes
WidgetClass
#endif
);
#line 27 "Wdemo3.widget"
static void initialize(
#if NeedFunctionPrototypes
Widget ,Widget,ArgList ,Cardinal *
#endif
);
#line 42 "Wdemo3.widget"
static void resize(
#if NeedFunctionPrototypes
Widget
#endif
);
#line 47 "Wdemo3.widget"
static void realize(
#if NeedFunctionPrototypes
Widget,XtValueMask *,XSetWindowAttributes *
#endif
);
#line 55 "Wdemo3.widget"
static void expose(
#if NeedFunctionPrototypes
Widget,XEvent *,Region 
#endif
);
#line 67 "Wdemo3.widget"
static XtGeometryResult  query_geometry(
#if NeedFunctionPrototypes
Widget,XtWidgetGeometry *,XtWidgetGeometry *
#endif
);
#line 78 "Wdemo3.widget"
static void destroy(
#if NeedFunctionPrototypes
Widget
#endif
);
#line 86 "Wdemo3.widget"
static void free_pixmap(
#if NeedFunctionPrototypes
Widget
#endif
);
#line 92 "Wdemo3.widget"
static void create_pixmap(
#if NeedFunctionPrototypes
Widget
#endif
);
#line 86 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 86 "Wdemo3.widget"
static void free_pixmap(Widget self)
#else
#line 86 "Wdemo3.widget"
static void free_pixmap(self)Widget self;
#endif
#line 87 "Wdemo3.widget"
{
   if( ((Wdemo3Widget)self)->wdemo3.pixmap ) XFreePixmap(XtDisplay(self),((Wdemo3Widget)self)->wdemo3.pixmap);
   ((Wdemo3Widget)self)->wdemo3.pixmap=0;
}
#line 92 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 92 "Wdemo3.widget"
static void create_pixmap(Widget self)
#else
#line 92 "Wdemo3.widget"
static void create_pixmap(self)Widget self;
#endif
#line 93 "Wdemo3.widget"
{
    	if( ((Wdemo3Widget)self)->wdemo3.pixmap ) return;
    	Display *dpy = XtDisplay(self);	
    	((Wdemo3Widget)self)->wdemo3.pixmap = XCreatePixmap(dpy, XtWindow(self), ((Wdemo3Widget)self)->core.width, ((Wdemo3Widget)self)->core.height,
			DefaultDepth(dpy, DefaultScreen(dpy)));
	XFillRectangle(XtDisplay(self),((Wdemo3Widget)self)->wdemo3.pixmap, ((Wdemo3Widget)self)->wdemo3.gc_bg, 0,0,((Wdemo3Widget)self)->core.width,((Wdemo3Widget)self)->core.height );
    	write_to_pixmap( XtDisplay(self), ((Wdemo3Widget)self)->wdemo3.pixmap, ((Wdemo3Widget)self)->wdemo3.foreground, ((Wdemo3Widget)self)->wdemo3.xftFont, ((Wdemo3Widget)self)->core.width, ((Wdemo3Widget)self)->core.height,
     			 ((Wdemo3Widget)self)->wdemo3.lang, ((Wdemo3Widget)self)->wdemo3.label, 0, 0 );
}

static XtResource resources[] = {
#line 7 "Wdemo3.widget"
{XtNlabel,XtCLabel,XtRString,sizeof(((Wdemo3Rec*)NULL)->wdemo3.label),XtOffsetOf(Wdemo3Rec,wdemo3.label),XtRString,(XtPointer)"Hello"},
#line 9 "Wdemo3.widget"
{XtNlang,XtCLang,XtRInt,sizeof(((Wdemo3Rec*)NULL)->wdemo3.lang),XtOffsetOf(Wdemo3Rec,wdemo3.lang),XtRImmediate,(XtPointer)0 },
#line 11 "Wdemo3.widget"
{XtNfontName,XtCFontName,XtRString,sizeof(((Wdemo3Rec*)NULL)->wdemo3.fontName),XtOffsetOf(Wdemo3Rec,wdemo3.fontName),XtRString,(XtPointer)"Source Code Pro-42"},
#line 13 "Wdemo3.widget"
{XtNbackground,XtCBackground,XtRPixel,sizeof(((Wdemo3Rec*)NULL)->wdemo3.background),XtOffsetOf(Wdemo3Rec,wdemo3.background),XtRString,(XtPointer)"Darkgrey"},
#line 15 "Wdemo3.widget"
{XtNforeground,XtCForeground,XtRPixel,sizeof(((Wdemo3Rec*)NULL)->wdemo3.foreground),XtOffsetOf(Wdemo3Rec,wdemo3.foreground),XtRString,(XtPointer)XtDefaultForeground },
};

Wdemo3ClassRec wdemo3ClassRec = {
{ /* core_class part */
/* superclass   	*/  (WidgetClass) &coreClassRec,
/* class_name   	*/  "Wdemo3",
/* widget_size  	*/  sizeof(Wdemo3Rec),
/* class_initialize 	*/  NULL,
/* class_part_initialize*/  _resolve_inheritance,
/* class_inited 	*/  FALSE,
/* initialize   	*/  initialize,
/* initialize_hook 	*/  NULL,
/* realize      	*/  realize,
/* actions      	*/  NULL,
/* num_actions  	*/  0,
/* resources    	*/  resources,
/* num_resources 	*/  5,
/* xrm_class    	*/  NULLQUARK,
/* compres_motion 	*/  False ,
/* compress_exposure 	*/  FALSE ,
/* compress_enterleave 	*/  False ,
/* visible_interest 	*/  False ,
/* destroy      	*/  destroy,
/* resize       	*/  resize,
/* expose       	*/  expose,
/* set_values   	*/  NULL,
/* set_values_hook 	*/  NULL,
/* set_values_almost 	*/  XtInheritSetValuesAlmost,
/* get_values+hook 	*/  NULL,
/* accept_focus 	*/  XtInheritAcceptFocus,
/* version      	*/  XtVersion,
/* callback_private 	*/  NULL,
/* tm_table      	*/  NULL,
/* query_geometry 	*/  query_geometry,
/* display_acceleator 	*/  XtInheritDisplayAccelerator,
/* extension    	*/  NULL 
},
{ /* Wdemo3_class part */
 /* dummy */  0
},
};
WidgetClass wdemo3WidgetClass = (WidgetClass) &wdemo3ClassRec;
static void _resolve_inheritance(class)
WidgetClass class;
{
  Wdemo3WidgetClass c __attribute__((unused)) = (Wdemo3WidgetClass) class;
  Wdemo3WidgetClass super __attribute__((unused));
  if (class == wdemo3WidgetClass) return;
  super = (Wdemo3WidgetClass)class->core_class.superclass;
}
#line 27 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 27 "Wdemo3.widget"
static void initialize(Widget  request,Widget self,ArgList  args,Cardinal * num_args)
#else
#line 27 "Wdemo3.widget"
static void initialize(request,self,args,num_args)Widget  request;Widget self;ArgList  args;Cardinal * num_args;
#endif
#line 28 "Wdemo3.widget"
{
	((Wdemo3Widget)self)->wdemo3.pixmap = 0;
	Display *dpy = XtDisplay(self);
	((Wdemo3Widget)self)->wdemo3.xftFont = XftFontOpenName( dpy, DefaultScreen(dpy), ((Wdemo3Widget)self)->wdemo3.fontName );
	/* xt fills with foreground color - so fg = bg */
     	XGCValues values = { .foreground = ((Wdemo3Widget)self)->wdemo3.background };
     	((Wdemo3Widget)self)->wdemo3.gc_bg = XtGetGC(self, GCForeground, &values);
	int w,h;
	hb_measure( XtDisplay(self), ((Wdemo3Widget)self)->wdemo3.xftFont, ((Wdemo3Widget)self)->wdemo3.lang, ((Wdemo3Widget)self)->wdemo3.label, &w, &h );
	((Wdemo3Widget)self)->core.width=w; ((Wdemo3Widget)self)->core.height=h;
}
#line 42 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 42 "Wdemo3.widget"
static void resize(Widget self)
#else
#line 42 "Wdemo3.widget"
static void resize(self)Widget self;
#endif
#line 43 "Wdemo3.widget"
{
	free_pixmap(self); 
}
#line 47 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 47 "Wdemo3.widget"
static void realize(Widget self,XtValueMask * mask,XSetWindowAttributes * attributes)
#else
#line 47 "Wdemo3.widget"
static void realize(self,mask,attributes)Widget self;XtValueMask * mask;XSetWindowAttributes * attributes;
#endif
#line 48 "Wdemo3.widget"
{
        XtCreateWindow(self, (unsigned int) InputOutput,
        		  (Visual *) CopyFromParent, *mask, attributes);
}
#line 55 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 55 "Wdemo3.widget"
static void expose(Widget self,XEvent * event,Region  region)
#else
#line 55 "Wdemo3.widget"
static void expose(self,event,region)Widget self;XEvent * event;Region  region;
#endif
#line 56 "Wdemo3.widget"
{
	if( ! ((Wdemo3Widget)self)->wdemo3.pixmap ) create_pixmap(self);
	XCopyArea(XtDisplay(self),((Wdemo3Widget)self)->wdemo3.pixmap, XtWindow(self), ((Wdemo3Widget)self)->wdemo3.gc_bg,
              0,0, ((Wdemo3Widget)self)->core.width, ((Wdemo3Widget)self)->core.height, /* source pixmap */
              0,0 ); /* target window x,y */
}
#line 67 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 67 "Wdemo3.widget"
static XtGeometryResult  query_geometry(Widget self,XtWidgetGeometry * request,XtWidgetGeometry * reply)
#else
#line 67 "Wdemo3.widget"
static XtGeometryResult  query_geometry(self,request,reply)Widget self;XtWidgetGeometry * request;XtWidgetGeometry * reply;
#endif
#line 68 "Wdemo3.widget"
{	
	int w,h;
	hb_measure( XtDisplay(self), ((Wdemo3Widget)self)->wdemo3.xftFont, ((Wdemo3Widget)self)->wdemo3.lang, ((Wdemo3Widget)self)->wdemo3.label, &w, &h );
	reply->request_mode = CWX | CWY | CWWidth | CWHeight;
    	    reply->x=0; reply->y=0;
    	    reply->width =  w;
    	    reply->height = h;
	return XtGeometryAlmost;
}
#line 78 "Wdemo3.widget"
/*ARGSUSED*/
#if NeedFunctionPrototypes
#line 78 "Wdemo3.widget"
static void destroy(Widget self)
#else
#line 78 "Wdemo3.widget"
static void destroy(self)Widget self;
#endif
#line 79 "Wdemo3.widget"
{
	XtReleaseGC(self,((Wdemo3Widget)self)->wdemo3.gc_bg);
	free_pixmap(self);
}
