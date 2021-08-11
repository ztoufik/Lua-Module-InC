SHELL := /bin/bash
#install lua with your package manager

#your lua module file name
libname=mylib.so
#your object files
obj=$(shell for file in $$(ls *.c);do echo $$file |awk -F '.' '{print $$1".o"}';done;)
Cflags=-fPIC
CC=gcc

%.o:%.c
	$(CC) -c $^ -o $@ $(Cflags) 

$(libname):$(obj)
	$(CC) -shared -llua $^  -o  $(libname)

clean:
	rm *.o *.so
