#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int reg;
        string name;
        string course;
    public:
        Student(int reg,string name){
            this->reg = reg;
            this->name = name;
            this->course = "CSE";
        }

        Student(int reg,string name, string course){
            this->reg = reg;
            this->name = name;
            this->course = course;
        }

        string getCourse(){
            return course;
        }
};

int main(){
    Student s1(1,"Chakri");
    Student s2(2,"Chakradhar","ECE");

    cout<<s1.getCourse()<<endl;
    cout<<s2.getCourse()<<endl;
}