#include "tad.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14

Point *pointCreate(double x, double y){
    Point *p;

    p = malloc(sizeof(Point));

    if (p != NULL){
        p->x = x;
        p->y = y;
    }
    
    return p;
}

void pointDelete(Point *P){
    free(P);
}

void pointAccess(Point *p, double *x, double *y){
    *x = p->x;
    *y = p->y;
}

void pointAssign(Point *p, double *x, double *y){
    p->x = *x;
    p->y = *y;
}

double pointDistanceBetween(Point *P1, Point *P2){
    double x1x2 = pow(P1->x - P2->y, 2);
    double y1y2 = pow(P1->y - P2->y, 2);
    return sqrt(x1x2 + y1y2);
}

Circle *circleCreate(double x, double y, double radius){
    Circle *C;

    C = malloc(sizeof(Circle));

    if(C != NULL){
        C->p = pointCreate(x, y);
        C->r = radius;
    }

    return C;
}

void circleDelete(Circle *C){
    free(C);
}

double circleArea(Circle *C){
    return PI * (pow(C->r, 2));
}

int circleInterior(Point *P, Circle *C){
    double val = pointDistanceBetween(P, C->p);
    if (val <= C->r) return 1;
    else return 0;
}