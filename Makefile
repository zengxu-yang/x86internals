CXX = g++
CXXFLAGS = -g
LDFLAGS = -lfltk
OBJS = main.o x86internals.o
TARGET = x86internals
RM = rm -f

all: $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS): %.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) $(TARGET) $(OBJS)
