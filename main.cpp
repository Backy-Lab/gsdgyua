#include <iostream>
#include <iomanip>
using namespace std;

// ===== ADMIN REGISTRATION & LOGIN =====
class Registration_admin {
public:
    int n = 0;
    string admin_name[10], admin_user_name[10], admin_password[10];
    void reg_admin() {
        cout << ">>REGISTRATION:\nENTER Details:" << endl;
        cout << "NAME : "; cin >> admin_name[n];
        cout << "USERNAME : "; cin >> admin_user_name[n];
        cout << "PASSWORD : "; cin >> admin_password[n];
        cout << "\nACCOUNT CREATED SUCCESSFULLY!\n";
        n++;
    }
};

class Login_admin : public Registration_admin {
public:
    int log_admin() {
        string uname, pass;
        cout << "USERNAME : "; cin >> uname;
        cout << "PASSWORD : "; cin >> pass;
        for (int j = 0; j < n; j++) {
            if (uname == admin_user_name[j] && pass == admin_password[j]) {
                cout << "Login successful\n";
                return 1;
            }
        }
        cout << "Invalid Login details\n";
        return 0;
    }
};


// ===== TEACHER MANAGEMENT =====
class Teacher {
public:
    int id, teacher_class, salary = 0;
    string name, sname, fname, subject = "NOT SET", username, password;
};

class Teachers_Manager {
public:
    int t_n = 0;
    Teacher teachers[10];

    void add_teacher() {
        cout << ">>Add Teacher\n";
        cout << "ENTER Teacher ID : "; cin >> teachers[t_n].id;
        cout << "ENTER Name : "; cin >> teachers[t_n].name;
        cout << "ENTER Surname: "; cin >> teachers[t_n].sname;
        cout << "ENTER Father Name : "; cin >> teachers[t_n].fname;
        cout << "ENTER Class : "; cin >> teachers[t_n].teacher_class;
        cout << "ENTER Password : "; cin >> teachers[t_n].password;
        cout << "Teacher Added Successfully....\n";
        teachers[t_n].subject = "NOT SET";
        t_n++;
    }
    void update_teacher() {
        int tid, get = 0, choice;
        cout << "Enter Teacher ID to update: ";
        cin >> tid;
        for (int j = 0; j < t_n; ++j) {
            if (teachers[j].id == tid) {
                get = 1;
                cout << "Select field to update:\n";
                cout << "1. Name\n2. Surname\n3. Father Name\n4. Class\n5. Password\n";
                cin >> choice;
                switch(choice) {
                    case 1: cout << "Enter new Name: "; cin >> teachers[j].name; break;
                    case 2: cout << "Enter new Surname: "; cin >> teachers[j].sname; break;
                    case 3: cout << "Enter new Father Name: "; cin >> teachers[j].fname; break;
                    case 4: cout << "Enter new Class: "; cin >> teachers[j].teacher_class; break;
                    case 5: cout << "Enter new Password: "; cin >> teachers[j].password; break;
                    default: cout << "Invalid choice!\n";
                }
                cout << "Teacher details updated successfully!\n";
                break;
            }
        }
        if(!get) cout << "Teacher ID not found.\n";
    }
    void delete_teacher() {
        int del_id, get = 0;
        cout << "Enter Teacher ID to delete: ";
        cin >> del_id;
        for(int j = 0; j < t_n; j++) {
            if (teachers[j].id == del_id) {
                get = 1;
                for(int k = j; k < t_n - 1; k++)
                    teachers[k] = teachers[k + 1];
                t_n--;
                cout << "Teacher deleted successfully.\n";
                break;
            }
        }
        if(!get) cout << "Teacher ID not found.\n";
    }
    void show_teacher() {
        int tid, get = 0;
        cout << "Enter Teacher ID to show: ";
        cin >> tid;
        for (int j = 0; j < t_n; j++) {
            if(teachers[j].id == tid) {
                get = 1;
                cout << "--------------------------------------------------\n";
                cout << "EMP ID     : " << teachers[j].id << endl;
                cout << "NAME       : " << teachers[j].name << " " << teachers[j].sname << endl;
                cout << "SUBJECT    : " << teachers[j].subject << endl;
                cout << "SALARY     : " << teachers[j].salary << endl;
                cout << "--------------------------------------------------\n";
            }
        }
        if(!get) cout << "Teacher ID not found.\n";
    }
    void assign_salary() {
        int tid, get = 0, salary;
        cout << "ENTER EMP ID : "; cin >> tid;
        for (int j = 0; j < t_n; j++) {
            if (teachers[j].id == tid) {
                cout << "\nEMPLOYEE DETAILS\n";
                cout << "EMP ID  : " << teachers[j].id << endl;
                cout << "NAME    : " << teachers[j].name << endl;
                cout << "SUBJECT : " << teachers[j].subject << endl;
                cout << "SALARY  : " << teachers[j].salary << "\n";
                cout << "ENTER SALARY : "; cin >> salary;
                teachers[j].salary = salary;
                cout << "ok..Task complete!\n";
                get = 1; break;
            }
        }
        if(!get) cout << "Teacher ID not found.\n";
    }
    void show_all_teachers() {
        for (int j = 0; j < t_n; j++) {
            cout << "--------------------------------------------------\n";
            cout << "EMP ID     : " << teachers[j].id << endl;
            cout << "NAME       : " << teachers[j].name << " " << teachers[j].sname << endl;
            cout << "SUBJECT    : " << teachers[j].subject << endl;
            cout << "SALARY     : " << teachers[j].salary << endl;
        }
        cout << "--------------------------------------------------\n";
    }
};


// ===== STUDENT MANAGEMENT =====
class Student {
public:
    int id, roll, s_class;
    string name, sname, fname, password;
};

class Students_Manager {
public:
    int s_n = 0;
    Student students[100];

    void add_student() {
        cout << ">>Add Student" << endl;
        cout << "ENTER Student ID : "; cin >> students[s_n].id;
        cout << "ENTER Name : "; cin >> students[s_n].name;
        cout << "ENTER Surname: "; cin >> students[s_n].sname;
        cout << "ENTER Father Name : "; cin >> students[s_n].fname;
        cout << "ENTER Class : "; cin >> students[s_n].s_class;
        cout << "ENTER Password : "; cin >> students[s_n].password;
        cout << "Student Added Successfully....\n";
        s_n++;
    }
    void update_student() {
        int sid, get = 0, choice;
        cout << "Enter Student ID to update: ";
        cin >> sid;
        for(int j=0;j<s_n;j++) {
            if(students[j].id == sid) {
                get = 1;
                cout << "Select field to update:\n";
                cout << "1. Name\n2. Surname\n3. Father Name\n4. Class\n5. Password\n";
                cin >> choice;
                switch(choice) {
                    case 1: cout << "Enter new Name: "; cin >> students[j].name; break;
                    case 2: cout << "Enter new Surname: "; cin >> students[j].sname; break;
                    case 3: cout << "Enter new Father Name: "; cin >> students[j].fname; break;
                    case 4: cout << "Enter new Class: "; cin >> students[j].s_class; break;
                    case 5: cout << "Enter new Password: "; cin >> students[j].password; break;
                    default: cout << "Invalid choice!\n";
                }
                cout << "Student details updated successfully!\n";
                break;
            }
        }
        if(!get) cout << "Student ID not found.\n";
    }
    void delete_student() {
        int del_id, get = 0;
        cout << "Enter Student ID to delete: ";
        cin >> del_id;
        for(int j=0;j<s_n;j++) {
            if(students[j].id == del_id) {
                get = 1;
                for(int k=j;k<s_n-1;k++) students[k] = students[k+1];
                s_n--;
                cout << "Student deleted successfully.\n";
                break;
            }
        }
        if(!get) cout << "Student ID not found.\n";
    }
    void show_student() {
        int sid, get = 0;
        cout << "Enter Student ID to show: ";
        cin >> sid;
        for (int j=0; j<s_n; j++) {
            if (students[j].id == sid) {
                get = 1;
                cout << "--------------------------------------------------\n";
                cout << "Student ID     : " << students[j].id << endl;
                cout << "Name           : " << students[j].name << endl;
                cout << "Surname        : " << students[j].sname << endl;
                cout << "Father Name    : " << students[j].fname << endl;
                cout << "Class          : " << students[j].s_class << endl;
                cout << "--------------------------------------------------\n";
            }
        }
        if(!get) cout << "Student ID not found.\n";
    }
};


// ===== SUBJECT & RESULT MANAGEMENT =====
class Marks {
public:
    int internal = 0, on_paper = 0, total = 0;
};

class ResultManager {
public:
    string subjects[5] = {"MA-102", "EN-102", "CS-111", "HS-107", "MT-101"};
    Marks marks[100][5]; // [student][subject]
    int pass_count[5]={0}, fail_count[5]={0};

    void add_marks(Students_Manager &sm, string sub) {
        int sub_index = getSubjectIndex(sub);
        cout << "SUBJECT : " << sub << endl << ":: ADD MARKS ::" << endl;
        for (int s = 0; s < sm.s_n; s++) {
            cout << "Roll No. " << sm.students[s].id << endl;
            cout << "Internal 20 out of : "; cin >> marks[s][sub_index].internal;
            cout << "On Paper 80 out of : "; cin >> marks[s][sub_index].on_paper;
            marks[s][sub_index].total = marks[s][sub_index].internal + marks[s][sub_index].on_paper;
        }
        cout << "ok. Done All Students Marks Added,\n";
    }

    int getSubjectIndex(string sub) {
        for (int i = 0; i < 5; i++)
            if (subjects[i] == sub)
                return i;
        return 0;
    }

    void show_result(Students_Manager &sm, string sub) {
        int sub_index = getSubjectIndex(sub);
        cout << "SUBJECT : " << sub << endl;
        cout << "Total Student " << sm.s_n << endl;
        cout << "-------------------------------------------------------------------------------------\n";
        cout << setw(8) << "ROLL" << setw(12) << "NAME" << setw(14) << "INTERNAL" << setw(12) << "ON PAPER" << setw(10) << "TOTAL" << endl;
        for (int s = 0; s < sm.s_n; s++) {
            cout << setw(8) << sm.students[s].id
                 << setw(12) << sm.students[s].name
                 << setw(14) << marks[s][sub_index].internal
                 << setw(12) << marks[s][sub_index].on_paper
                 << setw(10) << marks[s][sub_index].total << endl;
        }
        cout << "-------------------------------------------------------------------------------------\n";
    }
};



// ========== MAIN MENU LOGIC ==========
int main() {
    Registration_admin adminSys;
    Login_admin loginSys;
    Teachers_Manager tm;
    Students_Manager sm;
    ResultManager rm;
    string teacherSubject = "NOT SET";
    int main_choice, admin_choice, t_choice, s_choice, r_choice;
    string login_subject = "NOT SET";

    cout << "WELCOME BACK TO SCHOOL\n";
    do {
        cout << "\nMENU:\n1. ADMIN PORTAL\n2. TEACHER PORTAL\n3. STUDENT PORTAL\n4. RESULT PORTAL\nCHOICE: ";
        cin >> main_choice;
        if (main_choice == 1) {
            cout << "\n<Admin Portal>\n1. LOGIN\n2. REGISTRATION\n0. BACK MENU\nCHOICE: ";
            cin >> admin_choice;
            switch (admin_choice) {
                case 1:
                    if (loginSys.log_admin()) {
                        int done = 0;
                        while(!done) {
                        cout << "\n>>WELCOME ADMIN!\n<Admin Portal>\n1. Teacher Account\n2. Student Account\n3. Result\n0. LOGOUT\nCHOICE: ";
                        cin >> admin_choice;
                        switch(admin_choice) {
                            case 1:
                                // Teacher Section
                                do {
                                    cout << "\n<Admin Portal>\nTeacher SECTION\n1. ADD\n2. UPDATE\n3. DELETE\n4. SHOW\n5. SALARY\n6 SHOW ALL TEACHER\n0. BACK MENU\nCHOICE: ";
                                    cin >> t_choice;
                                    switch(t_choice) {
                                        case 1: tm.add_teacher(); break;
                                        case 2: tm.update_teacher(); break;
                                        case 3: tm.delete_teacher(); break;
                                        case 4: tm.show_teacher(); break;
                                        case 5: tm.assign_salary(); break;
                                        case 6: tm.show_all_teachers(); break;
                                        case 0: cout << "GOING BACK\n"; break;
                                        default: cout << "Invalid!\n";
                                    }
                                } while(t_choice!=0);
                                break;
                            case 2:
                                // Student Section
                                do {
                                    cout << "\n<Admin Portal>\nStudent SECTION\n1. ADD\n2. UPDATE\n3. DELETE\n4. SHOW\n0. BACK MENU\nCHOICE: ";
                                    cin >> s_choice;
                                    switch(s_choice) {
                                        case 1: sm.add_student(); break;
                                        case 2: sm.update_student(); break;
                                        case 3: sm.delete_student(); break;
                                        case 4: sm.show_student(); break;
                                        case 0: cout << "GOING BACK\n"; break;
                                        default: cout << "Invalid!\n";
                                    }
                                } while(s_choice!=0);
                                break;
                            case 3:
                                // Result Section
                                do {
                                    cout << "\n<Admin Portal>\nResult SECTION\n1. SEARCH\n2. SHOW\n3. EDIT\n0. BACK MENU\nCHOICE: ";
                                    cin >> r_choice;
                                    switch(r_choice) {
                                        case 1: {
                                            int roll;
                                            cout << "ENTER Student ID : "; cin >> roll;
                                            for (int s = 0; s < sm.s_n; s++) {
                                                if (sm.students[s].id == roll) {
                                                    cout << "************************RESULT **************************\n";
                                                    cout << "COLLEGE: Asterisc higher university, Nagpur\n";
                                                    cout << "NAME: " << sm.students[s].name << " " << sm.students[s].sname << "   FATHER NAME: " << sm.students[s].fname << "\n";
                                                    cout << "ROLL NUMBER: AST" << sm.students[s].id << "\n";
                                                    cout << "------------------------------------------------------------------------------------------\n";
                                                    cout << "SUBJECTS    INTERNAL     ON PAPER        TOTAL\n";
                                                    cout << "------------------------------------------------------------------------------------------\n";
                                                    int total_marks = 0;
                                                    for (int i = 0; i < 5; i++) {
                                                        int tot = rm.marks[s][i].internal + rm.marks[s][i].on_paper;
                                                        cout << rm.subjects[i] << setw(12) << rm.marks[s][i].internal << setw(12)
                                                            << rm.marks[s][i].on_paper << setw(16) << tot << endl;
                                                        total_marks += tot;
                                                    }
                                                    cout << "------------------------------------------------------------------------------------------\n";
                                                    cout << "                TOTAL MARKS: " << total_marks << "    RESULT: " << (total_marks >= 200 ? "PASS" : "FAIL") << "\n";
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                        case 2:
                                            // Show all student result in table
                                            for (int s = 0; s < sm.s_n; s++) {
                                                cout << "Student: " << sm.students[s].name << " " << sm.students[s].sname << " [ID: " << sm.students[s].id << "]\n";
                                                for (int i = 0; i < 5; i++)
                                                    cout << rm.subjects[i] << " (Internal: " << rm.marks[s][i].internal
                                                         << ", On Paper: " << rm.marks[s][i].on_paper
                                                         << ", Total: " << rm.marks[s][i].internal + rm.marks[s][i].on_paper << ")\n";
                                                cout << "------------------------------------------\n";
                                            }
                                            break;
                                        case 3: {
                                            // Edit marks
                                            int sid, ch_sub, ch_type;
                                            cout << "ENTER Student ID : "; cin >> sid;
                                            int sid_inx = -1;
                                            for (int s=0;s<sm.s_n;s++)
                                                if(sm.students[s].id==sid) sid_inx = s;
                                            if(sid_inx==-1) { cout << "Student not found!\n"; break; }
                                            cout << "SELECT SUBJECT:\n1) MA-102\n2) EN-102\n3) CS-111\n4) HS-107\n5) MT-101\nCHOICE: ";
                                            cin >> ch_sub;
                                            cout << "Marks:\n1) Internal\n2) On Paper\nCHOICE: "; cin >> ch_type;
                                            int oldval = (ch_type == 1) ? rm.marks[sid_inx][ch_sub-1].internal : rm.marks[sid_inx][ch_sub-1].on_paper;
                                            cout << "Old marks :" << oldval << endl;
                                            cout << "New Marks : "; int newval; cin >> newval;
                                            if(ch_type == 1) rm.marks[sid_inx][ch_sub-1].internal = newval;
                                            else rm.marks[sid_inx][ch_sub-1].on_paper = newval;
                                            cout << "ok done...\n";
                                            break;
                                        }
                                        case 0: cout << "BACK TO ADMIN MENU\n"; break;
                                        default: cout << "Invalid!\n";
                                    }
                                } while(r_choice != 0);
                                break; // result
                            case 0: cout << "ACCOUNT LOGOUT SUCCESSFULLY!\n"; done = 1; break;
                            default: cout << "Invalid!\n";
                        }
                        }
                    }
                    break;
                case 2: adminSys.reg_admin(); break;
                case 0: break;
                default: cout << "Invalid!\n";
            }
        } else if (main_choice == 2) {
            cout << "<Teacher Portal>\n1. LOGIN\n2. REGISTRATION\n0. BACK MENU\nCHOICE: ";
            cin >> t_choice;
            if (t_choice == 1) {
                cout << "Username: "; string tuser; cin >> tuser;
                cout << "Password: "; string tpass; cin >> tpass;
                int tidx = -1; for(int i=0;i<tm.t_n;i++) if(tm.teachers[i].name==tuser && tm.teachers[i].password==tpass) tidx = i;
                if(tidx == -1) { cout<<"Invalid credentials!\n"; continue; }
                teacherSubject = tm.teachers[tidx].subject;
                do {
                    cout << "\n>>WELCOME Teacher!\nSUBJECT : " << teacherSubject << "\n<Teacher Portal>\n1. Select Subject\n2. Marks\n3. Result\n0. LOGOUT\nCHOICE: ";
                    cin >> t_choice;
                    switch(t_choice) {
                        case 1: {
                            cout << "<SELECT SUBJECT>\n1) MA-102\n2) EN-102\n3) CS-111\n4) HS-107\n5) MT-101\nCHOICE: ";
                            int sc; cin >> sc; teacherSubject = tm.teachers[tidx].subject = rm.subjects[sc-1];
                            cout << "OK..\n"; break;
                        }
                        case 2: {
                            cout << "<Teacher Portal>\nADD MARKS SECTION\n1. Add\n2. Update\n0. BACK MENU\nCHOICE: ";
                            int mark_choice; cin >> mark_choice;
                            switch(mark_choice) {
                                case 1: rm.add_marks(sm, teacherSubject); break;
                                case 2: {
                                    cout << ":: UPDATE MARKS ::\n1) Internal\n2) On Paper\nCHOICE: ";
                                    int up_choice, roll, new_mark;
                                    cin >> up_choice;
                                    cout << "Enter Roll No: "; cin >> roll;
                                    int sid=-1; for(int i=0;i<sm.s_n;i++) if(sm.students[i].id==roll) sid=i;
                                    if(sid==-1) { cout<<"Student not found\n"; break; }
                                    int subj_idx = rm.getSubjectIndex(teacherSubject);
                                    int oldval = (up_choice==1)?rm.marks[sid][subj_idx].internal : rm.marks[sid][subj_idx].on_paper;
                                    cout<<"Old marks :"<<oldval<<"\nNew Marks :"; cin>>new_mark;
                                    if(up_choice==1) rm.marks[sid][subj_idx].internal=new_mark;
                                    else rm.marks[sid][subj_idx].on_paper=new_mark;
                                    cout << "ok done...\n";
                                    break;
                                }
                            }
                            break;
                        }
                        case 3: rm.show_result(sm, teacherSubject); break;
                        case 0: cout << "GOING BACK\n"; break;
                        default: cout << "Invalid!\n";
                    }
                } while(t_choice != 0);
            } else if (t_choice == 2) { // Registration
                cout << ">>REGISTRATION:\nENTER Details:\n";
                tm.teachers[tm.t_n].id = 100 + tm.t_n + 1;
                cout << "ID : " << tm.teachers[tm.t_n].id << " (auto gen)\n";
                cout << "NAME : "; cin >> tm.teachers[tm.t_n].name;
                cout << "USERNAME : "; cin >> tm.teachers[tm.t_n].username;
                cout << "PASSWORD : "; cin >> tm.teachers[tm.t_n].password;
                tm.teachers[tm.t_n].subject = "NOT SET";
                cout << "\nACCOUNT CREATED SUCCESSFULLY!\n";
                tm.t_n++;
            }
        }
        else if (main_choice == 3) {
            cout << "Student Portal Not yet implemented.\n";
        }
        else if (main_choice == 4) {
            cout << "Result Portal Not yet implemented.\n";
        }
    } while(main_choice != 0);
    cout << "Exiting...\n";
    return 0;
}
