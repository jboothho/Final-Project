#include "SVI.h"
#include "UrbanHeat.h"
#include "MergeSort.h"
#include <vector>
#include <iostream>
using namespace std;

//function declaration
void intro();
int SVI_variable();
int UrbanHeat_variable();

int main(){
    vector<SVI> svi_vec;
    vector<UrbanHeat> urban_vec;
    vector<SVI> svi_sorted;
    vector<UrbanHeat> urban_sorted;
    int SVI_choice;
    int UrbanHeat_choice;
    UrbanHeat::readDataFromFile(urban_vec);
    SVI::readDataFromFile(svi_vec);
    intro();
    SVI_choice = SVI_variable();
    UrbanHeat_choice = UrbanHeat_variable();
    urban_sorted = mergeSort(urban_vec);
    svi_sorted = mergeSort(svi_sorted);
    return 0;
}

void intro(){
    cout << "Welcome to the Boston Environmental Health Mapping Tool!" << endl;
    cout << "You have access to variables from two datasets:\n1. Climate Ready Boston Social Vulnerability" << endl;
    cout << "2. Urban Land Cover and Urban Heat Island Effect Database" << endl;
    cout << "You may pick one variable from each for comparison by census tract neighborhood" << endl;
}

int SVI_variable(){
    int choice;
    cout << "\nHere is the list of social vulnerability variables:" << endl;
    cout << "1. Population\n2. Number of Houses\n3. Population with a Disability\n4. Number of Children" << endl;
    cout << "5. Number of Older Adults\n6. Population with low to no income\n7. Population with little English Language Proficiency" << endl;
    cout << "8. People of Color Population\n9. Population with a medical illness" << endl;
    cout <<"\nWhich variable (1-9) would you like to compare?" << endl;
    cin >> choice;
    return choice;
}


int UrbanHeat_variable(){
    int choice;
    cout << "Here is the list of urban heat variables:" << endl;
    cout << "1. Land Surface Temperature (Celcius)\n2. Tree Canopy Fraction\n3. Albedo (Surface Reflectivity)\n4. Impervious Surface Fraction" << endl;
    cout << "\nWhich variable (1-4) would you like to compare?" << endl;
    cin >> choice;
    return choice;
}


