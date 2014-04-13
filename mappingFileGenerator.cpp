#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main(void){
    ofstream fout("stringMatching.txt",ios::app);
    string input;
    string output;
    int x;
    cout<<"Enter no. of symbols to be entered"<<endl;
    cin>>x;
    while(x--){
        cin>>input;
        cin>>output;
        fout<<input<<"\n"<<output<<"\n";
    }

    fout.close();

    return 0;
}
