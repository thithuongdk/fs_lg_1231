#ifndef Project_ui_IO_h_
#define Project_ui_IO_h_

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class IO{
protected:
    vector<string> VtOut;
public:
    IO();
    vector<string> DIn();
    void DOut(vector<string> VtIn);
};

#endif // Project_ui_IO_h_