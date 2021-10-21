# xt-cairo-freetype-harfbuzz
a clone from ex-sdl-cairo-freetype-harfbuzz but with libxt widget, simple harfbuzz,widget,fontconfig,xft2 render demo

Original code: https://github.com/anoek/ex-sdl-cairo-freetype-harfbuzz


The widget is compiled with wbuild; a easy to use widget precompiler 


Overview: xt-pure.c creates a form widget and then 3 Wdemo3 widgets with english (left to right), Arabic (right to left) and Chinese (top to bottom) texts.

The form widgets allows the main window to be resized.

The font sizing is a bit tricky. Freetype uses the XResource "Xft.dpi" to calculate pixel sizes. And i fetch the current DPI setting and font size in points from the font-struct that is created by xft. To set font size i can use:

          FT_Set_Char_Size(face,font_size *64,
		     font_size *64,
		     font_dpi, font_dpi);

For cairo i have to multiply the font_size (Points) with dpi/72.

              cairo_set_font_size(cr, font_size * font_dpi / 72 );




