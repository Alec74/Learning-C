/* Text program chapter 8 deal.c */
// Deals a random hand of cards

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITES 4
#define NUM_RANKS 13

int main(void){
    bool in_hand[NUM_SUITES][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while(num_cards > 0){
        suit = rand() % NUM_SUITES; //picks a random suite
        rank = rand() % NUM_RANKS; //picks random rank
        if (!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}