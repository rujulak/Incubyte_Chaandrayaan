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
    vector<char> vec = {'f'};
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == 'f')
        {
            chandrayan.moveForward();
        }
    }
    return 0;
}
