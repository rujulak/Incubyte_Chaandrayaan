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
    cout<<"hello moon";
    int xStart = 0, yStart = 0, zStart = 0;
    int dirStart  = 'N';
    Lander chandrayan(xStart, yStart, zStart, dirStart);
    return 0;
}
