#include<iostream>
using namespace std;

struct Student
{
    char Name[100];
    int ID;
    char Address[100];
    long long MobNo;
    float Marks;
    
    public:

    void setData()
    {
        cout << "\nEnter Student Name: ";
        cin >> Name;

        cout << "Enter Student ID: ";
        cin >> ID;
        
        cout << "Enter Student Address: ";
        cin >> Address;
        
        cout << "Enter Student MobNo: ";
        cin >> MobNo;

        cout << "Enter Student Marks: ";
        cin >> Marks;
    }

    void showData()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Student Name  : " << Name << endl;
        cout << "Student ID    : " << ID << endl;
        cout << "Student Address  : " << Address << endl;
        cout << "Student MobNo   : " <<MobNo<< endl;
        cout << "Student Marks : " << Marks << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    Student s[10];      
    Student *ptr = s;  

  
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        (ptr + i)->setData();
    }

    
    cout << "\n******** Student Records ********\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        (ptr + i)->showData();
    }

    return 0;
}
