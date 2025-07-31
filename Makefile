CXX = g++
CXXFLAGS = -g
LDFLAGS = -lfltk
OBJS = x86internals.o main.o
TARGET = x86internals
FL = fluid
FL_FILE = x86internals.fl
FL_SRC = x86internals.cxx x86internals.h
RM = rm -f

all: $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS): %.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $<

$(FL_SRC):
	$(FL) -c $(FL_FILE)

clean:
	$(RM) $(TARGET) $(OBJS) $(FL_SRC)
