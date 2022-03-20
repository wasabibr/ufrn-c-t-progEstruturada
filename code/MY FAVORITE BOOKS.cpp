/*Structure Array - InfoBrother*/
 
#include<iostream>
#include<string>//Required for string Function.
#include<cstdlib>//Required for clear Screen Function.
 
using namespace std;
#define count 5//Size of Array:
 
void getData(); //Function Prototype:
void showData(); //Function Prototype:
 
struct BOOKS //Structure Declared:
{
	char bookName[50];
	char authorName[50];
	int year;
 
} book[count]; //structure_Object Creation.
 
main()
{
    cout<<"============== MY FAVORITE BOOKS =============="<<endl;
    cout<<" \n=> Enter your Five Favorite Books Detail: "<<endl;
    getData();
    showData();
    return 0;
}
 
void getData() //Function Definition.
{
    for(int i=1; i<=count;i++)
    {
        cout<<"\n Enter Name of Book # "<<i<<": " ;
        cin.getline(book[i].bookName,50);
        cout<<" Enter Author Name: ";
        cin.getline(book[i].authorName,50);
        cout<<" Enter Published Year of Book: ";
        cin>>book[i].year;
        cin.ignore();
    }
}
 
void showData() //Function Defination.
{
    system("cls"); //Clear Screen Function.
    cout<<" \n\n=============== Favorite Books Record:=============== "<<endl;
    cout<<"\n\n";
 
    for(int i=1; i<=count; i++)
    {
        cout<<i<<") Book Name: "<<book[i].bookName<< " ( " 
	       <<book[i].year<<" ) "<<endl;
 
        cout<<" Author Name: "<<book[i].authorName<<endl;
        cout<<"\n";
    }
}