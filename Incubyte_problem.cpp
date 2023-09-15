#include <bits/stdc++.h>
using namespace std;

class Lander
{
    private:
    int x,y,z;
    char direction;

    public:
    Lander(int x0, int y0, int z0, char dir0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
    }

     void moveForward()
    {
        if (direction == 'N')
            y++;
        else if (direction == 'S')
            y--;
        else if (direction == 'E')
            x++;
        else if (direction == 'W')
            x--;
        else if (direction == 'U')
            z++;
        else if (direction == 'D')
            z--;
    }

    void moveBackward()
    {
        if (direction == 'N')
            y--;
        else if (direction == 'S')
            y++;
        else if (direction == 'E')
            x--;
        else if (direction == 'W')
            x++;
        else if (direction == 'U')
            z--;
        else if (direction == 'D')
            z++;
    }

        void turnLeft()
    {
        if (direction == 'N')
            direction = 'W';
        else if (direction == 'S')
            direction = 'E';
        else if (direction == 'E')
            direction = 'N';
        else if (direction == 'W')
            direction = 'S';
        else if (direction == 'U')
            direction = 'N';
        else if (direction == 'D')
            direction = 'S';
    }

    void turnRight()
    {
        if (direction == 'N')
            direction = 'E';
        else if (direction == 'S')
            direction = 'W';
        else if (direction == 'E')
            direction = 'S';
        else if (direction == 'W')
            direction = 'N';
        else if (direction == 'U')
            direction = 'S';
        else if (direction == 'D')
            direction = 'N';
    }

    

    void printPoints()
    {
        cout << "Current Coordinates: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }
};
int main()
{
    cout<<"hello moon"<<endl;
    // int xStart = 0, yStart = 0, zStart = 0;
    // char dirStart  = 'N';
    
    int xStart, yStart , zStart;
    char dirStart;
    cout<<"Enter the starting co-ordinates"<<endl;
    cin>>xStart>>yStart>>zStart;
    cout << "Enter the starting direction" << endl;
    cin>>dirStart;

    Lander chandrayan(xStart, yStart, zStart, dirStart);
    

    int n;
    cout << "Enter Number of Commands: ";
    cin >> n;
    vector<char> commands(n);
    cout << "Enter Commands: ";
    for (int i = 0; i < n; i++)
    {
        cin >> commands[i];
    }

    for (char command : commands)
    {
        if (command == 'f')
            Lander.moveForward();
        else if (command == 'b')
            Lander.moveBackward();
        else if (command == 'l')
            Lander.turnLeft();
        else if (command == 'r')
            Lander.turnRight();
    }
    Lander.printPoints();
    return 0;
}
