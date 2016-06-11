#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    double number = 0.0;
    int factorCount = 0;
    vector<double> factors;
    
    cout << "Enter a positive number: ";
    cin >> number;
    
    cout << "Enter factor count: ";
    cin >> factorCount;
    
    for(int i = 1; i <=factorCount - 1; ++i) {
        
        factors.push_back((double)i + 1);
    }
    
    double factorProduct = 1.0;
    
    vector<double>::iterator it;
    for(it = factors.begin(); it != factors.end(); ++it) {
        factorProduct *=  *it;
    }
    
    double lastFactor = number / factorProduct;
    factors.push_back(lastFactor);
    
    factorProduct = 1.0;
    cout << "Factors of " << number << " are:" << endl;
    for(it = factors.begin(); it != factors.end(); ++it) {
        cout << *it << endl;
        factorProduct *=  *it;
    }
    cout << "Product obtained from factors is " << factorProduct << endl;
    
    return 0;
}