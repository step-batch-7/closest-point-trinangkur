#include <math.h>
#include "point.h"

double get_distance(Point point_a, Point point_b) {
  return sqrt(pow((point_a.x - point_b.x), 2) + pow((point_a.y - point_b.y), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  double current_distance, smallest_distance;

  *closest_food_location = food_points[FIRST_POS];
  smallest_distance = get_distance(food_points[FIRST_POS], current_location);

  for (int index = 1; index < points_length; index++) {
    current_distance = get_distance(food_points[index], current_location);

    IS_NEARER_FOOD {
      *closest_food_location = food_points[index];
      smallest_distance = current_distance;
    }
  }
}
