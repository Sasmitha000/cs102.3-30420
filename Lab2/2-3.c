#include <stdio.h>

int main() 
{
    /*
    int distanceTraveled,timeTaken;

    printf("Enter the Distance Traveled: ");
    scanf("%d",&distanceTraveled);
    printf("Enter the Time Taken: ");
    scanf("%d",&timeTaken);

    int averageSpeed =distanceTraveled/timeTaken;

    printf("Average Speed = %d \n",averageSpeed);

    When division is done with two integers, integer division occurs, which will cut of any decimal values from the answer if there are any.Which will give us a slight error in the answer.
    In order to stop integer division from happening, both if not one must be a float value, we can use Explicit type conversion in front of the operation.
    */

    int distanceTraveled,timeTaken;

    printf("Enter the Distance Traveled: ");
    scanf("%d",&distanceTraveled);
    printf("Enter the Time Taken: ");
    scanf("%d",&timeTaken);

    float averageSpeed =(float)distanceTraveled/timeTaken;

    printf("Average Speed = %f \n",averageSpeed);
}