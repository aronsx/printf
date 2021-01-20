#include <stdio.h>
/*#include "ft_printf.h"*/

int 	main()
{

	int c = 0;
	int n = 0;
	//chars
	printf("\n====CHARS====\n\n");
	n = printf("just char a\n%c|\n", 'a');
	c = ft_printf("just char a\n%c|\n", 'a');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("char s, flag -, width 15\n%-15c|\n", 's');
	c = ft_printf("char s, flag -, width 15\n%-15c|\n", 's');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("char H, not flag, width 15\n%15c|\n", 'H');
	c = ft_printf("char H, not flag, width 15\n%15c|\n", 'H');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("char P, not flag, width -15\n%*c|\n", -15, 'P');
	c = ft_printf("char P, not flag, width -15\n%*c|\n", -15, 'P');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("char Z, flag -, width -15\n%--15c|\n", 'Z');
	c = ft_printf("char Z, flag -, width -15\n%--15c|\n", 'Z');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("char Y, flag -, width -15 as arg\n%-*c|\n", -15, 'Y');
	c = ft_printf("char Y, flag -, width -15 as arg\n%-*c|\n", -15, 'Y');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("just char a, char Z with width 10, char T with width 7 and flag -, char Y with width -50\n%c|%10c|%-7c|%*c|\n", 'a', 'Z', 'T', -50, 'Y');
	c = ft_printf("just char a, char Z with width 10, char T with width 7 and flag -, char Y with width -50\n%c|%10c|%-7c|%*c|\n", 'a', 'Z', 'T', -50, 'Y');
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	//strs
	printf("\n====STRS====\n\n");
	n = printf("just string\n%s|\n", "DAROVA EPTA");
	c = ft_printf("just string\n%s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 10\n%10s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 10\n%10s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25\n%25s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25\n%25s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25, flag -\n%-25s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25, flag -\n%-25s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25, precision 30\n%25.30s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25, precision 30\n%25.30s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25, precision 20\n%25.20s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25, precision 20\n%25.20s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25, precision 8, flag -\n%-25.8s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25, precision 8, flag -\n%-25.8s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with width 25, precision 20, flag -\n%-25.20s|\n", "DAROVA EPTA");
	c = ft_printf("string with width 25, precision 20, flag -\n%-25.20s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with precision 5, flag -\n%-.5s|\n", "DAROVA EPTA");
	c = ft_printf("string with precision 5, flag -\n%-.5s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("string with precision 5\n%.5s|\n", "DAROVA EPTA");
	c = ft_printf("string with precision 5\n%.5s|\n", "DAROVA EPTA");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("Various tests\n%.5s|%-5.*s|PRIVET MNP|%s|%*.*s|%*.*s|%.2s| WORK%s|\n", "DAROVA EPTA", -6, "Hey", "GAYS", 40, 4, "HELLO", -20, 5, "ITS ALIVE", "HER", "ing");
	c = ft_printf("Various tests\n%.5s|%-5.*s|PRIVET MNP|%s|%*.*s|%*.*s|%.2s| WORK%s|\n", "DAROVA EPTA", -6, "Hey", "GAYS", 40, 4, "HELLO", -20, 5, "ITS ALIVE", "HER", "ing");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("NULL as string precision 8\n%.8s|\n", NULL);
	c = ft_printf("NULL as string precision 8\n%.8s|\n", NULL);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("Проверка на русский текст: \n%s|\n", "Что с принтэфом?");
	c = ft_printf("Проверка на русский текст: \n%s|\n", "Что с принтэфом?");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("string width 19, precision 14\n%.s|\n", "abcdefghijklmnop");
	c = ft_printf("string width 19, precision 14\n%.s|\n", "abcdefghijklmnop");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("Empty string, width 3\n%3s|\n", "\0");
	c = ft_printf("Empty string, width 3\n%3s|\n", "\0");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("Empty string\n%s|\n", "\0");
	c = ft_printf("Empty string\n%s|\n", "\0");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	char *ppp = "\0";
	n = printf("%s", ppp);
	printf("|\n");
	c = ft_printf("%s",ppp);
	printf("|\n^ just empty string");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);




	//digits
	printf("\n====DIGITS====\n\n");
	n = printf("MAX INT\n%d|\n", 2147483647);
	c = ft_printf("MAX INT\n%d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 01 ^^^\n", n, c);


	n = printf("MIN INT + 1\n%d|\n", -2147483648);
	c = ft_printf("MIN INT + 1\n%d|\n", -2147483648);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 02 ^^^\n", n, c);

	n = printf("MIN INT\n%ld|\n", -2147483648);
	c = ft_printf("MIN INT\n%d|\n", -2147483648);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 03 ^^^\n", n, c);


	n = printf("MIN INT + 1, flag -\n%-d|\n", -2147483648);
	c = ft_printf("MIN INT + 1, flag -\n%-d|\n", -2147483648);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 04 ^^^\n", n, c);


	n = printf("MAX INT, flag 0\n%0d|\n", 2147483647);
	c = ft_printf("MAX INT, flag 0\n%0d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 05 ^^^\n", n, c);


	n = printf("MAX INT, flag 0, width 14\n%014d|\n", 2147483647);
	c = ft_printf("MAX INT, flag 0, width 14\n%014d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 06 ^^^\n", n, c);


	n = printf("MAX INT, flag -, width 14\n%-14d|\n", 2147483647);
	c = ft_printf("MAX INT, flag -, width 14\n%-14d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 07 ^^^\n", n, c);


	n = printf("MAX INT, flag 0, width 14, precision 5\n%014.5d|\n", 2147483647);
	c = ft_printf("MAX INT, flag 0, width 14, precision 5\n%014.5d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 08 ^^^\n", n, c);


	n = printf("MAX INT, flag -, width 14, precision 5\n%-14.5d|\n", 2147483647);
	c = ft_printf("MAX INT, flag -, width 14, precision 5\n%-14.5d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 09 ^^^\n", n, c);


	n = printf("MAX INT, flag -, width 14, precision 25\n%-14.25d|\n", 2147483647);
	c = ft_printf("MAX INT, flag -, width 14, precision 25\n%-14.25d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 10 ^^^\n", n, c);


	n = printf("MAX INT, flag 0, width 14, precision 25\n%014.25d|\n", 2147483647);
	c = ft_printf("MAX INT, flag 0, width 14, precision 25\n%014.25d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 11 ^^^\n", n, c);


	n = printf("MIN INT, flag -, width 44, precision 25\n%-44.25d|\n", -2);
	c = ft_printf("MIN INT, flag -, width 44, precision 25\n%-44.25d|\n", -2);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 12 ^^^\n", n, c);


	n = printf("MAX INT, flag -, width 44, precision 25\n%-44.25d|\n", 2147483647);
	c = ft_printf("MAX INT, flag -, width 44, precision 25\n%-44.25d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 13 ^^^\n", n, c);


	n = printf("MAX INT, flag 0, width 44, precision 25\n%044.25d|\n", 2147483647);
	c = ft_printf("MAX INT, flag 0, width 44, precision 25\n%044.25d|\n", 2147483647);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 14 ^^^\n", n, c);


	n = printf("MIN INT, flag 0, width 44, precision 25\n%044.25d|\n", -2147483648);
	c = ft_printf("MIN INT, flag 0, width 44, precision 25\n%044.25d|\n", -2147483648);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 15 ^^^\n", n, c);


	n = printf("ZERO, flag 0, width 0, precision 0\n%00.0d|\n", 0);
	c = ft_printf("ZERO, flag 0, width 0, precision 0\n%00.0d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 16 ^^^\n", n, c);


	n = printf("ZERO, flag -, width 0, precision 0\n%-*.0d|\n", 0, 0);
	c = ft_printf("ZERO, flag -, width 0, precision 0\n%-*.0d|\n", 0, 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 17 ^^^\n", n, c);


	n = printf("ZERO, flag 0, width 1, precision 0\n%01.0d|\n", 0);
	c = ft_printf("ZERO, flag 0, width 1, precision 0\n%01.0d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 18 ^^^\n", n, c);


	n = printf("ZERO, flag -, width 1, precision 0\n%-*.0d|\n", 1, 0);
	c = ft_printf("ZERO, flag -, width 1, precision 0\n%-*.0d|\n", 1, 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 19 ^^^\n", n, c);


	n = printf("ZERO, flag 0, width 0, precision 1\n%00.1d|\n", 0);
	c = ft_printf("ZERO, flag 0, width 0, precision 1\n%00.1d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 20 ^^^\n", n, c);


	n = printf("ZERO, flag -, width 0, precision 1\n%-*.1d|\n", 0, 0);
	c = ft_printf("ZERO, flag -, width 0, precision 1\n%-*.1d|\n", 0, 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 21 ^^^\n", n, c);

	n = printf("ZERO, flag 0, width 10, precision 0\n%010.0d|\n", 0);
	c = ft_printf("ZERO, flag 0, width 10, precision 0\n%010.0d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 22 ^^^\n", n, c);


	n = printf("ZERO, flag -, width 10, precision 0\n%-*.0d|\n", 10, 0);
	c = ft_printf("ZERO, flag -, width 10, precision 0\n%-*.0d|\n", 10, 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 23 ^^^\n", n, c);


	n = printf("ZERO, flag -, precision 1\n%-.1d|\n", 0);
	c = ft_printf("ZERO, flag -, precision 1\n%-.1d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 24 ^^^\n", n, c);


	n = printf("ZERO, width 2\n%2d|\n", 0);
	c = ft_printf("ZERO, width 2\n%2d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 25 ^^^\n", n, c);

	n = printf("ZERO, width 2\n%-2d|\n", 0);
	c = ft_printf("ZERO, width 2\n%-2d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 26 ^^^\n", n, c);

	n = printf("ZERO, width 5\n%5d|\n", 0);
	c = ft_printf("ZERO, width 5\n%5d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 27 ^^^\n", n, c);

	n = printf("ZERO, flag -, width 5\n%-5d|\n", 0);
	c = ft_printf("ZERO, flag -, width 5\n%-5d|\n", 0);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 28 ^^^\n", n, c);


	n = printf("-12, width 5\n%5d|\n", -12);
	c = ft_printf("-12, width 5\n%5d|\n", -12);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 29 ^^^\n", n, c);


	n = printf("-12, flag 0, width 5\n%05d|\n", -12);
	c = ft_printf("-12, flag 0, width 5\n%05d|\n", -12);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 30 ^^^\n", n, c);


	n = printf("8, flag 0, width 2, precision -2\n%0*.*d|\n", 2, -2, 8);
	c = ft_printf("8, flag 0, width 2, precision -2\n%0*.*d|\n", 2, -2, 8);
	printf("norm %d -- custom %d\n--------------------------------- ^^^ 31 ^^^\n", n, c);


	//unsigned
	printf("\n====UNSIGNED====\n\n");
	n = printf("UNSIGNED\n%u|\n", 65535);
	c = ft_printf("UNSIGNED\n%u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED try negative\n%u|\n", -65535);
	c = ft_printf("UNSIGNED try negative\n%u|\n", -65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag -\n%-u|\n", 65535);
	c = ft_printf("UNSIGNED flag -\n%-u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag 0\n%0u|\n", 65535);
	c = ft_printf("UNSIGNED flag 0\n%0u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag 0, width 13\n%013.9u|\n", 65535);
	c = ft_printf("UNSIGNED flag 0, width 13\n%013.9u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag 0, width 13\n%013u|\n", 65535);
	c = ft_printf("UNSIGNED flag 0, width 13\n%013u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag 0, width 13\n%013u|\n", 65535);
	c = ft_printf("UNSIGNED flag 0, width 13\n%013u|\n", 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag -, width 13, precision 5\n%-13.*u|\n", 5, 65535);
	c = ft_printf("UNSIGNED flag -, width 13, precision 5\n%-13.*u|\n", 5, 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("UNSIGNED flag 0, width 23, precision 5\n%023.*u|\n", 5, 65535);
	c = ft_printf("UNSIGNED flag 0, width 23, precision 5\n%023.*u|\n", 5, 65535);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

//	//HEX and hex
	printf("\n====HEX and hex====\n\n");
	n = printf("255\n%x|\n", 255);
	c = ft_printf("255\n%x|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);
//
//
	n = printf("%lx|\n", 4294967284);
	c = ft_printf("%x|\n", 4294967284);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("23255\n%x|\n", 23255);
	c = ft_printf("23255\n%x|\n", 23255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("2325517\n%x|\n", 2325517);
	c = ft_printf("2325517\n%x|\n", 2325517);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("10\n%x|\n", 10);
	c = ft_printf("10\n%x|\n", 10);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("1000\n%x|\n", 1000);
	c = ft_printf("1000\n%x|\n", 1000);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("2993255\n%X|\n", 2993255);
	c = ft_printf("2993255\n%X|\n", 2993255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("828095\n%X|\n", 828095);
	c = ft_printf("828095\n%X|\n", 828095);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag -\n%-X|\n", 255);
	c = ft_printf("255, flag -\n%-X|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag 0\n%0x|\n", 255);
	c = ft_printf("255, flag 0\n%0x|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag 0, width 4\n%04x|\n", 255);
	c = ft_printf("255, flag 0, width 4\n%04x|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag -, width 4\n%-4x|\n", 255);
	c = ft_printf("255, flag -, width 4\n%-4x|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag 0, width 4, precision 2\n%04.2x|\n", 255);
	c = ft_printf("255, flag 0, width 4, precision 2\n%04.2x|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("255, flag -, width 4, precision 2\n%-4.2X|\n", 255);
	c = ft_printf("255, flag -, width 4, precision 2\n%-4.2X|\n", 255);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("0, flag -, width 4, precision 2\n%-4.2x|\n", 0);
	c = ft_printf("0, flag -, width 4, precision 2\n%-4.2x|\n", 0);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("0, flag -, width 40, precision 12\n%-40.12x|\n", 0);
	c = ft_printf("0, flag -, width 40, precision 12\n%-40.12x|\n", 0);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("0, flag -, width 40, precision 0\n%-40.0x|\n", 0);
	c = ft_printf("0, flag -, width 40, precision 0\n%-40.0x|\n", 0);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("0, flag -, width 40, precision 1\n%-40.1x|\n", 0);
	c = ft_printf("0, flag -, width 40, precision 1\n%-40.1x|\n", 0);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("0, flag -, precision 1\n%-.1x|\n", 0);
	c = ft_printf("0, flag -, precision 1\n%-.1x|\n", 0);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("8, precision 5 width 0 \n%*.5x|\n", 0, 8);
	c = ft_printf("8, precision 5 width 0 \n%*.5x|\n",0, 8);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	printf("\n====POINTER====\n\n");

	int a01, a02, a03, a04, a05, a06, a07, a08, a09, a10, a12, a11 = 1;
	n = printf("*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n", &a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	c = ft_printf("*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n*%70p*\n", &a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	char chr = 'x';
	char *str = "HELLO SUKA BLYAD";
	int i = 12345678;
	float f = 2.123;
	char *nll = NULL;
//
	n = printf("char pointer\n%p|\n", &chr);
	c = ft_printf("char pointer\n%p|\n", &chr);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("string pointer\n%p|\n", str);
	c = ft_printf("string pointer\n%p|\n", str);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("int pointer\n%p|\n", &i);
	c = ft_printf("int pointer\n%p|\n", &i);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("float pointer\n%p|\n", &f);
	c = ft_printf("float pointer\n%p|\n", &f);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("NULL pointer\n%p|\n", nll);
	c = ft_printf("NULL pointer\n%p|\n", nll);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("int pointer, flag -\n%-p|\n", &i);
	c = ft_printf("int pointer, flag -\n%-p|\n", &i);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("float pointer, flag -, width 25\n%-25p|\n", &f);
	c = ft_printf("float pointer, flag -, width 25\n%-25p|\n", &f);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("float pointer, flag -, width 25\n%-25p|\n", &f);
	c = ft_printf("float pointer, flag -, width 25\n%-25p|\n", &f);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("NULL pointer, flag -, width 25\n%-25p|\n", nll);
	c = ft_printf("NULL pointer, flag -, width 25\n%-25p|\n", nll);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("float pointer, flag -, width 5\n%-5p|\n", &f);
	c = ft_printf("float pointer, flag -, width 5\n%-5p|\n", &f);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("float pointer, width 8\n%8p|\n", &f);
	c = ft_printf("float pointer, width 8\n%8p|\n", &f);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	printf("\n====PERCENT====\n\n")	;
	n = printf("just percent\n%%|\n");
	c = ft_printf("just percent\n%%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag -\n%-%|\n");
	c = ft_printf("percent with flag -\n%-%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag 0\n%0%|\n");
	c = ft_printf("percent with flag 0\n%0%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag 0, width 5\n%05%|\n");
	c = ft_printf("percent with flag 0, width 5\n%05%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag -, width 5\n%-5%|\n");
	c = ft_printf("percent with flag -, width 5\n%-5%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag 0, width 35, precision 14\n%035.14%|\n");
	c = ft_printf("percent with flag 0, width 35, precision 14\n%035.14%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("percent with flag -, width 35, precision 14\n%-35.14%|\n");
	c = ft_printf("percent with flag -, width 35, precision 14\n%-35.14%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("percent width 5\n%5%|\n");
	c = ft_printf("percent width 5\n%5%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("percent width 5\n%-05%|\n");
	c = ft_printf("percent width 5\n%-05%|\n");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);



	n = printf("8, precision 5 width 0 \n%*.5d|\n", 0, 8);
	c = ft_printf("8, precision 5 width 0 \n%*.5d|\n",0, 8);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);


	n = printf("8, precision 5 width 0 \n%05\n", "str");
	c = ft_printf("8, precision 5 width 0 \n%05\n", "str");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("8, precision -5 width 20 \n%20.*s|\n", -5, "42");
	c = ft_printf("8, precision -5 width 20 \n%20.*s|\n", -5, "42");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("8, precision -5 width 20 \n%20.*s|\n", -5, "42");
	c = ft_printf("8, precision -5 width 20 \n%20.*s|\n", -5, "42");
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	ft_printf("%tttt\n", "lol");
	printf("%tttt\n", "lol");
	ft_printf("%d\n", ft_printf(NULL));


	ft_printf("%X\n", NULL);
	printf("%X\n", NULL);
			n = printf("8, precision 0 width 10 \n%0*.*d|\n", 4, 0, -12);
	 c = ft_printf("8, precision 0 width 10 \n%0*.*d|\n", 4, 0, -12);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);

	n = printf("ne moi %% *.5i 42 == |% *.5i|\n", 4, 42);
	c = ft_printf("moi    %% *.5i 42 == |% *.5i|\n", 4, 42);
	printf("norm %d -- custom %d\n---------------------------------\n", n, c);
}
