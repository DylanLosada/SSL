all: studio2

studio2: studio2.o
	gcc studio2.o -o studio2 -shared

studio2.o: studio2.c
	gcc -C studio2.c -o studio2.o -shared -std=c18

install: all
	-cp -u "C:/Users/dylan losada/CLionProjects/Sintaxis_y_Semantica/02-FasesTraduccionYErrores/studio2.exe" C:/w64devkit/x86_64-w64-mingw32/lib
	-cp -u "C:/Users/dylan losada/CLionProjects/Sintaxis_y_Semantica/02-FasesTraduccionYErrores/studio.h" C:/w64devkit/x86_64-w64-mingw32/include  