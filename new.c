#include <iostream>
using namespace std;

#include <conio.h>
void run();
void printmap();
void initmap();
void move(int dx, int dy);
void update();
void changedir(char key);
void clearscreen();
void generatefood();

char getmapvalue( int value);

// map dimension
const int mapwidth = 20;
const int mapheight = 20;

const int size = mapheight * mapwidth ;
// the title value of map

int map[size];

// snake head details
int headpos_x;
int headpos_y;
int direction;

//amount of food the snake has
int food = 3;

// determine whether the game is running
bool running;
int main(){
    run();
    return 0;
}
//main game function
void run(){
    //initialise the map
    initmap();
    running = true;
    while(running)
    {
        //if a key is pressed
        if(kbhit())
        {
        // change to the direcdtion determined by the key pressed
        changedir(getch());
        }

        //update the map
        update();

        //clear the screen
        clearscreen();

        //print the map;
        printmap();
     }

       // print the game over text
       cout << "\t\t Game over machaa !!\n" << "\t\tYour score is : " << food;

       cin.ignore();

}

//changes the direction of the snake

void changedir(char key)
{
    /*
    w        1
  A + D == 4 + 3
    S
    */
   switch (key){
   case 'w' :
            if(direction != 2 ) direction = 0;
            break;
   case 'd' :
            if(direction != 3) direction = 1;
            break;
   case 's' :
            if(direction != 4) direction = 2;
            break;
   case 'a' :
            if(direction != 5) direction = 3;
            break;
   }

}

// moves the snake to the new location
void move(int dx, int dy)
{
    int newx = headpos_x + dx;
    int newy = headpos_y + dy;

    //check if there was food at that location
    if(map[newx + newy + mapwidth]== -2){
        //increase body length
        food++;

        //generate new food on the map
        generatefood();
        }

     else if(map[newx + newy * mapwidth] != 0){
        running = false;
     }
     //Move head to new location
     headpos_x = newx;
     headpos_y = newy;

     map[headpos_x + headpos_y * mapwidth] = food + 1;
}
// Clear screen

void clearscreen(){
 system("cls")
}

// generate food
void generate(){
    int x = 0;
    int y = 0;

    do {
        //generate random x and y values within the map
        x = rand() % (mapwidth -2) + 1;
        y = rand() % (mapheight -2) + 1;
    } while (map[x + y * mapwidth] != 0);
}

//update the map
void update(){
    //move the direction indicated
    switch(direction){
        case 0: move(-1, 0);
                break;
        case 1: move(0,1);
                break;
        case 2: move(1, 0);
                break;
        case 3: move(0, -1);
                break;
    }
    // reduce the snake value on map 1
    for (int i = 0 ; i < size ; i++)
    {
        if (map[i] > 0) map[i]--;
    }
}

//initialise map
void initmap()
{
    //place the initial head location in the middle of the map
    headpos_x = mapwidth/2;
    headpos_y = mapwidth/2;
    map[headpos_x + headpos_y * mapwidth] = 1;

    //place the top and bottom walls
    for(int x = 0; x < mapwidth; ++x)
    {
        map[x] = -1;
        map[x + (mapheight - 1 ) * mapwidth] = -1;

    }

    //place the left and right walls
    for (int y = 0; y < mapheight; y++)
    {
    map[0 + y * mapwidth] = -1;
    map[(mapwidth - 1) + y * mapwidth] = -1;

    }
    //generate first food

    generatefood();
}

//Print the map to console
void printmap(){
 for(int x = 0; x < mapwidth ; ++x){
    for (int y= 0; y<mapheight; ++y){
        //prints the value at current x, y location
        cout<< getmapvalue(map[x + y * mapwidth]);
    }
    cout<<endl;
 }
}
// return graphical charactor fot the display from map value

char getmapvalue(int value){
    //returns a part of the snake body

    if (value > 0) return 'o';

    switch (value){
    case -1 : return 'X';
    case -2 : return 'O';
    }

}

