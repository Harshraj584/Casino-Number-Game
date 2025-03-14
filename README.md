# Casino-Number-Game

This is a simple number guessing and betting game implemented in C++. The player starts by depositing an initial amount of money and then places bets on guessing a randomly generated number between 1 and 10. If the guessed number matches the randomly generated number, the player wins ten times their bet amount; otherwise, they lose the bet amount. The game continues until the player either runs out of money or chooses to exit.

# Features

- Players deposit an initial amount before playing.
- Players place a bet before guessing a number.
- The number is randomly generated using rand().
- If the guessed number matches the random number, the player wins 10 times the bet.
- If the guessed number is incorrect, the player loses their bet amount.
- The game continues until the player runs out of money.
- Players can restart the game after losing all their money.

# How to Play

- Enter a deposit amount to start playing.
- Enter the amount you want to bet.
- Guess a number between 1 and 10.
- If you guess correctly, you win 10 times the bet amount.
- If you guess incorrectly, you lose the bet amount.
- The game continues until you run out of money or choose to exit.
- If your balance reaches zero, you can choose to restart or exit the game.

# Dependencies

- Standard C++ Libraries: <iostream>, <vector>, <algorithm>, <string>, <cstdlib>, <ctime>
- Uses **rand()** for random number generation.

# Notes

The random number generator does not use **srand(time(0))**, so the sequence of random numbers might be predictable each run.
Using goto for restarting is not considered best practice; a loop-based approach would be cleaner.
