#include <bits/stdc++.h>
using namespace std;

struct DT
{
    string medicine_name;
    int morning_dose, noon_dose, night_dose;
};

vector<DT> prescription;

void AddMedication()
{
    cout << "Enter the name of the medicine:: ";
    DT x;
    cin>> x.medicine_name;
    cout << "Enter doses for the prescribed medicine "
    cin >> x.morning_dose >> x.noon_dose >> x.night_dose;

    prescription.push_back(x);
}


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

}

void AuditPrescriptionToDatabase()
{

}

int main()
{


    return 0;
}
