#include<bits/stdc++.h>



using namespace std;


class Teacher{

private:
    string m_name;

public:
    Teacher(string name): m_name(name){
    }

    string get_name(){return m_name;}


    friend ostream& operator<<(ostream& out ,Teacher* teacher){
        out<<teacher->m_name<<endl;
        return out;
    }

    ~Teacher(){
    cout<<"Teacher "<<m_name<<" deleting"<<endl;
    }

};


class Department{
private:

    vector<Teacher*> m_teacher_list;


public:
    Department(){
    }

    void add(Teacher* teacher){
        m_teacher_list.push_back(teacher);
    }


    friend ostream& operator<<(ostream& out,Department& dept){
        for(auto teacher : dept.m_teacher_list){

            out<<teacher->get_name()<<endl;
            return out;
        }

    }

    ~Department(){
        cout<<"Department destructopr"<<endl;

    }
};

int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *t1 = new Teacher("Bob"); // create a teacher
    Teacher *t2 = new Teacher("Frank");
    Teacher *t3 = new Teacher("Beth");

    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.
        Department dept; // create an empty Department
        dept.add(t1);
        dept.add(t2);
        dept.add(t3);

        std::cout << dept;

    } // dept goes out of scope here and is destroyed

    std::cout << t1->get_name() << " still exists!\n";
    std::cout << t2->get_name() << " still exists!\n";
    std::cout << t3->get_name() << " still exists!\n";

    delete t1;
    delete t2;
    delete t3;

    return 0;
}
