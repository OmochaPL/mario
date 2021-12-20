#include <stdio.h>
#include <cs50.h>

/*program tworzy schody (jak te w mario), o wysokości podanej przez użytkownika */

void draw(int h);

int main(void) 
{ 
    int height = get_int("Height: ");
    draw(height);
}

void draw(int h)
{
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}
