#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

struct pokemon {
    char name[100];
    int health;
    int attack;
    int defense;
};

struct pokemon pokemons[10];
struct pokemon caught_pokemons[10];
struct pokemon opponent[10];
int caught_count = 0;

void storeStats() {
    for (int i = 0; i < 10; ++i) {
        pokemons[i].health = rand() % 51 + 150;
        pokemons[i].attack = rand() % 21 + 70;
        pokemons[i].defense = rand() % 49 + 1;
    }
    char opponentNames[8][100] = { "Bulbasaur", "Caterpie", "Charmander", "Dragonite", "Eevee", "Gengar", "Magikarp", "Mewtwo" };
    for (int i = 0; i < 8; i++) {
        strcpy(opponent[i].name, opponentNames[i]);
        opponent[i].health = rand() % 51 + 150;
        opponent[i].attack = rand() % 21 + 70;
        opponent[i].defense = rand() % 49 + 1;
    }
}

void catchPokemon() {
    puts("Rules:\nGuess Pokemon's name to catch them to prepare for the Pokemon Battle\n\n\n");

    puts("Pokemon 1\n");
    char A[100];
    char A1[] = "bulbasaur";
    strcpy(pokemons[0].name, "Bulbasaur");

    FILE* imageFile1 = fopen("bulbasaur.txt", "r");
    if (imageFile1 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile1)) != EOF) {
            putchar(ch);

        }
        fclose(imageFile1);
    }
    else {
        printf("Unable to open image file.\n");
    }


    printf("\nEnter name: \n");
    scanf("%s", A);
    strlwr(A);

    int result = strcmp(A, A1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Bulbasaur's power:\n");
        printf("Health: %d\n", pokemons[0].health);
        printf("Attack: %d\n", pokemons[0].attack);
        printf("Defense: %d\n", pokemons[0].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[0];

    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 2\n");
    char B[100];
    char B1[] = "caterpie";
    strcpy(pokemons[1].name, "Caterpie");

    FILE* imageFile2 = fopen("caterpie.txt", "r");
    if (imageFile2 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile2)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile2);
    }
    else {
        printf("Unable to open image file.\n");
    }

    printf("\nEnter name: \n");
    scanf("%s", B);
    strlwr(B);

    result = strcmp(B, B1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Caterpie's power:\n");
        printf("Health: %d\n", pokemons[1].health);
        printf("Attack: %d\n", pokemons[1].attack);
        printf("Defense: %d\n", pokemons[1].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[1];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 3\n");
    char C[100];
    char C1[] = "charmander";
    strcpy(pokemons[2].name, "Charmander");

    FILE* imageFile3 = fopen("charmander.txt", "r");
    if (imageFile3 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile3)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile3);
    }
    else {
        printf("Unable to open image file.\n");
    }


    printf("\nEnter name: \n");
    scanf("%s", C);
    strlwr(C);

    result = strcmp(C, C1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Charmander's power:\n");
        printf("Health: %d\n", pokemons[2].health);
        printf("Attack: %d\n", pokemons[2].attack);
        printf("Defense: %d\n", pokemons[2].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[2];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 4\n");
    char D[100];
    char D1[] = "rapidash";
    strcpy(pokemons[3].name, "Rapidash");

    FILE* imageFile4 = fopen("rapidash.txt", "r");
    if (imageFile4 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile4)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile4);
    }
    else {
        printf("Unable to open image file.\n");
    }


    printf("\nEnter name: \n");
    scanf("%s", D);
    strlwr(D);
    result = strcmp(D, D1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Rapidash's power:\n");
        printf("Health: %d\n", pokemons[3].health);
        printf("Attack: %d\n", pokemons[3].attack);
        printf("Defense: %d\n", pokemons[3].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[3];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 5\n");
    char E[100];
    char E1[] = "slowbro";
    strcpy(pokemons[4].name, "Slowbro");

    FILE* imageFile5 = fopen("slowbro.txt", "r");
    if (imageFile5 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile5)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile5);
    }
    else {
        printf("Unable to open image file.\n");
    }



    printf("\nEnter name: \n");
    scanf("%s", E);
    strlwr(E);
    result = strcmp(E, E1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Slowbro's power:\n");
        printf("Health: %d\n", pokemons[4].health);
        printf("Attack: %d\n", pokemons[4].attack);
        printf("Defense: %d\n", pokemons[4].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[4];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 6\n");
    char F[100];
    char F1[] = "blastoise";
    strcpy(pokemons[5].name, "Blastoise");

    FILE* imageFile6 = fopen("blastoise.txt", "r");
    if (imageFile6 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile6)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile6);
    }
    else {
        printf("Unable to open image file.\n");
    }


    printf("\nEnter name: \n");
    scanf("%s", F);
    strlwr(F);
    result = strcmp(F, F1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Blastoise's power:\n");
        printf("Health: %d\n", pokemons[5].health);
        printf("Attack: %d\n", pokemons[5].attack);
        printf("Defense: %d\n", pokemons[5].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[5];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 7\n");
    char G[100];
    char G1[] = "charizard";
    strcpy(pokemons[6].name, "Charizard");

    FILE* imageFile7 = fopen("charizard.txt", "r");
    if (imageFile7 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile7)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile7);
    }
    else {
        printf("Unable to open image file.\n");
    }



    printf("\nEnter name: \n");
    scanf("%s", G);
    strlwr(G);
    result = strcmp(G, G1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Charizard's power:\n");
        printf("Health: %d\n", pokemons[6].health);
        printf("Attack: %d\n", pokemons[6].attack);
        printf("Defense: %d\n", pokemons[6].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[6];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

    puts("Pokemon 8\n");
    char H[100];
    char H1[] = "pikachu";
    strcpy(pokemons[7].name, "Pikachu");

    FILE* imageFile8 = fopen("pikachu.txt", "r");
    if (imageFile8 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile8)) != EOF) {
            putchar(ch);
        }
        fclose(imageFile8);
    }
    else {
        printf("Unable to open image file.\n");
    }



    printf("\nEnter name: \n");
    scanf("%s", H);
    strlwr(H);
    result = strcmp(H, H1);

    if (result == 0) {
        printf("Catch complete!\n\n");
        printf("Pikachu's power:\n");
        printf("Health: %d\n", pokemons[7].health);
        printf("Attack: %d\n", pokemons[7].attack);
        printf("Defense: %d\n", pokemons[7].defense);
        ++caught_count;
        caught_pokemons[caught_count] = pokemons[7];
    }
    else {
        printf("Catch fail!\n");
    }
    sleep(2);
    system("cls");

}

void battlePokemon() {
    printf("Choose your pokemon to battle: \n");
    for (int i = 1; i <= caught_count; i++) {
        printf("%d. %s\n", i, caught_pokemons[i].name);
        printf("Health: %d\n", caught_pokemons[i].health);
        printf("Attack: %d\n", caught_pokemons[i].attack);
        printf("Defense: %d\n", caught_pokemons[i].defense);
        printf("\n");
    }
    int selection;
    scanf("%d", &selection);
    printf("You chose %s", caught_pokemons[selection].name);
    sleep(5);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("%65s", "READY FOR THE BATTLE...");
    sleep(3);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("%58d", 3);
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("%58d", 2);
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("%58d", 1);
    sleep(1);
    system("cls");

    int random = rand() % 8;
    while (caught_pokemons[selection].health > 0 && opponent[random].health > 0) {
        printf("Rules: Light Attack > Block, Block > Heavy Attack, Heavy Attack > Light Attack");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("Your pokemon: %s %65s: %s\n", caught_pokemons[selection].name, "Opponent Pokemon", opponent[random].name);
        printf("Health: %d %70s: %d\n", caught_pokemons[selection].health, "Health", opponent[random].health);
        printf("Attack: %d %70s: %d\n", caught_pokemons[selection].attack, "Attack", opponent[random].attack);
        printf("Defense: %d %70s: %d\n", caught_pokemons[selection].defense, "Defense", opponent[random].defense);

        printf("\n");
        int action;
        printf("1. Light Attack\n");
        printf("2. Heavy Attack\n");
        printf("3. Block\n\n");
        printf("Choose your action: ");
        scanf("%d", &action);
        int opponent_action = rand() % 3 + 1;
        if (action == 1 && opponent_action == 1) {
            printf("%s uses Light Attack\n", opponent[random].name);
            printf("You deal no damage");
            sleep(3);
        }
        else if (action == 1 && opponent_action == 2) {
            caught_pokemons[selection].health = caught_pokemons[selection].health - (opponent[random].attack - caught_pokemons[selection].defense);
            printf("%s uses Heavy Attack", opponent[random].name);
            sleep(3);
        }
        else if (action == 1 && opponent_action == 3) {
            opponent[random].health = opponent[random].health - (opponent[random].attack - caught_pokemons[selection].defense);
            printf("%s uses Block", opponent[random].name);
            sleep(3);
        }
        else if (action == 2 && opponent_action == 1) {
            opponent[random].health = opponent[random].health - (caught_pokemons[selection].attack - opponent[random].defense);
            printf("%s uses Light Attack", opponent[random].name);
            sleep(3);
        }
        else if (action == 2 && opponent_action == 2) {
            printf("%s uses Heavy Attack\n", opponent[random].name);
            printf("You deal no damage");
            sleep(3);
        }
        else if (action == 2 && opponent_action == 3) {
            caught_pokemons[selection].health -= opponent[random].attack;
            printf("%s uses Block", opponent[random].name);
            sleep(3);
        }
        else if (action == 3 && opponent_action == 1) {
            caught_pokemons[selection].health = caught_pokemons[selection].health - (opponent[random].attack - caught_pokemons[selection].defense);
            printf("%s uses Light Attack", opponent[random].name);
            sleep(3);
        }
        else if (action == 3 && opponent_action == 2) {
            opponent[random].health -= caught_pokemons[selection].attack;
            printf("%s uses Heavy Attack", opponent[random].name);
            sleep(3);
        }
        else if (action == 3 && opponent_action == 3) {
            printf("%s uses Block\n", opponent[random].name);
            printf("You deal no damage");
            sleep(3);
        }
        system("cls");
    }
    if (caught_pokemons[selection].health <= 0 && opponent[random].health > 0) {
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("%60s %s", "You lose against", opponent[random].name);
    }
    else if (caught_pokemons[selection].health > 0 && opponent[random].health <= 0) {
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("%60s %s", "You win against", opponent[random].name);
    }
}

int main(void) {

    FILE* imageFile0 = fopen("intro.txt", "r");
    if (imageFile0 != NULL) {
        char ch;
        while ((ch = fgetc(imageFile0)) != EOF) {
             putchar(ch);
        }
        fclose(imageFile0);
    }
    else {
        printf("Unable to open image file.\n");
    }

    printf("\n%s\n\n", "Pokemon Game");
    printf("STAGE 1  -  Catch Pokemon\n");
    printf("STAGE 2  -  Battle\n");

    srand(time(NULL));
    storeStats();

    sleep(5);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("%60s\n", "Ready - R");
    printf("%60s\n", "Quit - Q");

    char selectionop = tolower(getchar());
        switch (selectionop) {
        case 'r':
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("%65s", "Starting game...");
            sleep(3);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("%58d", 3);
            sleep(1);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("%58d", 2);
            sleep(1);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("%58d", 1);
            sleep(1);
            system("cls");
            catchPokemon();
            battlePokemon();
            break;

        case 'q':
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("%65s", "Game is quitting");
            sleep(2);
            return 0;
            break;
        default:
            printf("Invalid choice");
            break;
        }

    return 0;
}


