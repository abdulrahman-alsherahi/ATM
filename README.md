# ATM Simulation (C++)

A simple **ATM system simulation** built using **C++**.
It runs in the terminal and allows basic banking operations.

## Features

- Password authentication (demo password: `1234`)
- 3 login attempts before the account is locked
- Check balance (starting balance: $1000)
- Deposit money
- Withdraw money
- Prevents withdrawing more than the available balance
- Rejects zero or negative amounts
- Handles non-numeric menu input
- Interactive ATM menu

## Example Menu

```
========== ATM MENU ==========
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
==============================
```

## How to Run

Compile:

```bash
g++ ATM-simulation.cpp -o atm
```

Run:

```bash
./atm
```

## Built With

- C++
- iostream
- Loops & conditions

## Future Improvements

- Store multiple accounts
- Save the balance to a file between runs
