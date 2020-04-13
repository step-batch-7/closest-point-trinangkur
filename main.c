#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = {{18, 76},{19, 66},{89, 57},{9, 71},{55, 38}};
  Point current_location, closest_food_location;
  printf("Enter current location:\n");
  printf("X co-ordinate: ");
  scanf("%d", &current_location.x);
  printf("Y co-ordinate: ");
  scanf("%d", &current_location.y);

  get_closest_food(food_points, sizeof(food_points)/sizeof(food_points[0]) , current_location, &closest_food_location);
  printf("Closest food location is [%d, %d]\n", closest_food_location.x, closest_food_location.y);
  return 0;
}