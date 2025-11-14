#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student
{
    public :
        string sname;
        int sage;
        int srollno;

        Student(int age,string name,int rollno)
        {
            this->sname=name;
            this->sage=age;
            this->srollno=rollno;
        }
};
int main()
{
    vector<Student> stu;

    Student s1(18,"ram",101);
    Student s2(18,"seeta",102);
    Student s3(18,"raj",103);
    
    stu.push_back(s1);
    stu.push_back(s2);
    stu.push_back(s3);
    stu.push_back(Student(21,"ajay",104));

    string dname = "seeta";

    for(int i = 0;i<stu.size();i++)
    {
        if(stu[i].sname == dname)
        {
            stu.erase(stu.begin()+i);
            cout<<"\nSeeta object removed successfully...";
            break;
        }
    }

    for(Student s:stu)
    {
        cout<<"\nStudent name = "<<s.sname;
        cout<<"\nStudent age = "<<s.sage;
        cout<<"\nStudent rollno = "<<s.srollno;
        cout<<"\n====================================";
    }
    return 0;
}

//Update...