#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Point{
int x;
int y;
struct Point* next;
} Point;
typedef struct{
Point* points;
} PolyLine;
// template Code
void add_point(PolyLine* line, int x, int y)
{
 // Write solution code
 Point* newPoint = (Point*)malloc(sizeof(Point));
    newPoint->x = x;
    newPoint->y = y;
    newPoint->next = NULL;

    if (line->points == NULL)
        line->points = newPoint;
    else {
        Point* temp = line->points;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newPoint;
    }
}

int manhattan_distance(PolyLine* line)
{
    // Write solution code
    int distance = 0;
    Point* current = line->points;

    while (current != NULL && current->next != NULL) {
        distance += abs(current->x - current->next->x) +
                    abs(current->y - current->next->y);
        current = current->next;
    }

    return distance;

}

void print_line(PolyLine* p){
    Point* current = p->points;
    while(current!=NULL){
        printf("(%d,%d)->",current->x, current->y);
        current = current->next;
    }
    printf("END\n");
}

int main(){
    int x,y;
    int read_next;
    PolyLine line = {NULL};
    while(scanf("%d", &read_next) && read_next)
    {
        scanf("%d %d", &x, &y);
        add_point(&line,x,y);
    }
    print_line(&line);
    printf("%d\n", manhattan_distance(&line));
    
    return 0;
}