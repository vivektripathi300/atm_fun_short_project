#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Patient class to store information about patients
class Patient {
public:
   
    string name;
    int age;
    string disease;
    string contact;
     
    Patient(string n, int a, string d, string c) : name(n), age(a), disease(d), contact(c) {}
    void displayPatientInfo() {
        cout << "Patient Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Doctor class to store doctor details
class Doctor {
public:
    string name;
    string specialization;
    string contact;

    Doctor(string n, string s, string c) : name(n), specialization(s), contact(c) {}

    void displayDoctorInfo() {
        cout << "Doctor Name: " << name << endl;
        cout << "Specialization: " << specialization << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Hospital class to manage the entire system
class Hospital {
private:
    vector<Patient> patients;
    vector<Doctor> doctors;

public:
    // Add new patient
    void addPatient() {
        string name, disease, contact;
        int age;
        
        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter patient age: ";
        cin >> age;
        cout << "Enter disease: ";
        cin >> disease;
        cout << "Enter contact information: ";
        cin >> contact;
        
        Patient newPatient(name, age, disease, contact);
        patients.push_back(newPatient);
        cout << "Patient added successfully!" << endl;
    }

    // View all patients
    void viewPatients() {
        if (patients.empty()) {
            cout << "No patients available." << endl;
            return;
        }

        cout << "\n--- Patient List ---" << endl;
        for (int i = 0; i < patients.size(); i++) {
            cout << "\nPatient " << i + 1 << ":" << endl;
            patients[i].displayPatientInfo();
            cout << "--------------------" << endl;
        }
    }

    // Add new doctor
    void addDoctor() {
        string name, specialization, contact;
        
        cout << "Enter doctor name: ";
        cin >> name;
        cout << "Enter specialization: ";
        cin >> specialization;
        cout << "Enter contact information: ";
        cin >> contact;

        Doctor newDoctor(name, specialization, contact);
        doctors.push_back(newDoctor);
        cout << "Doctor added successfully!" << endl;
    }

    // View all doctors
    void viewDoctors() {
        if (doctors.empty()) {
            cout << "No doctors available." << endl;
            return;
        }

        cout << "\n--- Doctor List ---" << endl;
        for (int i = 0; i < doctors.size(); i++) {
            cout << "\nDoctor " << i + 1 << ":" << endl;
            doctors[i].displayDoctorInfo();
            cout << "-------------------" << endl;
        }
    }

    // Schedule an appointment
    void scheduleAppointment() {
        string patientName, doctorName;
        
        cout << "Enter patient name: ";
        cin >> patientName;
        cout << "Enter doctor name: ";
        cin >> doctorName;

        bool patientFound = false, doctorFound = false;
        
        // Check if the patient exists
        for (auto& patient : patients) {
            if (patient.name == patientName) {
                patientFound = true;
                break;
            }
        }

        // Check if the doctor exists
        for (auto& doctor : doctors) {
            if (doctor.name == doctorName) {
                doctorFound = true;
                break;
            }
        }

        if (patientFound && doctorFound) {
            cout << "Appointment scheduled successfully with Dr. " << doctorName << " for patient " << patientName << endl;
        } else {
            if (!patientFound) {
                cout << "Patient not found!" << endl;
            }
            if (!doctorFound) {
                cout << "Doctor not found!" << endl;
            }
        }
    }
};

int main() {
    Hospital hospital;
    int choice;

    do {
        cout << "\n--- Hospital Management System ---" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. View All Patients" << endl;
        cout << "3. Add Doctor" << endl;
        cout << "4. View All Doctors" << endl;
        cout << "5. Schedule Appointment" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hospital.addPatient();
                break;
            case 2:
                hospital.viewPatients();
                break;
            case 3:
                hospital.addDoctor();
                break;
            case 4:
                hospital.viewDoctors();
                break;
            case 5:
                hospital.scheduleAppointment();
                break;
            case 6:
                cout << "Exiting the system. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    } while (choice != 6);

    return 0;
}
