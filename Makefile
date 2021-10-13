CC=gcc
CFLAGS=--std=c99 -g -O2 -Wall --pedantic `pkg-config --cflags freetype2`
LOADLIBES=-lcairo -lharfbuzz -lharfbuzz-icu `pkg-config --libs freetype2` 
LOADLIBES+=-lXaw -lXft -lXt -lX11 -lfontconfig -lXmu
all: xt-pure

xt-pure: Wdemo3.o hb-example.o

clean:
	-rm -f xt-pure *.o *~

