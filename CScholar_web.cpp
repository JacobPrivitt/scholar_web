// DISCLAMER: None of the info on scholarships below is accurate !!!

/* Welcome to CScholar_Web. This software is a better way for students
   to find scholarships they qualify for.*/

// Will eventually convert to HTML.

// Things i need to fix or add: GPA Req., military, add your own blocks.

 // Author: Jacob Privitt
 // License: GNU_GPL_V3
 // Open source, feel fre to contribute

 // Current Version: 1.22

#include <iostream>

using namespace std;

void scholarships();

int main()
{

  /* Variables */

  int state_choice;
  int colo_school_choice;
  int idaho_school_choice;
  int uccs_major_choice;
  int pikes_peak_major_choice;
  int nic_major_choice;
  int ui_major_choice;
  int school_year;
  int page_choice;
  int military_enrollment;

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
  int ccu_major_choice;
  int nic_major_choice;
  int ui_major_choice;
  int bsu_major_choice;
  int school_year;
  int page_choice;
  int military_enrollment;

	cout << "Choose Your State" << endl;
  cout << "1. Colorado" << endl;
  cout << "2. Idaho" << endl;
  cin >> state_choice;

	if (state_choice == 1) { //Colorado
    cout << "Choose Your School" << endl;
    cout << "1. UCCS" << endl;
    cout << "2. Pikes Peak" << endl;
    cout << "3. CCU" << endl;
    cin >> colo_school_choice;
	} else { // Idaho
    cout << "Choose Your School" << endl;
    cout << "1. NIC" << endl;
    cout << "2. UI" << endl;
    cout << "3. BSU" << endl;
    cin >> idaho_school_choice;
	}

  /* Military Question */
  cout << "Are you in the military?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No" << endl;
  cin >> military_enrollment;


  if (colo_school_choice == 1) { // UCCS
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> uccs_major_choice;
	} else if (colo_school_choice == 2) { // Pikes Peak
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> pikes_peak_major_choice;
  } else if (colo_school_choice == 3) { // CCU
    cout << "Choose your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> ccu_major_choice;
	} else if (idaho_school_choice == 1) { // NIC
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> nic_major_choice;
	} else if (idaho_school_choice == 2) { // UI
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> ui_major_choice;
	} else if (idaho_school_choice = 3) { // BSU
    cout << "Choose Your Major" << endl;
    cout << "1. Nursing" << endl;
    cout << "2. Business" << endl;
    cin >> bsu_major_choice;
  }

  if (colo_school_choice == 2) {
  cout << "What Year are You?" << endl;
  cout << "1. Freshman" << endl;
  cout << "2. Sohpomore" << endl;
  cin >> school_year;
} else if (idaho_school_choice == 1) {
  cout << "What Year are You?" << endl;
  cout << "1. Freshman" << endl;
  cout << "2. Sohpomore" << endl;
  cin >> school_year;
} else {
  cout << "What Year are You?" << endl;
  cout << "1. Freshman" << endl;
  cout << "2. Sohpomore" << endl;
  cout << "3. Junior" << endl;
  cout << "4. Senior" << endl;
  cin >> school_year;
}

  if (school_year == 1) {
    /* Freshman */
    if (state_choice == 1) {
      /* Freshman Colorado */
      if (colo_school_choice == 1) {
        /* Freshman UCCS */
        if (military_enrollment == 1) {
          cout << "UCCS awards military service men and women an $8000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else if (colo_school_choice == 2) {
        /* Freshman Pikes Peak */
        if (military_enrollment == 1) {
          cout << "PPCC awards military service men and women an $4000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else {
        /* Freshman CCU */
        if (military_enrollment == 1) {
          cout << "CCU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (ccu_major_choice == 1) {
          /* Freshman CCU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Nursing Award: $2000" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        } else {
          /* Freshman CCU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Freshman Business Award: $2000" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Freshman Idaho */
      if (idaho_school_choice == 1){
        /* Freshman NIC */
        if (military_enrollment == 1) {
          cout << "NIC awards military service men and women an $5000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else if (idaho_school_choice == 2) {
        /* Freshman University of Idaho */
        if (military_enrollment == 1) {
          cout << "U of I awards military service men and women an $10000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else {
        /* Freshman BSU */
        if (military_enrollment == 1) {
          cout << "BSU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (bsu_major_choice == 1) {
          /* Freshman BSU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Nursing Award: $1500" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        } else {
          /* Freshman BSU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Freshman Business Award: $1000" << endl;
          cout << "2. BSU Chancallors Award: $2500" << endl;
        } /* Freshman BSU Business Scholarships */
      } /* Freshman BSU */
    } /* Freshman Idaho */
  } /* Freshman */ else if(school_year == 2){
    /* Sohpomore */
    if (state_choice == 1) {
      /* Sohpomore Colorado */
      if (colo_school_choice == 1) {
        /* Sohpomore UCCS */
        if (military_enrollment == 1) {
          cout << "UCCS awards military service men and women an $8000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (uccs_major_choice == 1) {
          /* Sohpomore UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Nursing Award: $2500" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Business Award: $2500" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else if (colo_school_choice == 2) {
        /* Sohpomore Pikes Peak */
        if (military_enrollment == 1) {
          cout << "PPCC awards military service men and women an $4000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (pikes_peak_major_choice == 1) {
          /* Sohpomore Pikes Peak Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Nursing Award: $2500" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore Pikes Peak Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Business Award: $2500" << endl;
          cout << "2. Pikes Peak Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Sohpomore CCU */
        if (military_enrollment == 1) {
          cout << "CCU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (ccu_major_choice == 1) {
          /* Sohpomore CCU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Nursing Award: $2500" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore CCU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Sohpomore Business Award: $2500" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        }
      }
    } else {
      /* Sohpomore Idaho */
      if (idaho_school_choice == 1) {
        /* Sohpomore NIC */
        if (military_enrollment == 1) {
          cout << "NIC awards military service men and women an $5000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (nic_major_choice == 1) {
          /* Sohpomore NIC Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Nursing Award: $2000" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore NIC Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Business Award: $1500" << endl;
          cout << "2. NIC Chancallors Award: $1500" << endl;
          cin >> page_choice;
        }
      } else if (idaho_school_choice == 2){
        /* Sohpomore University of Idaho */
        if (military_enrollment == 1) {
          cout << "U of I awards military service men and women an $10000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (ui_major_choice == 1) {
          /* Sohpomore U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Nursing Award: $2000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Business Award: $1500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        /* Sohpomore BSU */
        if (military_enrollment == 1) {
          cout << "BSU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (bsu_major_choice == 1) {
          /* Sohpomore BSU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Nursing Award: $2000" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        } else {
          /* Sohpomore BSU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Sohpomore Business Award: $1500" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
          } /* Sohpomore BSU Business */
        } /* Sohpomore BSU*/
      } /* Sohpomore Colorado */
    } /* Sohpomore */ else if(school_year == 3) {
    /* Junior */
    if (state_choice == 1) {
      /* Junior Colorado */
      if (colo_school_choice == 1) {
        /* Junior UCCS */
        if (military_enrollment == 1) {
          cout << "UCCS awards military service men and women an $8000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else if (colo_school_choice == 3){
        /* Junior CCU */
        if (military_enrollment == 1) {
          cout << "CCU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (ccu_major_choice == 1) {
          /* Junior CCU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Nursing Award: $2500" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        } else {
          /* Junior CCU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Junior Business Award: $2500" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        }
      } else if (colo_school_choice == 2) {
        cout << "Pikes Peak does not have Upper Level Classes." << endl;
      }
    } else {
      /* Junior Idaho */
      if (idaho_school_choice == 3){
        /* Junior BSU */
        if (military_enrollment == 1) {
          cout << "BSU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (bsu_major_choice == 1) {
          /* Junior BSU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Nursing Award: $2500" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        } else {
          /* Junior BSU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Junior Business Award: $2000" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        }
      } else if (idaho_school_choice == 2){
        /* Junior University of Idaho */
        if (military_enrollment == 1) {
          cout << "U of I awards military service men and women an $10000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
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
      } else if (idaho_school_choice == 1) {
        cout << "NIC does not have Upper Level Classes." << endl;
      }
    }
  } else if(school_year == 4){
    /* Senior */
    if (state_choice == 1) {
      /* Senior Colorado */
      if (colo_school_choice == 1) {
        /* Senior UCCS */
        if (military_enrollment == 1) {
          cout << "UCCS awards military service men and women an $8000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (uccs_major_choice == 1) {
          /* Senior UCCS Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Senior Nursing Award: $3000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Senior UCCS Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Senior Business Award: $3000" << endl;
          cout << "2. UCCS Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else if (colo_school_choice == 3) {
        /* Senior CCU */
        if (military_enrollment == 1) {
          cout << "CCU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (ccu_major_choice == 1) {
          /* Senior CCU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Senior Nursing Award: $3000" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        } else {
          /* Senior CCU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Colorado Senior Business Award: $3000" << endl;
          cout << "2. CCU Chancallors Award: $2000" << endl;
          cin >> page_choice;
        }
      } else {
        cout << "Pikes Peak does not have Upper Level Classes." << endl;
      }
    } else {
      /* Senior Idaho */
      if (idaho_school_choice == 3){
        /* Senior BSU */
        if (military_enrollment == 1) {
          cout << "BSU does not award military service men and women a scholarship." << endl;
          cout << "Others schools in the area do, consider tranfering." << endl;
        }
        if (bsu_major_choice == 1) {
          /* Senior BSU Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Senior Nursing Award: $2500" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        } else {
          /* Senior BSU Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Senior Business Award: $2000" << endl;
          cout << "2. BSU Chancallors Award: $3000" << endl;
          cin >> page_choice;
        }
      } else if(idaho_school_choice == 2) {
        /* Senior University of Idaho */
        if (military_enrollment == 1) {
          cout << "U of I awards military service men and women an $10000 yearly award." << endl;
          cout << "Please contact the VA contact at your college or university for info." << endl;
        }
        if (ui_major_choice == 1) {
          /* Senior U of I Nursing Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Senior Nursing Award: $2500" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        } else {
          /* Senior U of I Business Scholarships */
          cout << "Here are the scholarships your are eligible for." << endl;
          cout << "Choose the number to be brought to the application page." << endl;
          cout << "1. Idaho Senior Business Award: $2000" << endl;
          cout << "2. U of I Chancallors Award: $2500" << endl;
          cin >> page_choice;
        }
      } else {
        cout << "NIC does not have Upper Level Classes." << endl;
      }
    }
  } else {
    /* Defualt No Scholarships At This Time */
    cout << "No scholarships at this time." << endl;
  }
}
