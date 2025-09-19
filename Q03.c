#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char eye_sight;
    char wriiten;
    char driving;
    char medical;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age >=18){
        printf("Have you passed your eyesight exam(Y/N):\n");
        scanf(" %c",&eye_sight);
        if (eye_sight=='Y' || eye_sight=='y'){
            printf("Have you passed your written exam(Y/N):\n");
            scanf(" %c",&wriiten);
        }
        else if(eye_sight=='N' || eye_sight=='n'){
            printf("You might need prescription for glsses\n");
            return 0;
        }
        else {
            printf("Invalid option");
            return 0;
        }
        printf("Did you pass your driving test(Y/N):\n");
        scanf(" %c",&driving);
        if (driving=='Y'||driving=='y'){
                if(age>60){
                    printf("Do you have medical fitness test(Y/N)\n");
                    scanf(" %c",&medical);
                    if (medical=='Y'|| medical=='y'){
                        printf("You are eligible for the license");
                        }

                    else if(medical =='N' || medical=='n'){
                        printf("You are ineligible");
                        return 0;
                    }
                    else{
                        printf("Invalid option");
                        return 0;
                    }
                }
                else if(age>= 18 && age<60){
                    printf("You are eligible for license");
                    return 0;

                }

        }

    }
    else if (age>=0 && age<18){
        printf("You are ineligible ");

    }
    else{
        printf("Invalid age");
        return 0;
    }
}

