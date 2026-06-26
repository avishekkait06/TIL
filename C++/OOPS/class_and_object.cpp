#include <bits/stdc++.h>
using namespace std;

class Teacher {
    private:
      double salary;
    public:

    //nonparameter-Constructor
    Teacher(){
        dept = "Computer Scince";
    }
    //parameter-Constructor
    Teacher(string n, string s, string d, double sal){
      name = n;
      dept = d;
      subject = s;
      salary = sal;

    }

    //properties /attributes
    string name;
    string  dept;
    string subject;
    
    
    //methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setsalary(double s){
        salary = s;
    }
    //getter
    double getsalary(){
        return salary;
    }
    void getinfo(){
        cout <<"Name : " <<name << endl;
        cout <<"Subject: "<<subject<<endl;
    }

};

int main() {
    
    /*Teacher t1; //object
    
    t1.name ="Avishek";
    t1.subject="Data Structure";
    t1.setsalary(20000);
    cout << t1.name<<endl;
    cout << t1.getsalary() <<endl;
    cout << t1.dept <<endl;*/
    Teacher t1("Avishek", "Data structure","c++",30000);
    t1.getinfo();

    return 0;
}