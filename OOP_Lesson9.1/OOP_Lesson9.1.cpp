#include <iostream>
#include<Windows.h>
using namespace std;


template<typename T> 
class Person{
    string name;
    T id;
public:
    Person(T p_id ,string pers_name) :  id {p_id}, name{ pers_name } {}
    void print()const
    {
        cout << "ID : " << id << "\t Name : " << name << endl;
    }
};
//class STRPerson
//{
//    string name;
//    string id;
//public:
//    STRPerson(string p_id, string pers_name) : id{ p_id }, name{ pers_name } {}
//    void print()const
//    {
//        cout << "ID : " << id << "\t Name : " << name << endl;
//    }
//};





int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    

    Person tom{ 12168,"Tom" };
    tom.print();
    Person Bob("sdfdg", "Bob");
    Bob.print();


}


