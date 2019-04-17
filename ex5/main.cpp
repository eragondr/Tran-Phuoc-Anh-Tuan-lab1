#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    long id;
    double mathMark, englishMark, physicsMark, chemistryMark;
public:
    Student(string _name, long _id)
    {
        name = _name;
        id = _id;
    }
    void setMathMark(double value)
    {
        if(value>0 && value<=100)
        {
            mathMark = value;
        }
    }
    void setEnglishMark (double value)
    {
        if(value>0 && value<=100)
        {
            englishMark = value;
        }
    }
    void setPhysicsMark (double value)
    {
        if(value>0 && value<=100)
        {
            physicsMark = value;
        }
    }
    void setChemistryMark (double value)
    {
        if(value>0 && value<=100)
        {
            chemistryMark = value;
        }
    }
    double getAverage()
    {
        double result= (mathMark+ englishMark+physicsMark+ chemistryMark)/4;




        return result;
    }
    void displayDetails()
    {
        cout <<"name= "<<name<<endl;
        cout <<"id= "<<id<<endl;
        cout <<"average= "<<getAverage()<<endl;
    }
};

    int main()
    {
        Student std ("Haim " ,123123);
                   std.setChemistryMark(98);
                   std.setEnglishMark(88);
                   std.setPhysicsMark(78);
                   std.setMathMark(100);
                   std.displayDetails();

        return 0;
    }
