RM = rm -f

all: TablasDeConversion
all: ConversionTest

ConversionTest: ConversionTest.o Conversion.o
	gcc ConversionTest.o Conversion.o -o ConversionTest
	$(RM) ConversionTest.o
	$(RM) Conversion.o

ConversionTest.o:ConversionTest.c
	gcc -c ConversionTest.c -o ConversionTest.o -std=c18

TablasDeConversion: TablasDeConversion.o Conversion.o
	gcc TablasDeConversion.o Conversion.o -o TablasDeConversion
	$(RM) TablasDeConversion.o

TablasDeConversion.o: TablasDeConversion.c
	gcc -c TablasDeConversion.c -o TablasDeConversion.o -std=c18

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o -std=c18

clean:
	$(RM) Conversion.o
	$(RM) TablasDeConversion.o
	$(RM) TablasDeConversion.exe