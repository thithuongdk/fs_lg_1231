#ifndef Project_businessobject_TableUnit_H_//sub class of all table
#define Project_businessobject_TableUnit_H_

#include "../libs/json.hpp"
#include "../ui/IO.h"
#include <string>

using namespace std;
using json = nlohmann::json;

class TableUnit : public IO{
private:
public:
    //TableUnit();
    virtual void DataOut() = 0;
    virtual void DataIn() = 0;
    virtual json ExportJson() = 0;
    virtual string ExportString() = 0;
    virtual vector<string> ExportVt() = 0;
    virtual void ImportJson(json j) = 0;
    virtual void ImportVt(vector<string>) = 0;
    virtual TableUnit* ClonePtr() = 0;
};

#endif