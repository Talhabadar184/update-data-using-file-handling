#include <iostream>
#include <fstream>
using namespace std;
int main() {
  
    ofstream file("file.txt", ios::trunc);
    file<<"Previous information"<<endl;
    file<< "Name: TALHA"<<endl<<"Program: BSCS" << endl;
    file.close();

   
    ofstream file2("file.txt", ios::app);
    file2<<"Updated Information"<<endl;
    file2<< "Name: TALHA"<<endl<<"Program: BSCS" << endl<< "id:0406";
    file2.close();

    return 0;
}
