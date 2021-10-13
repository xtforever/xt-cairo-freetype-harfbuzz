/* Generated by wbuild
 * (generator version 3.3)
 */
#ifndef XTCW_WDEMO3P_H
#define XTCW_WDEMO3P_H
#include <X11/CoreP.h>
#include <xtcw/Wdemo3.h>
_XFUNCPROTOBEGIN

typedef struct {
/* methods */
/* class variables */
int dummy;
} Wdemo3ClassPart;

typedef struct _Wdemo3ClassRec {
CoreClassPart core_class;
Wdemo3ClassPart wdemo3_class;
} Wdemo3ClassRec;

typedef struct {
/* resources */
String  label;
int  lang;
String  fontName;
Pixel  background;
Pixel  foreground;
/* private state */
Pixmap  pixmap;
XftFont * xftFont;
GC  gc_bg;
} Wdemo3Part;

typedef struct _Wdemo3Rec {
CorePart core;
Wdemo3Part wdemo3;
} Wdemo3Rec;

externalref Wdemo3ClassRec wdemo3ClassRec;

_XFUNCPROTOEND
#endif /* XTCW_WDEMO3P_H */
