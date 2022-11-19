#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ingredient {
    char name[50];
    int amount;
    char measureType[20];

}ingredient;

typedef struct recipe {
    char name[100];
    ingredient list[50];


}recipe;

void readFile(recipe list[]);
//void addRecipe()
//void printRecipes()
//void removeRecipe()
//void addIngredient()
//void printGroceryList()


int main(int *argc, int argv[]) {

    recipe *book = malloc(sizeof(recipe));
    readFile(book);





    return 0;
}

/* File Structure: 

Number recipes
Recipe name
number ingredients
10g flour
...
...
...


*/

void readFile(recipe list[]) {

    FILE *ifp = fopen("recipes.txt", "r");

    

    exit(1);
}