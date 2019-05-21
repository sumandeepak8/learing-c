#include <stdio.h>

struct point{
  int x;
  int y;
};

typedef struct{
int x;
int y;
}Coordinate;

int sub(Coordinate coordinate){
  int x = coordinate.x;
  int y = coordinate.y;
  return x-y;
}

int sum(struct point point1){
  int x = point1.x;
  int y = point1.y;
  return x+y;
}

int main(){
  struct point point1; 
  point1.x = 3;
  point1.y = 2;
  printf("value of point and value should be 5 %d\n", sum(point1));
  Coordinate coordinate;
  coordinate.x = 3;
  coordinate.y = 1;
  printf("value of sub using pass of coordinates and value should be 2 %d\n", sub(coordinate));
  return 0;
}
