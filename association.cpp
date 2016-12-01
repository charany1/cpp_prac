
#include<bits/stdc++.h>



using namespace std;

class Patient;
class Doctor;


class Patient{

private:

    vector<Doctor*> m_doctor_list;

public:
    string m_name;
    Patient(string name) : m_name(name){
    }

    void add_doctor(Doctor* );

};

class Doctor{

private:
    string m_name;
    vector<Patient*> m_patient_list; //think why are you using Patient* rather than Patient& or Patient
    void add_patient(Patient* patient){
        m_patient_list.push_back(patient);
    }

public:

    Doctor(){}

    Doctor(string name) : m_name(name){
    }

    //two approaches to test :
    // 1. make Paitent class friend of this class
    //2. make only Patient::add_doctor friend of this
    friend class Patient ;


    //prints doctor name and all it's patients
    friend ostream& operator<<(ostream& out,Doctor* doctor){
        out<<doctor->m_name<<endl;
        for(auto patient : doctor->m_patient_list){
           cout<<patient->m_name<<endl;

        }

        return out;
    }

    ~Doctor(){
        cout<<m_name<<" destoyed"<<endl;
    }

};




void Patient::add_doctor(Doctor* doctor){
        m_doctor_list.push_back(doctor);
        doctor->add_patient(this);
    }


int main(){

Patient p1("p1");
Patient p2("p2");
Patient p3("p3");

Doctor* d1 = new Doctor("d1");
Doctor* d2 = new Doctor("d2");
Doctor* d3 = new Doctor("d3");

p1.add_doctor(d1);
p2.add_doctor(d2);

p3.add_doctor(d1);


cout<<d1<<endl;


}
