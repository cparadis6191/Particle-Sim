TARGET = slid
OBJS = slid.o components/physics.o components/render.o components/object.o components/input.o components/canvas.o
CFLAGS = -g -Wall
LIBS = -lmingw32 -lSDLmain -lSDL -lstdc++ # Libaries to be linked
.PHONY:clean

# CC is already defined and depends on the object being made
${TARGET}:${OBJS}
	${CC} -o ../${TARGET} ${OBJS} ${LIBS} ${CFLAGS}

# This rule must be called explicitly
clean:
	rm -f *.o components/*.o ../${TARGET}.exe core*

slid.o:slid.h
components/canvas.o:components/canvas.h
components/physics.o:components/physics.h
components/render.o:components/render.h
components/input.o:components/input.h
components/object.o:components/object.h
