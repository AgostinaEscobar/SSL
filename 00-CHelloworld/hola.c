#include <stdio.h>
#include <ctype.h>

int main (void)
{
    printf("Hola soy agostina!\n");
    int i=21;
    char c= 'c';
    printf("Tengo %d y %c\n", i,c);

    int cumpleanos[3];
    scanf("%d %d %d", &cumpleanos[0], &cumpleanos[1], &cumpleanos[2]);
    printf("Naci el %d de %d del ano %d\n", cumpleanos[0], cumpleanos[1], cumpleanos[2]);

    FILE *f = fopen("output.txt", "w");
    fprintf(f,"Tengo %d y %c\n", i,c);
    fprintf(f,"Naci el %d de %d del ano %d\n", cumpleanos[0], cumpleanos[1], cumpleanos[2]);
    fclose(f);

}
