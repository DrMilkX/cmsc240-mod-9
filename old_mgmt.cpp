#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>  // for removing a specific element from a vector (not built in on non-ARM architectures)

using namespace std;


double software_engineer_salary = 75000.00;
double data_scientist_salary = 80000.00;
double qa_engineer_salary = 70000.00;
double collator_salary = 50000.00;
double engineering_manager_salary = 185000.00;


string printer_status = "jammed";
string stapler_status = "red";
string code_status = "buggy";
string payroll_status = "glitched";
string flair_status = "minimal";

void display_employee_info(string fname, string lname, int id, string position, double salary, bool full_time, bool remote, bool is_manager, vector<int> workdays){
    cout << "===== Employee Information: =====" << endl;
    cout << "Name: " << fname << " " << lname << endl;
    cout << "ID: " << id << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: $" << salary << endl;
    cout << "------------------------" << endl;
    cout << "Full-time: " << (full_time ? "Yes" : "No") << endl;
    cout << "Remote: " << (remote ? "Yes" : "No") << endl;
    cout << "Manager: " << (is_manager ? "Yes" : "No") << endl;
    cout << "------------------------" << endl;
    cout << "Workdays: ";
    for(const auto &day : workdays){
        if (day == 1) cout << "MON ";
        else if (day == 2) cout << "TUE ";
        else if (day == 3) cout << "WED ";
        else if (day == 4) cout << "THU ";
        else if (day == 5) cout << "FRI ";
        else if (day == 6) cout << "SAT ";
        else if (day == 0) cout << "SUN ";
    }
    cout << endl;
    cout << "\n\n" << endl;
}

void display_manager_info(string fname, string lname, int id, string position, double salary, bool full_time, bool remote, bool is_manager, vector<int> workdays){
    cout << "===== Manager Information: =====" << endl;
    cout << "Name: " << fname << " " << lname << endl;
    cout << "ID: " << id << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: $" << salary << endl;
    cout << "------------------------" << endl;
    cout << "Full-time: " << (full_time ? "Yes" : "No") << endl;
    cout << "Remote: " << (remote ? "Yes" : "No") << endl;
    cout << "Manager: " << (is_manager ? "Yes" : "No") << endl;
    cout << "------------------------" << endl;
    cout << "Workdays: ";
    for(const auto &day : workdays){
        if (day == 1) cout << "MON ";
        else if (day == 2) cout << "TUE ";
        else if (day == 3) cout << "WED ";
        else if (day == 4) cout << "THU ";
        else if (day == 5) cout << "FRI ";
        else if (day == 6) cout << "SAT ";
        else if (day == 0) cout << "SUN ";
    }
    cout << endl;
    cout << "\n\n" << endl;
}

void give_raise(double &salary, double raise_amount){
    salary += raise_amount;
}

void add_workdays(vector<int> &workdays, int new_day){
    workdays.push_back(new_day);
}

void remove_workdays(vector<int> &workdays, int day_to_remove){
    vector<int> new_workdays;
    for (int &day : workdays){
        if (day != day_to_remove){
            new_workdays.push_back(day);
        }
    }
    workdays = new_workdays;
}


int main(){

    // employees
    string employee_2451_fname = "Peter";
    string employee_2451_lname = "Gibbons";
    int employee_2451_id = 2451;
    string employee_2451_position = "Software Engineer";
    double employee_2451_salary = software_engineer_salary;
    bool employee_2451_full_time = true;
    bool employee_2451_remote = false;
    bool employee_2451_is_manager = false;
    vector<int> employee_2451_workdays = {1, 2, 3, 4, 5};

    string employee_2474_fname = "Samir";
    string employee_2474_lname = "Nagheenanajar";
    int employee_2474_id = 2474;
    string employee_2474_position = "Data Scientist";
    double employee_2474_salary = data_scientist_salary;
    bool employee_2474_full_time = true;
    bool employee_2474_remote = false;
    bool employee_2474_is_manager = false;
    vector<int> employee_2474_workdays = {1, 2, 3, 4, 5};

    string employee_2493_fname = "Michael";
    string employee_2493_lname = "Bolton";
    int employee_2493_id = 2493;
    string employee_2493_position = "QA Engineer";
    double employee_2493_salary = qa_engineer_salary;
    bool employee_2493_full_time = true;
    bool employee_2493_remote = false;
    bool employee_2493_is_manager = false;
    vector<int> employee_2493_workdays = {1, 2, 3, 4, 5};

    string employee_2501_fname = "Milton";
    string employee_2501_lname = "Waddams";
    int employee_2501_id = 2501;
    string employee_2501_position = "Collator";
    double employee_2501_salary = collator_salary;
    bool employee_2501_full_time = false;
    bool employee_2501_remote = false;
    bool employee_2501_is_manager = false;
    vector<int> employee_2501_workdays = {1, 2, 3, 4, 5};

    // managers
    string manager_3001_fname = "Bill";
    string manager_3001_lname = "Lumbergh";
    int manager_3001_id = 3001;
    string manager_3001_position = "Engineering Manager";
    double manager_3001_salary = engineering_manager_salary;
    bool manager_3001_full_time = true;
    bool manager_3001_remote = true;
    bool manager_3001_is_manager = true;
    vector<int> manager_3001_workdays = {1, 2, 3, 4, 5};



    // remove T,W,TH from Bill's workdays
    remove_workdays(manager_3001_workdays, 2);
    remove_workdays(manager_3001_workdays, 3);
    remove_workdays(manager_3001_workdays, 4);

    // add Sat to Peter's workdays
    add_workdays(employee_2451_workdays, 6);

    // add Sat to Milton's workdays
    add_workdays(employee_2501_workdays, 6);

    // Give Peter a raise of $5000
    give_raise(employee_2451_salary, 5000.00);

    // Display employee info
    display_employee_info(employee_2451_fname, employee_2451_lname, employee_2451_id, employee_2451_position, employee_2451_salary, employee_2451_full_time, employee_2451_remote, employee_2451_is_manager, employee_2451_workdays);
    display_employee_info(employee_2474_fname, employee_2474_lname, employee_2474_id, employee_2474_position, employee_2474_salary, employee_2474_full_time, employee_2474_remote, employee_2474_is_manager, employee_2474_workdays);
    display_employee_info(employee_2493_fname, employee_2493_lname, employee_2493_id, employee_2493_position, employee_2493_salary, employee_2493_full_time, employee_2493_remote, employee_2493_is_manager, employee_2493_workdays);
    display_employee_info(employee_2501_fname, employee_2501_lname, employee_2501_id, employee_2501_position, employee_2501_salary, employee_2501_full_time, employee_2501_remote, employee_2501_is_manager, employee_2501_workdays);

    // Display manager info
    cout << endl;
    display_manager_info(manager_3001_fname, manager_3001_lname, manager_3001_id, manager_3001_position, manager_3001_salary, manager_3001_full_time, manager_3001_remote, manager_3001_is_manager, manager_3001_workdays);

    cout << "\n\n=== Office Supplies Status: ===" << endl;
    cout << "Printer Status: " << printer_status << endl;
    cout << "Stapler Status: " << stapler_status << endl;
    cout << "Code Status: " << code_status << endl;
    cout << "Payroll Status: " << payroll_status << endl;
    cout << "Flair Status: " << flair_status << endl;

    return 0;

}