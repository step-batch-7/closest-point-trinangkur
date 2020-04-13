#include <math.h>
#include "point.h"

double get_distance(Point *point_a, Point *point_b) {
  return sqrt(pow((point_a->x - point_b->x), 2) + pow((point_a->y - point_b->y), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  double current_distance, smallest_distance;
  for (int i = 0; i < points_length; i++) {
    current_distance = get_distance(&food_points[i], &current_location);
    if(smallest_distance > current_distance || i == 0) {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
      smallest_distance = current_distance;
    }
  }
}
