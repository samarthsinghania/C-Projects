//Plan: write a program to calculate distance between two coordinates(of cartesian plane). 
//Formula = root of (x2-x1)^2 + (y2-y1)^2 OR root of (x1-x2)^2 + (y1-y2) 

#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
     
    //taking input from user:
    printf("Please enter Point 1st\'s x coordinate: ");
    scanf("%d", &x1);
    printf("Please enter Point 1st\'s y coordinate: ");
    scanf("%d", &y1);
    printf("Please enter Point 2nd\'s x coordinate: ");
    scanf("%d", &x2);
    printf("Please enter Point 2nd\'s y coordinate: ");
    scanf("%d", &y2);

    printf("The coordinates are: (%d,%d) and (%d,%d)", x1, y1, x2, y2);
    // x1 = 2;
    // y1 = 3;
    // x2 = 3;
    // y2 = 2;
    
    float distance = sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
    //i dont think this is gonna work,,...
    printf("The distance between point : (%d,%d) and (%d,%d) is: %.3f", x1, y1, x2, y2, distance);
    return 0;
}

//(1)+(1)= √2, == 1.14....1.41421356237,, oohh it was round-off before,,,