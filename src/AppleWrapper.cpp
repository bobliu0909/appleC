#include "AppleWrapper.h"  
#include "apple.h"  
  
#ifdef __cplusplus  
extern "C" {  
#endif

struct tagApple  
{  
    Apple apple;  
};  
struct tagApple *GetInstance(void)  
{  
    return new struct tagApple;  
}  
void ReleaseInstance(struct tagApple **ppInstance)  
{  
    delete *ppInstance;  
    *ppInstance = 0;  
      
}  
void SetColor(struct tagApple *pApple, int color)  
{
    pApple->apple.SetColor(color);  
}  
  
int GetColor(struct tagApple *pApple)  
{  
    return pApple->apple.GetColor();  
}

void SetNum(struct tagApple *pApple, int num)
{
    pApple->apple.SetNum(num);
}

int GetNum(struct tagApple *pApple)
{
    pApple->apple.GetNum();
}

void ClearNum(struct tagApple *pApple)
{
    pApple->apple.ClearNum();
}

int NumCount(struct tagApple *pApple)
{
    pApple->apple.NumCount();
}

#ifdef __cplusplus  
};  
#endif  

