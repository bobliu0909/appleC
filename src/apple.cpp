#include "apple.h"  

Apple::Apple():m_nColor(APPLE_COLOR_RED)  
{  
}  
  
void Apple::SetColor(int color)  
{
    m_nColor = color;  
}  
  
int Apple::GetColor(void)  
{  
    return m_nColor;  
}  

void Apple::SetNum(int num)
{
    m_nums.push_back(num);
}

int Apple::GetNum()
{
    for(vector<int>::iterator it = m_nums.begin(); it != m_nums.end(); it++)
    {
        if(*it)
        {
            int n = *it;
            m_nums.erase(it);
            return n;
        }
    }
    return 0;
}

void Apple::ClearNum()
{
    m_nums.clear();
}

int Apple::NumCount()
{
    return m_nums.size();
}

