#include<iostream>
using namespace std;
class player
{
   private:
   char name[20];
   int age;
   public :
   void input(void);
   void display(void);
};
void player ::input()
{
    cout<<"Enter the player name"<<endl;
    cin>>name;
    cout<<"Enter the age of the player"<<endl;
    cin>>age;

}
void player::display()
{
    cout<<"player's name is "<<name<<endl;
    cout<<"Player's age is  "<<age<<endl;
}
int main()
{
    player cricket[3];
    player football[5];
    player hockey[5];
    for(int i=0;i<3;i++)
    {
        cricket[i].input();
        
    }
    for(int i=0;i<3;i++)
    {
        cricket[i].display();
        
    }

    return 0;
}