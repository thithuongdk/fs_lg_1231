#include "IO.h"

IO::IO(){};

vector<string> IO::DIn(){
    vector<string> VtIn;
    for( string s:VtOut){
        cout << "enter value for " << s << " = ";
        string sIn;        
        getline(cin, sIn);
        VtIn.push_back(sIn);
    };
    cout << "-------------------------------------"<< endl;
    return VtIn;
};

void IO::DOut(vector<string> VtIn){
    for(int i = 0; i < VtIn.size(); i++){
        cout << "Value for " << VtOut[i] << " = "<< sizeof(VtIn[i]) << " : "<< VtIn[i] << endl;
    }
    cout << "-------------------------------------"<< endl;
};
