#include "TableData.h"

// ========Contructor========
TableData::TableData(TableUnit* ptU){
    _tableUnit = ptU;
}

TableData::~TableData(){
    deleleAll();
    delete(_tableUnit);
}

TableData::TableData(string filePath, TableUnit* ptU){
    _data.resize(0);
    ifstream inFile(filePath);
    const int maxSize = 255;
    char buff[maxSize];
    while(inFile.getline(buff, maxSize))
    {
        TableUnit* unit = getTableUnit();
        unit->fromStringDecode(buff);
    _data.push_back(unit);
    }
    inFile.close();
}

// ========Ex========
void TableData::resize(int n){
    _data.resize(n);
}
string TableData::toString(){
    string sOut("");
    for(TableUnit* unit:_data){
        sOut = sOut + unit->toString() + "\n";
    }
    return sOut;
}
TableUnit* TableData::getTableUnit(){
    TableUnit* ptU = _tableUnit->clonePtr();
    return ptU;
}

int TableData::push(TableUnit *unit){
    _data.push_back(unit);
    return 1;
}

int TableData::change(int index, TableUnit *unit){  
    if(index <_data.size()){
        _data[index] = unit;
    } else {
        index = -1;
    }    
    return index;
}

int TableData::delele(int index){
    if(index <_data.size()){
        delete(_data[index]);
        _data.erase(_data.begin() + index);
    } else {
        index = -1;
    }
    return index;
}

void TableData::deleleAll(){
    for(TableUnit *unit:_data){
        delete(unit);
    }
    _data.resize(0);
}

TableUnit* TableData::getPtr(int index){
    TableUnit *ptr = nullptr;
    if(index <_data.size() && index >= 0){
        ptr = _data[index];
    }
    return ptr;
}

TableUnit* TableData::find(string key, string value){
    for(TableUnit* unit:_data){
        if(unit->checkValue(key, value)){
            return unit;
            break;
        }
    }
    return nullptr;
}

vector<TableUnit*> TableData::findList(string key, string value){
    vector<TableUnit*> vts;
    for(TableUnit* unit:_data){
        if(unit->checkValue(key, value)){
            vts.push_back(unit);
        }
    }
    return vts;
}

// vector<TableUnit*> TableData::findListL(bool (*func)(TableUnit *tU)){
//     vector<TableUnit*> vts;
//     for(TableUnit* unit:_data){
//         if(func(unit)){
//             vts.push_back(unit);
//         }
//     }
//     return vts;
// }

vector<TableUnit*> TableData::getData(){
    return _data;
}