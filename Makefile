# the make file

food:	main.o	admin.o	customer.o
	gcc -o	food main.o admin.o customer.o  

main.o:	main.c	header.h
	gcc -c -g main.c 

admin.o:	admin.c 	header.h
	gcc -c -g admin.c 

customer.o:	customer.c	header.h
	gcc -c -g customer.c  

clean:
	rm -f *.s *.o food
