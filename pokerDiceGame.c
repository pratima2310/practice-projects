#include <stdio.h>

// Add all occurences of goal value
int CheckSingles(int dice[], int goal) {
   int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == goal) {
            sum += goal;
        }
    }
    return sum;
}

// Check for three of a kind (score = 30)
int CheckThreeOfKind(int dice[]) {
    for (int i = 0; i < 3; i++) {
        if (dice[i] == dice[i+1] && dice[i] == dice[i+2]) {
            return 30;
        }
    }
    return 0;
}

// Check for four of a kind (score = 40)
int CheckFourOfKind(int dice[]) {
    for (int i = 0; i < 2; i++) {
        if (dice[i] == dice[i+1] && dice[i] == dice[i+2] && dice[i] == dice[i+3]) {
            return 40;
        }
    }
    return 0;
}

// Check for five of a kind (score = 50)
int CheckFiveOfKind(int dice[]) {
       if (dice[0] == dice[1] && dice[0] == dice[2] && dice[0] == dice[3] && dice[0] == dice[4]) {
        return 50;
    }
    return 0;

}

// Check for full house (score = 35)
int CheckFullHouse(int dice[]) {
   if (dice[0] == dice[1] && dice[0] == dice[2] && dice[3] == dice[4]) {
        return 35;
    }
    if (dice[0] == dice[1] && dice[2] == dice[3] && dice[2] == dice[4]) {
        return 35;
    }
    return 0;
}

// Check for straight (score = 45)
int CheckStraight(int values[]) {
   int sorted[5];
    for (int i = 0; i < 5; i++) {
        sorted[i] = values[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (sorted[j] > sorted[j+1]) {
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (sorted[i] != sorted[i+1]-1) {
            return 0;
        }
    }
    return 45;
}

// Find high score
int FindHighScore(int values[]) {
   int highScore = 0;
    int score;

    for (int i = 1; i <= 6; i++) {
        score = CheckSingles(values, i);
        if (score > highScore) {
            highScore = score;
        }
    }

    score = CheckThreeOfKind(values);
    if (score > highScore) {
        highScore = score;
    }

    score = CheckFourOfKind(values);
    if (score > highScore) {
        highScore = score;
    }

    score = CheckFiveOfKind(values);
    if (score > highScore) {
        highScore = score;
    }

    score = CheckFullHouse(values);
    if (score > highScore) {
        highScore = score;
    }

    score = CheckStraight(values);
    if (score > highScore) {
        highScore = score;
    }

    return highScore;
}

int main(void) {
   int diceValues[5];
    int highScore = 0;

    // Fill array with five values from input in ascending order
    for(int i = 0; i < 5; ++i) {
        scanf("%d", &diceValues[i]);
    }

    // Find high score and output
    highScore = FindHighScore(diceValues);
    printf("High score: %d\n", highScore);

    return 0;
}