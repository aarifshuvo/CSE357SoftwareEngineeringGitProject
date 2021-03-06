#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;

struct medicineInformation
{
    //this is a structure to store all relevant information about the prescription and medicine and their doses!

    string medicine_name;
    int morning_dose, noon_dose, night_dose;
};
//this is a vector container to store prescription data as medicineInformation structure

string name="napa400";
vector<medicineInformation> prescription;

 //  method to take input of medicine name and add it to the prescription



string integer2string(int inp)
{

    stringstream ss;
	ss << inp;
	return ss.str();
}


void showFormulary(string medName)
{
    cout<<"No Formula found"<<endl;
}

void AddMedication()
{

    cout << "Enter the name of the medicine:: ";
    medicineInformation x;
    cin>> x.medicine_name;
    cout << "Enter doses for the prescribed medicine ";

    cin >> x.morning_dose >> x.noon_dose >> x.night_dose;
    cin >> x.morning_dose >> x.noon_dose >> x.night_dose;

    prescription.push_back(x);
}

// method to let the user edit the dose indications of the prescribed medicine
void editDose()
{

    string med_name;
    cout << "Enter the name of the medicine for changing doses:: ";
    cin>>med_name;

    for(int i=0; i<prescription.size(); i++)
    {
        if(prescription[i].medicine_name == name)
        {
            cout << "Current Morning Dose " << prescription[i].morning_dose << endl;
            cout << "Enter new morning Dose :: " ;
            cin>> prescription[i].morning_dose;

            cout << "Current Noon Dose " << prescription[i].noon_dose << endl;
            cout << "Enter new noon Dose :: " ;
            cin>> prescription[i].noon_dose;

            cout << "Current Night Dose " << prescription[i].night_dose << endl;
            cout << "Enter new noon Dose :: " ;
            cin>> prescription[i].night_dose;
        }
    }
}

void checkFormulary()
{
    //this method shows the formulary of the prescribed medicine

    cout << "Enter medicine name to check its formulary details :: ";
    string med_name;
    cout << "Enter the name of the medicine for changing doses:: ";
    cin>>med_name;

    for(int i=0; i<prescription.size(); i++)
    {
        if(prescription[i].medicine_name == name)
        {
            showFormulary(name);
            break;
        }
    }
}

void AuditPrescriptionToDatabase()
{
    // save the prescription a file database

    for(int i=0; i<prescription.size(); i++)
    {
        string input,morning,noon,night;

        input = prescription[i].medicine_name;
        ofstream out("output.txt");
        out << input;

        morning = integer2string(prescription[i].morning_dose);
        noon = integer2string(prescription[i].noon_dose);
        night = integer2string(prescription[i].night_dose);

        out << morning << noon << night;

        out.close();
    }
}

// function to show the interface to the users of the software
void userInterface()
{
    cout << "Welcome to E-Prescription Software!" << endl;

    cout << "Enter your choice plz:: " << endl;

    cout << "1. Add medicine to the prescription" << endl;
    cout << "2. Edit Doses of the Medicine" << endl;
    cout << "3. Check Formulary of the Medicine" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    userInterface();

    int choice ;
    cin>> choice;

    if(choice==1) AddMedication();
    else if(choice == 2) editDose();
    else if(choice == 3) checkFormulary();
    else if(choice == 4) exit(0);

    return 0;
}
