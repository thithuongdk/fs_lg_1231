#include "IO.h"

IO::IO(){
};

void IO::DataIn(TableUnit* ptU){
    map<string, string> mapMember = ptU->GetMapMember();
    map<string, string>::iterator it;
    for (it = mapMember.begin(); it != mapMember.end(); it++){
        cout << "enter value for " << it->first << " = ";
        string s = ""; getline(cin, s);
        ptU->SetValue(it->first, s);
    }
}

void IO::DataIn(TableData* ptD){
    TableUnit* unit = ptD->GetTableUnit();
    DataIn(unit);
    ptD->Push(unit);
    cout << "-------------------------------------"<< endl;
}

void IO::DataOut(TableUnit* ptU){
    map<string, string>::iterator it;
    map<string, string> mapMember = ptU->GetMapMember();
    for (it = mapMember.begin(); it != mapMember.end(); it++){
        cout << "Value for " << it->first << " = "<< it->second << endl;
    }
}

void IO::DataOut(TableData* ptD){
    // if ptD = null, error because can't denifine TableUnit*. The same TableData/ToString
    map<string, string>::iterator it;
    for(TableUnit* unit: ptD->GetData()){
        DataOut(unit);
        cout << "-------------------------------------"<< endl;
    }    
    // cout << ptD -> ToString();
}