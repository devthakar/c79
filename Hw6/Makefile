CXX = g++
CXXFLAGS = -std=c++17

# source files
SOURCES = student.cxx scuclass.cxx classmain.cxx

# object files
OBJECTS = $(SOURCES:.cxx=.o)

# target executable
TARGET = sclass

# compilation & linking
$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
