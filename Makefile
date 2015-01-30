CXX := g++
CXXFLAGS := -c
LD := g++
LDFLAGS := -lncurses

SRCDIR := src
OBJDIR := obj

SRC := $(wildcard $(SRCDIR)/*.cpp)
OBJ := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))
EXE := ceditor

.PHONY: all clean

all: $(EXE)

clean:
	rm -f $(OBJ)
	rm -f $(EXE)

$(EXE): $(OBJDIR) $(OBJ)
	$(LD) $(OBJ) $(LDFLAGS) -o $@

$(OBJDIR):
	mkdir $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(SRCDIR)/%.h
	$(CXX) $(CXXFLAGS) $< -o $@

