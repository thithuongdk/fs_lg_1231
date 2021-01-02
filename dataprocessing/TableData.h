#ifndef Project_dataprocessing_TableData_h_
#define Project_dataprocessing_TableData_h_

#include "../businessobject/TableUnit.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class TableData{
    vector<TableUnit*> Data;
    int Size;
    TableUnit* tableUnit;
public:
    TableData(TableUnit*);
    //TableData();
    TableData(string filePath, TableUnit* ptU);

    int GetSize();
    string ToString();
    TableUnit* GetTableUnit();

    void Backup(string path);
    void Restore(string path);

    int Push(TableUnit *ptU);
    int Change(int index, TableUnit *ptU);
    int Delele(int index);
    TableUnit* Find(string key, string value);
    vector<TableUnit*> FindList(string key, string value);
    TableUnit* GetPtr(int index);
    vector<TableUnit*> GetData();
};

#endif // Project_dataprocessing_TableData_h_