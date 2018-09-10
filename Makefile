TARGET = slid
OBJS = src/slid.o src/canvas.o src/render.o src/object.o src/physics.o src/input.o
CXXFLAGS = -g -Wall -Wextra
LDFLAGS = -lmingw32 -lSDLmain -lSDL -lstdc++ # Libaries to be linked
.PHONY:clean

# CXX is already defined and depends on the object being made
${TARGET}:${OBJS}
	${CXX} -o ${TARGET} ${OBJS} ${LDFLAGS}

src/slid.o:src/slid.h src/canvas.h src/render.h src/object.h src/physics.h src/input.h
src/canvas.o:src/canvas.h
src/render.o:src/render.h src/canvas.h src/object.h
src/object.o:src/object.h src/physics.h
src/physics.o:src/physics.h src/canvas.h src/object.h
src/input.o:src/input.h

# This rule must be called explicitly
clean:
	rm -f *.o ${TARGET}.exe ${TARGET} core*
