INCPATH=../ComplexNumberLib/include
LIBPATH=../ComplexNumberLib/bin
LIB=ComplexNumber
SRCPATH=./src
APP=myapp
CC=g++
CFLAGS=-Wall -I$(INCPATH) -L$(LIBPATH) -l $(LIB)

$(APP) : $(SRCPATH)/* 
	@echo "****** Invoking ComplexNumberLib/makefile"
	(cd ../ComplexNumberLib && $(MAKE))
	$(CC) -o $(APP) $(SRCPATH)/* $(CFLAGS)

clean:
	@echo "****** Cleaning ComplexNumberLib/makefile"
	(cd ../ComplexNumberLib && $(MAKE) clean)
	rm -rf *.o $(APP)
