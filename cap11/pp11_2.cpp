#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

struct EnemySpaceShip
{
    int x_coordinate; 
    int y_coordinate; 
};

int randRange (int low, int high)
{
    return rand() % (high - low + 1) + low; 
}

EnemySpaceShip getNewEnemy()
{
    EnemySpaceShip ship; 
    ship.x_coordinate = 0; 
    ship.y_coordinate = 0; 
    return ship; 
}

EnemySpaceShip upgradeCoordinates (EnemySpaceShip ship)
{
    ship.x_coordinate += randRange(0,100);
    ship.y_coordinate += randRange(0,100);
    return ship; 
}

int main()
{
    int EnemyFleet = 10; 
    EnemySpaceShip enemy[ EnemyFleet ];
    
    for(int i = 0; i < EnemyFleet; i++)
    {
        enemy[ i ] = getNewEnemy();  
    }

    while(1) // This while update the enemy positions until they are out the screen
    {
        for(int i = 0; i < EnemyFleet; i++)
        {
            enemy[ i ] = upgradeCoordinates( enemy[ i ] ); 
            cout << "Coordinates of enemy Ship " << i<< " : ( x, y ) = " <<"( "<< enemy[ i ].x_coordinate<< ", "<< enemy[ i ].y_coordinate<< " )"<< endl;
        }
        cout << "\n\n";
        int tempx = 0; 
        int tempy = 0; 
        for(int i = 0; i <EnemyFleet; i++)
        {
            tempx += (enemy[ i ].x_coordinate > 1024);
            tempy += (enemy[ i ].y_coordinate > 768); 
             
        }
        if (tempx == EnemyFleet || tempy == EnemyFleet )
        {
            cout << "All enemy ships are out of the screen\n"; 
            break; 
        }
    }
    

     
    
}