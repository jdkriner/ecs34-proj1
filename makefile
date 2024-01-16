INCLUDE = -I/usr/src/gtest
LIBPATH = -L/usr/lib
OBJ = obj
BIN = bin

all: subdir $(BIN)/teststrutils runbinfile

subdir:
	@mkdir -p obj
	@mkdir -p bin

$(BIN)/teststrutils: $(OBJ)/StringUtils.o $(OBJ)/StringUtilsTest.o
	@echo "Generating executable"
	g++ $(OBJ)/StringUtils.o $(OBJ)/StringUtilsTest.o -o $(BIN)/teststrutils $(INCLUDE) $(LIBPATH) -lgtest -lgtest_main -pthread

$(OBJ)/StringUtils.o: StringUtils.cpp StringUtils.h
	g++ -c StringUtils.cpp -o $(OBJ)/StringUtils.o

$(OBJ)/StringUtilsTest.o: StringUtilsTest.cpp StringUtils.h
	g++ -c StringUtilsTest.cpp -o $(OBJ)/StringUtilsTest.o

runbinfile:
	./bin/teststrutils
	
clean:
	@rm -r obj
	@rm -r bin
