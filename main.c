// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


#include <stdio.h>
#define PI 3.14159
#define AREA(r) (PI*r*r)
int main(){
   int radius = 5;
   float area = AREA(radius);
   printf("Area: %f", area);
   return 0;
}