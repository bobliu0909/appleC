#ifndef __APPLE_H__  
#define __APPLE_H__
#include <stdint.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Apple  
{  
public:  
    enum  
    {  
        APPLE_COLOR_RED,  
        APPLE_COLOR_BLUE,  
        APPLE_COLOR_GREEN,  
    };  
  
    Apple();  
    int GetColor(void);  
    void SetColor(int color);
    void SetNum(int num);
    int GetNum();
    void ClearNum();
    int NumCount();
private:  
    int m_nColor;
    vector<int> m_nums;  
};

#endif   

