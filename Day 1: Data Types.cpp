#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int inn;
    double dou;
    string str;
    cin>>inn>>dou;
    cin.get();
    getline(cin,str);
    
    cout<<i+inn<<endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout<<std:: fixed<<std::setprecision(1) << dou+d<<endl;
    
    cout<<s;
    cout<<str<<endl;


    return 0;
}
