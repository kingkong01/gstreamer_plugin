# Note: plugindir is set in configure

##############################################################################
# TODO: change libgsttsdecrypt.la to something else, e.g. libmysomething.la     #
##############################################################################
plugin_LTLIBRARIES = libgsttsdecrypt.la 

##############################################################################
# TODO: for the next set of variables, name the prefix if you named the .la, #
#  e.g. libmysomething.la => libmysomething_la_SOURCES                       #
#                            libmysomething_la_CFLAGS                        #
#                            libmysomething_la_LIBADD                        #
#                            libmysomething_la_LDFLAGS                       #
##############################################################################

## Plugin 1

# sources used to compile this plug-in
libgsttsdecrypt_la_SOURCES = gsttsdecrypt.c gsttsdecrypt.h

# compiler and linker flags used to compile this plugin, set in configure.ac
libgsttsdecrypt_la_CFLAGS = $(GST_CFLAGS)
libgsttsdecrypt_la_LIBADD = $(GST_LIBS)
libgsttsdecrypt_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)
libgsttsdecrypt_la_LIBTOOLFLAGS = --tag=disable-static

## Plugin 2 (audio filter example)

# sources used to compile this plug-in
#libgstaudiofilterexample_la_SOURCES = gstaudiofilter.c

# compiler and linker flags used to compile this plugin, set in configure.ac
#libgstaudiofilterexample_la_CFLAGS = $(GST_CFLAGS)
#libgstaudiofilterexample_la_LIBADD = $(GST_LIBS)
#libgstaudiofilterexample_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)
#libgstaudiofilterexample_la_LIBTOOLFLAGS = --tag=disable-static

# headers we need but don't want installed
noinst_HEADERS = gsttsdecrypt.h
