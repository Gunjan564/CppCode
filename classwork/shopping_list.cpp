#include<iostream>
using namespace std;
class item
{
private: 
    int clothes;
    int shoes;
    int lingerie;
    string new_item="added items";
    int groceries;
    int new_quantity=0;
public:
    void get_item(int a,int b,int c ,int d)
    {
        clothes=a;
        shoes=b;
        lingerie=c;
        groceries=d;
    }
    void print_item()
    {
        cout<<"No. of clothes: "<<clothes<<endl;
        cout<<"No. of shoes: "<<shoes<<endl;
        cout<<"No. of lingerie: "<<lingerie<<endl;
        cout<<"No. of groceries: "<<groceries<<endl;
        cout<<"No. of "<<new_item<<": "<<new_quantity<<endl;
    }
    int total_item()
    {
        cout<<"Total items: "<<clothes+shoes+lingerie+groceries;
    }
    int add_item()
    {
        cout<<"Enter the name of the item you want to add: ";
        cin.ignore();
        getline(cin,new_item);
        cout<<endl<<"Enter the number of " <<new_item<< " you want: ";
        cin>>new_quantity;
    }
};
int main()
{
    item shopping;

    shopping.get_item(23,45,32,65);
    char option;
    cout<<"Welcome!"<<endl;
    cout<<"Enter"<<endl;
    cout<<"'a' to know the items: "<<endl;
    cout<<"'b' to know the total items: "<<endl;
    cout<<"'c' to add a new items: "<<endl;

    cin>>option;

    cout<<endl;
    switch (option)
    {
    case 'a':
        shopping.print_item();
        cout<<endl<<"Thank You for visiting "<<endl;
        break;
    case 'b':
        shopping.total_item();
        cout<<endl<<"Thank You for visiting "<<endl;
        break;
    case 'c':
        shopping.add_item();
        shopping.print_item();
        cout<<endl<<"Thank You for visiting "<<endl;
        break;
    default:
        cout<<"Invalid option!";
        break;
    }

return 0;
}