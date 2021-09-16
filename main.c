#include <stdio.h>
int counter=0;
void printPoint(int a, int b);
void outputResult(int a, int b);
void scanPointX(int a);
void scanPointY(int a);
float checkPointX(float a, float b);
float checkPointY(float a, float b);
int main()
{
    float xPoint1=0, yPoint1=0, xPoint2=0, yPoint2=0, xPoint3=0, yPoint3=0, comparedY=0;
    xPoint1=checkPointX(1, xPoint1);
    yPoint1=checkPointY(1, yPoint1);
    xPoint2=checkPointX(2, xPoint2);
    yPoint2=checkPointY(2, yPoint2);
    xPoint3=checkPointX(3, xPoint3);
    yPoint3=checkPointY(3, yPoint3);
    printPoint(xPoint1, yPoint1);
    printPoint(xPoint2, yPoint2);
    printPoint(xPoint3, yPoint3);
    if(xPoint1==xPoint2)
    {
         if(yPoint1!=yPoint3)
         {
            if(xPoint3==xPoint1)
                 printf("On the straight line\n");
            if(xPoint3<xPoint1)
                 printf("Lefter than straight line\n");
            if(xPoint3>xPoint1)
                 printf("Righter than straight line\n");
          }
          if(yPoint1==yPoint2)
                printf("Syntaxix Error, Please correct your data\n");
    }
    if(xPoint1<xPoint2)
    {
        comparedY=((yPoint2-yPoint1)/(xPoint2-xPoint1)*(xPoint3-xPoint1)+yPoint1);
        outputResult(yPoint3, comparedY);
    }
    if(xPoint1>xPoint2)
    {
        comparedY=((yPoint1-yPoint2)/(xPoint1-xPoint2)*(xPoint3-xPoint1)+yPoint1);
        outputResult(yPoint3, comparedY);
    }
    return 0;
}
void printPoint(int a, int b)
{
    counter++;
    printf("Point %d: x: %d y: %d\n",counter, a, b);
}
void scanPointX(int a)
{
    printf("Point %d X: ", a);
}
void scanPointY(int a)
{
    printf("Point %d Y: ", a);
}
void outputResult(int a, int b)
{
    if(a>b)
        printf("Over the straight line\n");
    if(a<b)
        printf("Under the straight line\n");
    if(a==b)
        printf("On the straight line\n");
}
float checkPointX(float a, float b)
{
    float c;
    do
    {
        scanPointX(a);
        fflush(stdin);
        c = scanf("%g", &b);
    }
    while (c < 1);
    return b;
}
float checkPointY(float a, float b)
{
    float c;
    do
    {
        scanPointY(a);
        fflush(stdin);
        c = scanf("%g", &b);
    }
    while (c < 1);
    return b;
}
