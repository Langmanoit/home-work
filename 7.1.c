#include <stdio.h>
#include <math.h>
#include <string.h>

struct point 
{
    double x, y;
};
typedef struct point Point;

struct triangle 
{
    Point a, b, c;
};
typedef struct triangle Triangle;

void point_point(struct point a){
    printf("(%lf %lf)", a.x, a.y);
}
void point_triangle(struct triangle g){
    printf("{");
    point_point(g.a); 
    printf(", ");
    point_point(g.b);
    printf(", ");
    point_point(g.c); 
    printf("}");
}
double distance(struct point a, struct point b){
    return sqrt( pow((a.x-b.x),2) + pow((a.y-b.y),2));
}

double get_triangle_perimeter(const struct triangle* p){
    return distance(p->a, p->b)+distance(p->b, p->c)+distance(p->c, p->a);
}
double get_triangle_area(const struct triangle* q){
    double p=get_triangle_perimeter(q) /2;

    return sqrt(p* (p-distance(q->a, q->b))* (p-distance(q->b, q->c))* (p-distance(q->c, q->a)));
}
struct triangle moved_triangle(struct triangle* p, struct point v){
    p->a.x = p->a.x+v.x;
    p->a.y = p->a.y+v.y;
    p->b.x = p->b.x+v.x;
    p->b.y = p->b.y+v.y;
    p->c.x = p->c.x+v.x;
    p->c.y = p->c.y+v.y;
    return *p;
}




int main()
{
    
}