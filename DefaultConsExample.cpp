#include<iostream>
#include<string>
using namespace std;
 class Taimoor {
    private :
    string Title;
    string Author;
    int year;

    public :
    Taimoor (){
        Title ="ILm-duniya";
        Author="Taimoor Khan ";
        year=2019;

    }

//  CONSTRUCTOR WITH PARAMETER 
    Taimoor(const string&title,const string& author,int year){
        Title=title;
        Author=author;
        year=year;

    }
    void display (){
        cout<<"Title :"<<Title<<endl;
        cout<<"Author :"<<Author<<endl;
        cout<<"Year :"<<year<<endl;
    }

 };
 int main(){
    Taimoor obj;
    cout<<"Book Information !! \n ";
    obj.display();

 }