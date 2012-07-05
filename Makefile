TARGET = slid
OBJS = slid.o
CFLAGS = -g -Wall
LIBS = `sdl-config --libs` -lstdc++ # Libaries to be linked
.PHONY:clean

${TARGET}:${OBJS}
	${CC} -o ${TARGET} ${OBJS} ${LIBS}
# CC is already defined
clean:
	rm -f *.o ${TARGET}.exe core*
# This rule must be called explicitly
