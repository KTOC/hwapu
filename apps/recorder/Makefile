
include $(TOPDIR)/config.mk

ELF = $(TOPDIR)/bin/recorder

CFLAGS += -I$(TOPDIR)/include/neux -I$(TOPDIR)/neux/nx -I${SYSROOT}/usr/include/microwin `${PKG_CONFIG} --cflags gstreamer-0.10` `${PKG_CONFIG} --cflags gstreamer-app-0.10` `${PKG_CONFIG} --cflags cld`
LIBS += -L$(TOPDIR)/libs -lplextalk-neux -lplextalk-core -linfo -lunistring -lunibreak -lvprompt -lnano-X -lasound `${PKG_CONFIG} --libs gstreamer-0.10` `${PKG_CONFIG} --libs alsa` `${PKG_CONFIG} --libs gstreamer-app-0.10` `${PKG_CONFIG} --libs cld`

ASRCS	= $(wildcard *.s)
CSRCS	= $(wildcard *.c)
CPPSRCS	= $(wildcard *.cpp)
SRCS 	= $(ASRCS) $(CSRCS) $(CPPSRCS)

AOBJS	= $(patsubst %.s, %.o, $(ASRCS))
COBJS	= $(patsubst %.c, %.o, $(CSRCS))
CPPOBJS = $(patsubst %.cpp, %.o, $(CPPSRCS))
OBJS	= $(AOBJS) $(COBJS) $(CPPOBJS)

all: .depend $(OBJS)
	$(CC) $(LDFLAGS) -o $(ELF) $(OBJS) $(LIBS)
	xgettext -k_ *.c *.h $(TOPDIR)/core/*.c $(TOPDIR)/neux/*.c $(TOPDIR)/neux/nx/*.c $(TOPDIR)/neux/wm/*.c $(TOPDIR)/apps/libinfo/*.c -o $(TOPDIR)/po/recorder.g.po

#########################################################################

.depend:	Makefile $(AOBJS:.o=.S) $(COBJS:.o=.c) $(CPPOBJS:.o=.cpp)
		$(CC) -M $(CFLAGS) $(AOBJS:.o=.S) $(COBJS:.o=.c) $(CPPOBJS:.o=.cpp) > $@

sinclude .depend

#########################################################################

clean:
	rm -f $(OBJS) .depend
	rm -f $(ELF)
