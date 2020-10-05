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
      /* Freshman Colorado */
      if (colo_school_choice == 1) {
        /* Freshman UCCS */
        if (uccs_major_choice == 1) {
          /* Freshman UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Nursing Award: $2000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Business Award: $2000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Freshman Pikes Peak */
        if (pikes_peak_major_choice == 1) {
          /* Freshman Pikes Peak Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Nursing Award: $2000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman Pikes Peak Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Business Award: $2000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Freshman Idaho */
      if (idaho_school_choice == 1){
        /* Freshman NIC */
        if (nic_major_choice == 1) {
          /* Freshman NIC Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Nursing Award: $1500" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman NIC Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Business Award: $1000" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Freshman University of Idaho */
        if (ui_major_choice == 1) {
          /* Freshman U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Nursing Award: $1500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Freshman U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Business Award: $1000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      }
    }
  } else if(school_year == 2){
    /* Sophmore */
    if (state_choice == 1) {
      /* Sophmore Colorado */
      if (colo_school_choice == 1) {
        /* Sophmore UCCS */
        if (uccs_major_choice == 1) {
          /* Sophmore UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sophmore Nursing Award: $2500" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Sophmore UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sophmore Business Award: $2500" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Sophmore Pikes Peak */
        if (pikes_peak_major_choice == 1) {
          /* Sophmore Pikes Peak Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sophmore Nursing Award: $2500" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Sophmore Pikes Peak Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sophmore Business Award: $2500" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Sophmore Idaho */
      if (idaho_school_choice == 1){
        /* Sophmore NIC */
        if (nic_major_choice == 1) {
          /* Sophmore NIC Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sophmore Nursing Award: $2000" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Sophmore NIC Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sophmore Business Award: $1500" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Sophmore University of Idaho */
        if (ui_major_choice == 1) {
          /* Sophmore U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sophmore Nursing Award: $2000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Sophmore U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sophmore Business Award: $1500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      }
    }
  } else if(school_year == 3){
    /* Junior */
    if (state_choice == 1) {
      /* Junior Colorado */
      if (colo_school_choice == 1) {
        /* Junior UCCS */
        if (uccs_major_choice == 1) {
          /* Junior UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Nursing Award: $3000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Junior UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Business Award: $3000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Junior Pikes Peak */
        if (pikes_peak_major_choice == 1) {
          /* Junior Pikes Peak Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Nursing Award: $3000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Junior Pikes Peak Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Business Award: $3000" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Junior Idaho */
      if (idaho_school_choice == 1){
        /* Junior NIC */
        if (nic_major_choice == 1) {
          /* Junior NIC Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Nursing Award: $2500" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Junior NIC Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Business Award: $2000" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Junior University of Idaho */
        if (ui_major_choice == 1) {
          /* Junior U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Nursing Award: $2500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Junior U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Business Award: $2000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      }
    }
  } else if(school_year == 4){
    /* Senior */
  } else {
    /* Defualt No Scholarships At This Time */
    cout << "No scholarships at this time." << endl;
  }
}
