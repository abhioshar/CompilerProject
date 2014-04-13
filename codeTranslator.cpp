#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

ifstream fin("input.abhi");
ofstream fout("output.cpp");

void mandatoryDeclarations(){
    fout<<"#include <iostream>\n";
    fout<<"using namespace std;\n";
    fout<<"int main(void)\n";
    fout<<"{\n";
}

void mandatoryTerminations(){
    fout<<"\n\treturn 0;\n";
    fout<<"}\n";
}

void check ( string input ){
    //ifstream in("stringMatching.txt");
    if ( input.compare("sankhya") == 0){
        fout<<"\tint";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = ";
        fin>>temp;
        fout<<temp<<";\n";
    }
    if ( input.compare("badiSankhya") == 0){
        fout<<"\tlong int";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = ";
        fin>>temp;
        fout<<temp<<";\n";
    }
    if ( input.compare("akshar") == 0){
        fout<<"\tchar";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = '";
        fin>>temp;
        fout<<temp<<"';\n";
    }
    if ( input.compare("bindiSankhya") == 0){
        fout<<"\tfloat";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = ";
        fin>>temp;
        fout<<temp<<";\n";
    }
    if ( input.compare("badiBindiSankhya") == 0){
        fout<<"\tdouble";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = ";
        fin>>temp;
        fout<<temp<<";\n";
    }
    if ( input.compare("sutra") == 0){
        fout<<"\tstring";
        string temp;
        fin>>temp;
        fout<<" "<<temp<<" = \"";
        fin>>temp;
        fout<<temp<<"\";\n";
    }
    if ( input.compare("dikhao") == 0 ){
        fout<<"\tcout<<";
        string temp;
        fin>>temp;
        fout<<temp<<"\<<endl"<<";\n";
    }
}

int main(void){

    string input;
    string output;

    mandatoryDeclarations();

    //***************user code generation
    string text;
    while(fin>>text){
        check(text);
    }
    fin.close();
    //***************end user code

    mandatoryTerminations();

    fout.close();

    system("g++ output.cpp");
    system("a.exe");

    return 0;
}
