# ♠️ POKER2308 — Terminal-Based Poker Game

This is a fully functional terminal-based Poker game built in C++ using CMake. The game simulates card shuffling, dealing, community cards, and a simplified winner evaluation logic based on custom poker-like rules.

## 🎮 Game Rules
- Each player is dealt **2 cards**.
- There are **5 community cards**: 3 in the Turn, 1 in the River, and 1 in the Flop.
- Any **community card matching the rank** of a player's hand is excluded.
- The remaining community cards are considered **valid** for that player.
- The **player's score** is the **sum of the ranks** of their valid community cards:
  - `A` = 14, `K` = 13, `Q` = 12, `J` = 11, numbers = face value.
- The **player with the lowest score wins**.
- Ties are possible if multiple players have the same lowest score.

## 🛠️ How to Build & Run (Windows/macOS/Linux)

### 🧰 Requirements
- C++17 compatible compiler (`g++`, `clang++`, MSVC)
- [CMake ≥ 3.10](https://cmake.org/download/)
- Terminal (PowerShell, Git Bash, or default shell)

### 📦 Instructions
```bash
cd path/to/PokerProject
mkdir build
cd build

# On Windows with MinGW:
cmake .. -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++

# On macOS/Linux:
cmake ..

cmake --build .
./Poker.exe    # Windows
./Poker        # macOS/Linux
```

## 🗂️ Project Structure & File Overview
```
PokerProject/
├── CMakeLists.txt               # CMake configuration file
├── main.cpp                     # Program entry point
├── header/
│   └── cards.h                  # Card class declaration
├── src/
│   └── cards.cpp                # Card class implementation
├── build/                       # Created after cmake .. (ignored in Git)
├── Poker.exe / Poker            # Executable generated after build
```

**main.cpp** – sets up the game, deals cards, and runs the logic.  
**cards.h / cards.cpp** – defines and implements the `Card` class with suit, rank, value access, and display functions.

## 🖥️ Sample Output
```
Initializing Deck...
Deck Created without shuffle
Show Deck...
---CARDS---------------------------------------------------------------------
[ A♦] [ 2♦] [ 3♦] [ 4♦] [ 5♦] [ 6♦] [ 7♦] [ 8♦] [ 9♦] [10♦] [ J♦] [ Q♦] [ K♦] 
[ A♥] [ 2♥] [ 3♥] [ 4♥] [ 5♥] [ 6♥] [ 7♥] [ 8♥] [ 9♥] [10♥] [ J♥] [ Q♥] [ K♥] 
[ A♤] [ 2♤] [ 3♤] [ 4♤] [ 5♤] [ 6♤] [ 7♤] [ 8♤] [ 9♤] [10♤] [ J♤] [ Q♤] [ K♤] 
[ A♧] [ 2♧] [ 3♧] [ 4♧] [ 5♧] [ 6♧] [ 7♧] [ 8♧] [ 9♧] [10♧] [ J♧] [ Q♧] [ K♧] 
-----------------------------------------------------------------------------
Shuffle Deck..
---DECKS SHUFFLED------------------------------------------------------------
[ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] 
[ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] 
[ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] 
[ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] [ ? ] 
-----------------------------------------------------------------------------
---CARDS---------------------------------------------------------------------
[ J♤] [ K♧] [ 7♥] [ 5♧] [ 8♥] [10♦] [ J♥] [ 3♤] [ 2♥] [ Q♥] [ 9♥] [ 8♦] [ 2♦] 
[10♤] [ 7♦] [ 4♥] [ 5♥] [ 4♤] [ 2♤] [ 3♥] [ 9♦] [ 8♧] [ 6♧] [10♥] [ 9♧] [ K♥] 
[ A♧] [ 7♤] [ 6♥] [ 3♧] [ 4♧] [ J♦] [ Q♤] [ Q♦] [ K♦] [ A♥] [ A♤] [ 6♦] [ 3♦] 
[ A♦] [ 7♧] [ Q♧] [ 5♦] [ K♤] [ 6♤] [ 2♧] [10♧] [ 9♤] [ J♧] [ 8♤] [ 5♤] [ 4♦] 
-----------------------------------------------------------------------------
---HANDS CARDS---------------------------------------------------------------
              Abishek: [ J♤] [10♦] 
                 Ali:  [ K♧] [ J♥] 
               James:  [ 7♥] [ 3♤] 
                John:  [ 5♧] [ 2♥] 
                Evry:  [ 8♥] [ Q♥] 
-----------------------------------------------------------------------------
---COMMUNITY CARDS-----------------------------------------------------------
                Turn : [ 8♦] [ 2♦] [10♤] 
               River : [ 4♥] 
                Flop : [ 4♤] 

---STATS---------------------------------------------------------------------
              Abishek: [18] | [ 8♦] [ 2♦] [ 4♥] [ 4♤] 
                Ali:   [28] | [ 8♦] [ 2♦] [10♤] [ 4♥] [ 4♤] 
               James:  [28] | [ 8♦] [ 2♦] [10♤] [ 4♥] [ 4♤] 
                John:  [26] | [ 8♦] [10♤] [ 4♥] [ 4♤] 
                Evry:  [20] | [ 2♦] [10♤] [ 4♥] [ 4♤] 
---WINNERS-------------------------------------------------------------------
  Congratulations!! Abishek,
```

## 🙌 Credits
Created by Abishek Bhattarai  
Built with C++, STL, and CMake — inspired by real poker, simplified for fun and learning.
