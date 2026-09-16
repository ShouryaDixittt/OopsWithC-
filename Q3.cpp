#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;
    static int activePatients;

public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient() {
        activePatients--;
    }

    static void showActivePatients() {
        cout << "Active Patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient::showActivePatients();

    Patient p1(101, "Alice");
    Patient p2(102, "Bob");
    Patient::showActivePatients();

    {
        Patient p3(103, "Charlie");
        Patient::showActivePatients();
    }

    Patient::showActivePatients();

    return 0;
}
