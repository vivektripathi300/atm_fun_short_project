/*
#include<iostream>
using namespace std;
class animal
{
    protected:
    int leg =4;
};
class human
{
    protected:
    int leg =2;
};

class cow:animal{
    string name="bhaluu";
    public:
    void show(){

        cout<<name<<" "<<leg<<endl;
    }

    };

    class ram: human
    {
        string name="ramu";
        public:
        void display(){
            cout<<name<<" "<<leg;
        }
    };

int main(){
    cow a1;
    a1.show();
    ram b1;
    b1.display();

return 0;
}
*/
/*
#include<iostream>
using namespace std;

class squarecube {
    private:
    int x;
    int y;

    public:
    void operation(int a)
    {
        x=a*a;
        y= a*a*a;
    }
    void dispaly(){
        cout<<"square ="<<x<<endl;
        cout<<"cube ="<<y<<endl;
    }
};
int main(){
squarecube obj;
int n;

cout<<"enter a number:";
cin>>n;
obj.operation(n);
obj.dispaly();
return 0;
}

*/

// check age of person;
/*
 #include<iostream>
 using namespace std;
  int main()
  {
    int dob;
    int currentyear;
    int age;

    cout<<"enter your date of birth";
    cin>>dob;
    cout<<"enter your current year";
    cin>>currentyear;

    age= currentyear-dob;

    cout<<"your age is\t"<<age<<endl;

    return 0;
  }

*/

// WAP TO MANAGE SCORE OF CRICKET;
/*
#include<iostream>
using namespace std;
int main(){

int run,wicket,over;
cout<<"enter your run in this inning"<<endl;
cin>>run;
cout<<"enter wicket in this inning"<<endl;
cin>>wicket;
cout<<"enter your total over"<<endl;
cin>>over;

cout<<"your score is:\t"<<run<<"/"<<wicket<<"in"<<over<<"over";
return 0;
}


 */

// check result of student,,

/*
 #include<iostream>
 using namespace std;
 int main(){

 char name[20];
 int marks[5],total=0;
 float percentage;

 cout<<"enter your name"<<endl;
 cin>>name;

 cout<<"enter your all subject marks";

 for(int i=0; i<5; i++)
 {
    cin>>marks[i];
    total+=marks[i];
 }
 cout<<"your total marks is:\t"<<total<<endl;

 percentage =total*100/500;

 cout<<"your percentage is:\t"<<percentage;

 return 0;
 }

 */

#include <iostream>
#include <string>
using namespace std;

class hospital
{

public:
    int age =0;
    double contact;
    string name;
    string disease;
    string special;

    void patient()
    {
        cout << "your age is:" << age << endl;
        cout << "contact no is:" << contact << endl;
        cout << "your disease is:" << disease << endl;
        cout << "name:" << name << endl;
    }

    void doctor()
    {
        cout << "name is:" << name << endl;
        cout << "contact is" << contact << endl;
        cout << "specialization is" << special << endl;
    }
};

int main()
{
    hospital aps;
    int choice;
    int age;
    double contact;
    string name;
    string disease;
    string special;

    do
    {
        cout << "your system is ready(hospital)!!!!" << endl;
        cout << "1.patient" << endl;
        cout << "2.doctor" << endl;
        cout << "3.exit" << endl;

        cout << "enter your choice";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter your age" << age << endl;
            cin >> age;
             cout << "enetr your contact" << endl;
            cin >> contact;
 
            cout << "enter diaseas" << disease << endl;
            cin >> disease;
            
            cout
                << "enter your name" << name << endl;
            cin >> name;
             

            aps.patient();
            break;

        case 2:

            cout << "enter your name" << name << endl;
            cin >> name;
            cout << "enetr your contact" << endl;
            cin >> contact;
            cout << "enter your special" << endl;
            cin >> special;

            aps.doctor();
            break;

        case 3:
            cout << "thank you!!!!!!1" << endl;
            break;

        default:
            cout << "invalid enter try again!!";
            break;
        }
    } while (choice != 3);

    return 0;
}