#include <iostream>

using namespace std;

void scholarships();

int main()
{

  int state_choice;
  int colo_school_choice;
  int idaho_school_choice;
  int uccs_major_choice;
  int pikes_peak_major_choice;
  int nic_major_choice;
  int ui_major_choice;
  int school_year;
  int page_choice;

	/* code */

  scholarships();

  system("pause");
	return 0;
}

void scholarships()
{
  int state_choice;
  int colo_school_choice;
  int idaho_school_choice;
  int uccs_major_choice;
  int pikes_peak_major_choice;
  int nic_major_choice;
  int ui_major_choice;
  int school_year;
  int page_choice;

	cout << "Choose Your State" << endl;
  cout << "1. Colorado" << endl;
  cout << "2. Idaho" << endl;
  cin >> state_choice;

	if (state_choice == 1) {
    cout << "Choose Your School" << endl;
    cout << "1. UCCS" << endl;
    cout << "2. Pikes Peak" << endl;
    cin >> colo_school_choice;
	} else {
    cout << "Choose Your School" << endl;
    cout << "1. NIC" << endl;
    cout << "2. UI" << endl;
    cin >> idaho_school_choice;
	}

  if (colo_school_choice == 1) {
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> uccs_major_choice;
	} else if (colo_school_choice == 2) {
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> pikes_peak_major_choice;
	} else if (idaho_school_choice == 1) {
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> nic_major_choice;
	} else {
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> ui_major_choice;
	}

  cout << "What Year are You?" << endl;
  cout << "1. Freshman" << endl;
  cout << "2. Sophmore" << endl;
  cout << "3. Junior" << endl;
  cout << "4. Senior" << endl;
  cin >> school_year;

  if (school_year == 1) {
    /* Freshman */
    if (state_choice == 1) {
      /* Colorado */
      if (colo_school_choice == 1) {
        /* UCCS */
        if (uccs_major_choice == 1) {
          /* Freshman UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Nursing Award: $2000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Business Award: $2000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Pikes Peak */
        if (pikes_peak_major_choice == 1) {
          /* Freshman Pikes Peak Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Nursing Award: $2000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman Pikes Peak Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Business Award: $2000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Idaho */
      if (idaho_school_choice == 1){
        /* NIC */
        if (nic_major_choice == 1) {
          /* Freshman NIC Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Nursing Award: $1500" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman NIC Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Business Award: $1000" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else {
        /* University of Idaho */
        if (ui_major_choice == 1) {
          /* Freshman U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Nursing Award: $1500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Business Award: $1000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      }
    }
  } else {
    cout << "No avalible scholarships at this time." << endl;
  }
}
