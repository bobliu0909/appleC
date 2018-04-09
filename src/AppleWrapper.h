#ifndef _APPLE_WRAPPER_H_  
#define _APPLE_WRAPPER_H_  

struct tagApple; 

#ifdef __cplusplus  
extern "C" {  
#endif  

struct tagApple *GetInstance(void);  
void ReleaseInstance(struct tagApple **ppInstance);  
extern void SetColor(struct tagApple *pApple, int color);  
extern int GetColor(struct tagApple *pApple);
extern void SetNum(struct tagApple *pApple, int num);
extern int GetNum(struct tagApple *pApple);
extern void ClearNum(struct tagApple *pApple);
extern int NumCount(struct tagApple *pApple);

#ifdef __cplusplus  
};  
#endif 

#endif  

