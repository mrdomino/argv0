all: argv0
-include config.mk
argv0: argv0.o
argv0.o: config.mk Makefile
install: all
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f argv0 ${DESTDIR}${PREFIX}/bin
	chmod 0755 ${DESTDIR}${PREFIX}/bin/argv0
uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/argv0
clean:
	rm -f argv0{,.o}
.PHONY: all clean install uninstall
