all: prog run

prog: 
	gcc mem-manage.c -o mem-manage

run:
	./mem-manage
