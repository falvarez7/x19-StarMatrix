#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fir,sec;

int main()
{
vector <vector <string> > grid;
cout<<"Enter rows and columns of stars: "<<endl;
cin>>fir;
cin>>sec;
grid.resize(fir);
for(int i = 0; i<grid.size();i++)
    {
    grid[i].resize(sec);
    for(int j =0;j<grid[i].size();j++)
        {
        grid[i][j] = "*";
        cout<<grid[i][j]<<" ";
        };
    cout<<endl;
    };
return 0;
};


