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
		if [ ! -d $(LIBPATH) ]; then mkdir $(LIBPATH); fi
		mv $(LIB) $(LIBPATH)/.
					
$(OBJPATH)/* : 	$(SRCPATH)/* $(INCPATH)/*
		$(CC) $(CFLAG) -c $(SRCPATH)/*
		if [ ! -d $(OBJPATH) ]; then mkdir $(OBJPATH); fi
		mv *.o $(OBJPATH)/.
clean:
	-rm -rf $(OBJPATH) $(LIBPATH)
