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
//void addRecipe();
//void modifyRecipe();
//void printRecipes();
//void removeRecipe();
//void addIngredient();
//void printGroceryList();


int main(int *argc, int argv[]) {

    recipe *book = malloc(sizeof(recipe));

    int userInput;

    // Start by reading the files current state
    readFile(book);

    // Now that it's read, prompt user for menu
    printf("-------- Grocery Manager --------\n");
    printf("  1) Add a recipe\n");
    printf("  2) Modify a recipe\n");
    printf("  3) Print recipes\n");
    printf("  4) Print grocery list\n");
    printf("  -1) Exit Program");
    printf("Enter a command: ");

    if (userInput == -1) {
        printf("Exiting program\n");
        exit(1);
    }

    else if (userInput == 1) {
        // add recipe
    }

    else if (userInput == 2) {
        // modify recipe
    }

    else if (userInput == 3) {
        // print recipes
    }

    else if (userInput == 4) {
        // print grocery list
    }

    else {
        printf("Invalid input, exiting...\n");
        exit(2);
    }

    scanf("%d", &userInput);
    





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