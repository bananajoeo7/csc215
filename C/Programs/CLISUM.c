#include <stdio.h>

int main(argc, argv)
int argc;
char *argv[];
{
        int i;
        int total;
        total = 0;

        for (i = 1; i < argc; i++) {
                int num;
                char *string_check;
                string_check = argv[i];
                num = atoi(argv[i]);

                if (num == 0 && *string_check != '0') {
			printf("Ruh Roh! %s is not a number", argv[i]);
			return 1;
		}

                total += num;
        }
        

        printf("%d", total);
        return 0;
}