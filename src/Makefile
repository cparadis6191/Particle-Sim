TARGET = slid
OBJS = slid.o canvas.o render.o object.o physics.o input.o
CXXFLAGS = -g -Wall -Wextra
LDFLAGS = -lmingw32 -lSDLmain -lSDL -lstdc++ # Libaries to be linked
.PHONY:clean

# CXX is already defined and depends on the object being made
${TARGET}:${OBJS}
	${CXX} -o ../${TARGET} ${OBJS} ${LDFLAGS}

slid.o:slid.h canvas.h render.h object.h physics.h input.h
canvas.o:canvas.h
render.o:render.h canvas.h object.h
object.o:object.h physics.h
physics.o:physics.h canvas.h object.h
input.o:input.h

# This rule must be called explicitly
clean:
	rm -f *.o ../${TARGET}.exe core*
