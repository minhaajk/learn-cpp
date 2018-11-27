LIB=libComplexNumber.a
OBJS=ComplexNumber.o
CC=g++
INCPATH=./include
SRCPATH=./src
OBJPATH=./obj
LIBPATH=./bin
CFLAG=-Wall -I$(INCPATH)


$(LIBPATH)/$(LIB):$(OBJPATH)/*
	        ar cr $(LIB) $(OBJPATH)/*
		mv $(LIB) $(LIBPATH)/.
					
$(OBJPATH)/* : $(SRCPATH)/* $(INCPATH)/*
	        $(CC) $(CFLAG) -c $(SRCPATH)/*
		mv *.o $(OBJPATH)/.
clean:
	-rm -f $(OBJPATH)/*.o $(LIBPATH)/*.a
