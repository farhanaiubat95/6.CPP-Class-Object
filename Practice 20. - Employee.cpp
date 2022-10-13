#include <bits/stdc++.h>
using namespace std;
//kotha suna jay??????
class Employee{

    private:
        int id;
        double workingHour, salaryPerHour;
        string name, designation;
    public:
        void getEmployeeInfo(int id, string name, string desg ){
            this->id = id;
            this->name = name;
            designation = desg;
            cout << "id: " << id <<endl;
            cout << "Name: " << name <<endl;
            cout << "Designation: " << designation << endl;
        }

        void wagesInfo(double workingHour, double salaryPerHour){
                this->salaryPerHour = salaryPerHour;
                this ->workingHour = workingHour;
            if(workingHour<95){
                cout << "Wages by Hour: " << workingHour*salaryPerHour<< endl;
            }

            if(workingHour>=96){
                cout << "Wages by Hour: " <<  workingHour*salaryPerHour<< endl;
                cout << "Food Bill:    : " << 500 << endl;
                cout << "Total Wages:     "<< fixed <<setprecision(2) <<  (workingHour*salaryPerHour)+500 << endl;
            }
        }
};

int main(){
string name, desg;
int id;
double workingHour, salary;
    Employee e1, e2;
    cout << "Enter e1 name: " << endl;
    getline(cin, name);
    cout << "ID : " << endl;
    cin >> id;
    cout << "designation: " << endl;
    cin >> desg;
    cout << "Working Hour: " << endl;
    cin >> workingHour;
    cout << "Salary? " << endl;
    cin >> salary;

    e1.getEmployeeInfo(id, name, desg);
    e1.wagesInfo(workingHour, salary);

    e2.getEmployeeInfo(id, name, desg);
    e2.wagesInfo(workingHour, salary);


}
