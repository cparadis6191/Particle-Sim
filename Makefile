TARGET = slid
OBJS = slid.o components/physics.o components/render.o components/object.o components/input.o components/canvas.o
CFLAGS = -g -Wall
LIBS = `sdl-config --libs` -lstdc++ # Libaries to be linked
.PHONY:clean

${TARGET}:${OBJS}
	${CC} -o ${TARGET} ${OBJS} ${LIBS}
# CC is already defined
clean:
	rm -f *.o components/*.o ${TARGET}.exe core*
# This rule must be called explicitly

slid.o:slid.h
components/canvas.o:components/canvas.h
components/physics.o:components/physics.h
components/render.o:components/render.h
components/input.o:components/input.h
components/object.o:components/object.h
