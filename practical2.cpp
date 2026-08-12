#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    int empid;
    string empName;
    float salary;
    Employee *next;
    
   
};
 
  Employee *Head=NULL;
 
    void insertEmployee()
  {
	  
  Employee *newNode = new Employee;
    cout << "Enter Employee Id :";
    cin >> newNode->empid;
    cout << "Enter Employee Name: ";
    cin >> newNode->empName;
    cout << "Enter Salary: ";
    cin >> newNode->salary;
    
     newNode->next = Head;
    Head = newNode;
    
    cout << "Employee Record Inserted Successfully.\n";
}
    void deleteEmployee(int id)
 {
 
    if(Head=NULL)
    {
        cout << "List is Empty\n";
        return;
	}  
	
	 Employee *temp=Head;
	  Employee *prev=NULL;          
      
       
     if (Head->empid == id)
    {
        Head = Head->next;
        delete temp;
        cout << "Employee Record Deleted Successfully.\n";
        return;
    }
     while(temp !=NULL && temp->empid !=id)
	 {
	 	prev = temp;
	 	temp = temp->next;
	  } 
	  if(temp==NULL)
    
    {
    	cout << "Employee Record Not Found.\n";
    	return;
	}
	prev->next = temp->next;
	delete temp;
	cout << "Employee Record Deleted Successfully.\n";
}

    void searchEmployee(int id)
{
    Employee *temp = Head;

    while (temp != NULL)
    { 
        {
            cout << "\nEmployee Found\n";
            cout << "Employee ID : " << temp->empid << endl;
            cout << "Employee Name : " << temp->empName << endl;
            cout << "Salary : " << temp->salary << endl;
            return;
        }
        temp = temp->next;
    
    cout << "Employee Record Not Found.\n";
} 
} 
    void displayEmployee()
 { 

	if(Head==NULL)
	{
		cout << "List is Empty.\n";
		return;
	}
	Employee *temp = Head;
	 cout << "\nEmployee Records\n";
    cout << "----------------------------------------\n";

    while (temp != NULL)
    {
        cout << "ID : " << temp->empid<<endl;
        cout << "Name : " << temp->empName<<endl;
        cout << "Salary  : " << temp->salary << endl;

        temp = temp->next;
    }
} 

int main()
{
	int choice,Id;
	
	do
	{
		cout << "=====EMPLOYEE RECORD MANAGEMENT=====\n";
		cout << "1. Insert Employee\n";
		cout << "2. Delete Employee\n";
		cout << "3. Search Employee\n";
		cout << "4. Display Employee\n";
		cout << "5. Exit\n";
		cout << "Enter choice:\n";
		cin  >> choice;
		
		switch(choice)
		{
		 case 1:
		 insertEmployee();
		 break;
		 	
		 case 2:
            cout << "Enter Employee ID to Delete: ";
            cin >> Id;
            deleteEmployee(Id);
            break;
            
         case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> Id;
            searchEmployee(Id);
            break;
            
         case 4:
         	 displayEmployee();
         	break;
         	
         case 5:
         	cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
         	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 	
    
 
