#ifndef TAD_H_
#define TAD_H_

    typedef struct point{
        double x;
        double y;
    } Point;


    typedef struct circle{
        Point *p;
        double r;
    } Circle;

    Point *pointCreate(double x, double y);
    void pointDelete(Point *P);
    void pointAccess(Point *p, double *x, double *y);
    void pointAssign(Point *p, double *x, double *y);
    double pointDistanceBetween(Point *P1, Point *P2);

    Circle *circleCreate(double x, double y, double radius);
    void circleDelete(Circle *C);
    double circleArea(Circle *C);
    int circleInterior(Point *P, Circle *C);

#endif