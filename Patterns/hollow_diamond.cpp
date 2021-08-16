#include <iostream>
using namespace std;
#define space cout<<endl<<endl;

void solveUp(int row)
{
    //spaces in front first
    int spaceFront = row-1;
    int midSpace=-1;

    for(int i=1;i<=row;i++) //for row number of lines
    {
        //give spaces first
        for(int j=1;j<=spaceFront;j++) 
            cout<<" ";
        //give the star
            cout<<"*";

        //give the middle space
            for(int k=1;k<=midSpace;k++)
                cout<<" ";
        //give the star again
           if(i!=1) cout<<"*";

            //change the line
            cout<<endl;



            //things to decrease here
             spaceFront--;
             midSpace+=2;

    }
}

void solveDown(int row)
{
    int frontSpace = 0;
    int startingSpace = -1 + 2*(row-1);
    for(int p=1;p<=row;p++){
    for(int i=1;i<=frontSpace;i++)
        cout<<" ";

    cout<<"*";
    //time for the middle space

    
    for(int q=1;q<=startingSpace;q++)
        cout<<" ";
    if(p!=row)
        cout<<"*";
    cout<<endl;

    //things to modify here
    frontSpace++;
    startingSpace-=2;
}
}
void solve(int row)
{
    solveUp(row);
   solveDown(row);
}
int main()
{
    cout<<"Hollow Diamond here : ";
    space

    cout<<"Enter the number of rows : ";
    int row;
    cin>>row;

    solve(row);
    space
    return 0;

}
/*OUTPUT
PS D:\AC> g++ pattern14.cpp
PS D:\AC> .\a.exe
Hollow Diamond here :

Enter the number of rows : 15
              *
             * *
            *   *
           *     *
          *       *
         *         *
        *           *
       *             *
      *               *
     *                 *
    *                   *
   *                     *
  *                       *
 *                         *
*                           *
*                           *
 *                         *
  *                       *
   *                     *
    *                   *
     *                 *
      *               *
       *             *
        *           *
         *         *
          *       *
           *     *
            *   *
             * *
              *

*/
