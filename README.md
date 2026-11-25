# C++ Casino Dice Game

This project’s working program is [`main.cpp`](main.cpp), a simple one-round casino dice game. The player enters a starting balance and a bet, and the program rolls two dice. A roll totaling `7`, `11`, or `5` wins the bet; every other total loses it. Other source files and executables in the folder are not part of the working program.

## Rules

- Two six-sided dice are rolled.
- The result is the sum of both dice.
- Winning totals: `5`, `7`, or `11`.
- On a win, the player receives the bet amount as gross winnings.
- State tax: `4%` of gross winnings.
- County tax: `2%` of gross winnings.
- Net payout is the gross winnings minus both taxes.
- On a loss, the bet amount is deducted from the starting balance.

## Features

- Random dice generation using `rand()` and `time()`
- Win and loss conditions
- State and county tax calculations
- Currency output formatted to two decimal places
- Updated balance display after the round

## Requirements

- A C++ compiler, such as GCC or MinGW
- A terminal or command prompt

## Compile

From this folder, compile `main.cpp` with:

```bash
g++ main.cpp -o casino
```


## Example

```text
WELCOME TO THE C++ CASINO
Enter starting balance ($): 100
Enter your bet amount ($): 10
Rolling the dice...
Die 1: 3 | Die 2: 2 | Total: 5
*** YOU WON! ***
Gross Winnings: $10.00
State Tax (4%): $0.40
County Tax (2%): $0.20
Total Tax Deducted: $0.60
Net Payout: $9.40
Your updated balance is: $109.40
```

## Source File

- `main.cpp` is the only working program and contains the complete game.

## License

This project is distributed under the MIT License. See [`LICENSE`](LICENSE) for details.
