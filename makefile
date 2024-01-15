INCLUDE = -I/usr/src/gtest
LIBPATH = -L/usr/lib

subdir:
	@mkdir -p obj
	@mkdir -p bin

teststrutils: StringUtils.o StringUtilsTest.o
	@echo "Generating executable"
	g++ StringUtils.o StringUtilsTest.o -o teststrutils $(INCLUDE) $(LIBPATH) -lgtest -lgtest_main -pthread

StringUtils.o: StringUtils.cpp StringUtils.h
	g++ -c StringUtils.cpp -o StringUtils.o

StringUtilsTest.o: StringUtilsTest.cpp StringUtils.h
	g++ -c StringUtilsTest.cpp -o StringUtilsTest.o
	
clean:
	@rmdir obj
	@rmdir bin
