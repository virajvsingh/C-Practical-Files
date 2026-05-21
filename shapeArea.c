#include <stdio.h>
#include <math.h>

float circArea(float radius);
float rectArea(float length, float width);
float squareArea(float side);
float triangleArea(float base,float height);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    while (1)
    {
        printf("Choose an option: \n"
            "a. Area of Circle (Press 1)\n"
            "b. Area of Rectangle (Press 2)\n"
            "c. Area of Square (Press 3)\n"
            "d. Area of Triangle (Press 4)\n"
            "e. To exit (Press 5)\n");
        int option;
        scanf("%d",&option);

        float area;

        switch (option)
        {
        case 1:
            // Area of Circle
            printf("Enter radius of Circle: ");
            float radius;
            scanf("%f",&radius);

            area = circArea(radius);
            printf("Area of Circle: %f\n\n",area);
            break;
        case 2:
            // Area of Rectangle
            printf("Enter length of Rectangle: ");
            float length;
            scanf("%f",&length);

            printf("Enter width of Rectangle: ");
            float width;
            scanf("%f",&width);

            area = rectArea(length,width);
            printf("Area of Rectangle: %f\n\n",area);
            break;
        case 3:
            // Area of Square
            printf("Enter side of Square: ");
            float side;
            scanf("%f",&side);

            area = squareArea(side);
            printf("Area of Square: %f\n\n",area);
            break;
        case 4:
            // Area of Triangle
            printf("Enter base of Triangle: ");
            float base;
            scanf("%f",&base);

            printf("Enter height of Triangle: ");
            float height;
            scanf("%f",&height);

            area = triangleArea(base,height);
            printf("Area of Triangle: %f\n\n",area);
            break;
        case 5:
            printf("Exiting program!\n\n");
            break;
        
        default:
            printf("Wrong option selected!\n\n");
            break;
        }

        if (option == 5){
            break;
        }

    }
    
}

float circArea(float radius){
    float area = 3.14*pow(radius,2);
    return area;
}

float rectArea(float length, float width){
    float area = length*width;
    return area;
}

float squareArea(float side){
    float area = pow(side,2);
    return area;
}

float triangleArea(float base,float height){
    float area = 0.5*base*height;
    return area;
}

