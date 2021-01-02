#include "TableData.h"

// ========Contructor========
TableData::TableData(TableUnit* ptU){
    tableUnit = ptU;
};
TableData::TableData(string filePath, TableUnit* ptU){
    Size = 0;
    Data.resize(0);
    ifstream inFile(filePath);
    const int maxSize = 255;
    char buff[maxSize];
    while(inFile.getline(buff, maxSize))
    {
        TableUnit* unit = GetTableUnit();
        unit->FromStringDecode(buff);
        Data.push_back(unit);
    }
    inFile.close();
};

// ========Ex========
int TableData::GetSize(){
    return Size;
};
string TableData::ToString(){
    string sOut("");
    for(TableUnit* unit:Data){
        sOut = sOut + unit->ToString() + "\n";
    }
    return sOut;
};
TableUnit* TableData::GetTableUnit(){
    return tableUnit;
}
int TableData::Push(TableUnit *unit){
    Data.push_back(unit);
    Size++;
    return Size;
};
int TableData::Change(int index, TableUnit *unit){  
    if(index < Data.size()){
        Data[index] = unit;
    } else {
        index = -1;
    };    
    return index;
};
int TableData::Delele(int index){
    if(index < Data.size()){
        Data.erase(Data.begin() + index);
    } else {
        index = -1;
    };
    return index;
};

TableUnit* TableData::GetPtr(int index){
    TableUnit *ptr = nullptr;    
    if(index < Data.size()){
        ptr = Data[index];
    };
    return ptr;
};

TableUnit* TableData::Find(string key, string value){
    for(TableUnit* unit:Data){
        if(unit->CheckValue(key, value)){
            return unit;
            break;
        }
    }
    return nullptr;
};

vector<TableUnit*> TableData::FindList(string key, string value){
    vector<TableUnit*> vts;
    for(TableUnit* unit:Data){
        if(unit->CheckValue(key, value)){
            vts.push_back(unit);
        }
    }
    return vts;
};

vector<TableUnit*> TableData::GetData(){
    return Data;
};
void TableData::Backup(string path){
    ofstream outFile(path, ios::trunc);
    if (!outFile){ return;}
    for(TableUnit* unit:Data){
        outFile << unit->ToStringEncode() << endl;
    }
    outFile.close();
};
void TableData::Restore(string path){
    Size = 0;
    for(TableUnit* unit:Data){
        delete unit;
    }
    Data.resize(0); 
    ifstream inFile(path);
    const int maxSize = 255;
    char buff[maxSize];
    while(inFile.getline(buff, maxSize))
    {
        TableUnit* unit = GetTableUnit();
        unit->FromStringDecode(buff);
        Data.push_back(unit);
    }
    inFile.close();
};