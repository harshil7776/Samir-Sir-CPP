#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1;
    string s2("Hello");
    string s3 = "word";
    string s4(s2);
    string s5(5,'x');

    cout<<"s1"<<s1<<endl;
    cout<<"s2"<<s2<<endl;
    cout<<"s3"<<s3<<endl;
    cout<<"s4"<<s4<<endl;
    cout<<"s5"<<s5<<endl;


    return 0;
}
