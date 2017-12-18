#include <iostream>
#include <fstream>

using namespace std;

int main(){
            string game;
    string BS;
    string BSx;
    string BSy;
    ifstream ip("init_file.csv");
    std::cout << "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh" << std::endl;
     while (ip.good()){
        getline(ip,game,'\n');
        getline(ip,BS,',');
        getline(ip,BSx,',');
        getline(ip,BSy,',');
        cout << BSx << endl;
    }
    return 0;
}
