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
