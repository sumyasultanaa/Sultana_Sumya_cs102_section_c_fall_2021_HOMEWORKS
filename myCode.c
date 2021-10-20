#include <stdio.h>

int main (void) {
/* declaring integer variable to store height and width */
int height, width ;
/* taking height and width as input from the user */ 
	printf("Enter the height of the rectangle: ");
scanf("%d",&height);
printf("Enter the width of the rectangle: ");
scanf("%d",&width);
/* calculating the perimeter of the rectangle */
int perimeter = 2 * (height + width);
/* displaying the perimeter of the rectangle */ 
printf("\nPerimeter of th rectangle: %d\n",perimeter);

return 0;

}
