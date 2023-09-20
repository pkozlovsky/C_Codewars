/*
Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"
*/
enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
    if(p1 == p2) return DRAW;

    switch(p1) {
        case ROCK:
            return (p2 == SCISSORS) ? P1_WON : P2_WON;
        case PAPER:
            return (p2 == ROCK) ? P1_WON : P2_WON;
        case SCISSORS:
            return (p2 == PAPER) ? P1_WON : P2_WON;
    }
}
