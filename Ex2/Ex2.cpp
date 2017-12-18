#include <iostream>
#include <fstream>
#include "Object.hpp"
using namespace std;

int main(){
            string temp;
    string BS;
    string BSx;
    string BSy;
    ifstream ip;
    ip.open("init_file.csv");
    if(!ip.is_open())std::cout << "error" << std::endl;
    std::cout << "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh" << std::endl;
   // getline(ip,temp,'\n');
    ip>>temp;
       cout << temp << endl;
      //getline(ip,temp,',');
      ip>>temp;
     cout << temp << endl;
         
        ip>>BSx;
      //  getline(ip,BSx,',');
         cout << BSx << endl;
 //       getline(ip,BSy,',');
 ip>>BSy;
 
 cout << BSy << endl;
 
 
        const int x=std::stoi( BSx );
      const    int y=std::stoi( BSy );
    Object filde[x][y];
    return 0;
}