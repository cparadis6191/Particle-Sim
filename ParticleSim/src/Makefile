TARGET = slid
OBJS = slid.o physics.o render.o object.o input.o canvas.o
CFLAGS = -g -Wall
LIBS = -lmingw32 -lSDLmain -lSDL -lstdc++ # Libaries to be linked
.PHONY:clean

# CC is already defined and depends on the object being made
${TARGET}:${OBJS}
	${CC} -o ../${TARGET} ${OBJS} ${LIBS} ${CFLAGS}

# This rule must be called explicitly
clean:
	rm -f *.o ../${TARGET}.exe core*

slid.o:slid.h
canvas.o:canvas.h
physics.o:physics.h
render.o:render.h
input.o:input.h
object.o:object.h
