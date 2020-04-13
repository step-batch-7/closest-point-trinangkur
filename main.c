#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_POINTS;
  Point current_location, closest_food_location;
  printf("Enter current location:\n");

  ASK_ABSCISSA;
  GET_ABSCISSA;
  ASK_ORDINATE;
  GET_ORDINATE;

  get_closest_food(food_points, sizeof(food_points)/sizeof(food_points[0]) , current_location, &closest_food_location);
  printf("Closest food location is [%d, %d]\n", closest_food_location.x, closest_food_location.y);
  return 0;
}