🕹️ Simple Lane Game (C Console Game)

📌 Overview
Simple Lane Game is a lightweight console-based dodging game built in C.
The player controls a character across three lanes and must avoid incoming obstacles.
As the score increases, the game becomes progressively faster, adding more challenge.

🎮 How to Play
Use the Left Arrow (←) to move left
Use the Right Arrow (→) to move right
An obstacle falls from the top of the screen
If the player and the obstacle are in the same lane at the bottom, the game ends
Each successful dodge increases the score by 1
Every 5 points, the game speed increases

🧩 Features
Three-lane movement
Randomized obstacle positions
Real-time keyboard input via _kbhit()
Progressive difficulty (speed increases over time)
Score tracking
Play-again option

📂 Project Structure
main.c
└── playGame() – main game loop and logic

⚙️ Requirements
Windows OS
GCC or any C compiler
Supports <conio.h> and <windows.h>

▶️ How to Run
Compile:
gcc main.c -o game
Run:
game.exe

🚀 Possible Future Improvements
Add colors and improved UI
Support multiple obstacles
Smoother animations
Add sound effects
High-score saving system
Enhanced start and game-over menus

👤 Author
Aniket Gupta
A simple console game project made for learning and experimenting with C.
