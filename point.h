/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/

#define ASK_ABSCISSA printf("Enter abscissa (X co-ordinate): ")
#define ASK_ORDINATE printf("Enter ordinate (Y co-ordinate): ")
#define GET_ABSCISSA scanf("%d", &current_location.x)
#define GET_ORDINATE scanf("%d", &current_location.y)

#define FOOD_POINTS {{18, 76},{19, 66},{89, 57},{9, 71},{55, 38}}
#define IS_NEARER_FOOD if(smallest_distance > current_distance)
#define FIRST_POS 0

typedef struct 
{
  int x;
  int y;
} Point;

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
