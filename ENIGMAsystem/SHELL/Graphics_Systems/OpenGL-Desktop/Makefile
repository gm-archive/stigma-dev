override CXXFLAGS += -IBridges/OpenGL

ifeq ($(TARGET-PLATFORM), Windows)
	override CXXFLAGS += -DGLEW_STATIC
	override LDLIBS += -lglew32 -lopengl32
else ifeq ($(TARGET-PLATFORM), Linux)
	override LDLIBS += -lGL -lGLEW
else ifeq ($(TARGET-PLATFORM), FreeBSD)
	override LDLIBS += -lGL -lGLEW
else ifeq ($(TARGET-PLATFORM), DragonFlyBSD)
	override LDLIBS += -lGL -lGLEW
else ifeq ($(TARGET-PLATFORM), OpenBSD)
	override LDLIBS += -lGL -lGLEW
else ifeq ($(TARGET-PLATFORM), MacOSX)
	ifeq ($(TARGET-WINDOWING), SDL)
 		override LDLIBS += -framework OpenGL /opt/local/lib/libGLEW.a
 	else
 		override LDLIBS += -framework OpenGL -lGL /opt/local/lib/libGLEW.a
 	endif
endif
