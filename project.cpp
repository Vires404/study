#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct student
{
    string name;
    int score;
    int age;
};
struct teacher
{
    int id;
    int age;
    string name;
    student stu;
};
int main()
{

    teacher t1;
    t1.age=20;
    t1.id=1001;
    t1.name="king";
    t1.stu.name="king 1";
    t1.stu.age=10;
    t1.stu.score=100;
    cout<<t1.name<<endl;
    cout<<t1.id<<endl;
    cout<<t1.stu.name<<endl;
    cout<<t1.stu.score<<endl; 
    system("pause");
    return 0;
}
