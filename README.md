# game-engine-2d

Name Game "LionFeeding"

Engine developer is Igor Branitsky

![image](https://github.com/casilliose/game-engine-2d/blob/main/gameplay.gif)

## Game process.
You are playing as a lion, you can move using the keys
up, down, left, right. 

Your goal is to collect food to feed the lion.
if your lion will be hungry your game is over.
Food will randomly appear on the scene, then you deal with food
game added score points in check.

When the time runs out, the game will also end
and you will see the final score.

# Technical details

The App Graphic in ANSI art
because I use only Linux OS and pure C++.

2D game engine is written for CLI
coordinate system, X and Y axes.

During the game on the scene we have objects: timer countdown,
score points, walls, players, food, menu.

The game has functions:
* New Game
End Game
* Move player in room
* Add points to score point
* Timer countdown
* Random addition of food to the scene
* Render Objects on the scene
* Add time to the countdown counter

# How build App

To compile using the gcc
```bash
g++ -o main main.cpp
```

To run app
```bash
./main
```

# ANSI ART CODE AND UNICODE SYMBOLS

For color out put in console and size fonts
//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
> #define RESET   "\033[0m" \n
> #define BLACK   "\033[30m"      /* Black */ <br/>
> #define RED     "\033[31m"      /* Red */ <br/>
> #define GREEN   "\033[32m"      /* Green */ <br/>
> #define YELLOW  "\033[33m"      /* Yellow */ <br/>
> #define BLUE    "\033[34m"      /* Blue */ <br/>
> #define MAGENTA "\033[35m"      /* Magenta */ <br/>
> #define CYAN    "\033[36m"      /* Cyan */ <br/>
> #define WHITE   "\033[37m"      /* White */ <br/>
> #define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */ <br/>
> #define BOLDRED     "\033[1m\033[31m"      /* Bold Red */ <br/>
> #define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */ <br/>
> #define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */ <br/>
> #define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */ <br/>
> #define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */ <br/>
> #define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */ <br/>
> #define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */ <br/>


I used these Unicode icons for the game:
* food
🍅
🍓
🍐
🍒
🍍
🥩
* players
🐆 🦕 🐘 🐐 🐧 🐀 🐂 🐇
* walls
⬜ ⬛
* timer
⏳
* score
🏁
🍄
* bomb
💣
