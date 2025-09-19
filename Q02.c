#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x_coordinate;
    int y_coordinate;

    printf("ENTER THE X AND Y COORDINATES TO DETERMIN WHICH QUADRANTS THEY ARE IN:\n");
    scanf(" %d \n %d",&x_coordinate,&y_coordinate);
    if(x_coordinate>0 && y_coordinate>0){
        printf("The point(%d,%d) lies in quadrant I",x_coordinate,y_coordinate);
    }
    else if(x_coordinate<0 && y_coordinate>0){
        printf("The point(%d,%d) lies in quadrant II",x_coordinate,y_coordinate);
    }
    else if(x_coordinate<0 && y_coordinate<0){
        printf("The point(%d,%d) lies in quadrant III",x_coordinate,y_coordinate);
    }
    else if(x_coordinate>0 && y_coordinate<0){
        printf("The point(%d,%d) lies in quadrant IV",x_coordinate,y_coordinate);
    }
    else if(x_coordinate==0 && y_coordinate==0){
        printf("The point(%d,%d) lies at origin",x_coordinate,y_coordinate);
    }
    else if(x_coordinate==0){
        printf("The point (%d,%d) lies at y axis", x_coordinate,y_coordinate);
    }
    else if(y_coordinate==0){
        printf("The point (%d,%d) lies at x axis",x_coordinate,y_coordinate);
    }
    return 0;

}
