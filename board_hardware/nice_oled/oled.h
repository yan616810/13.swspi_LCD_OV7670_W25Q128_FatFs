#ifndef __OLED_H
#define __OLED_H

#include "stm32f10x.h"                  // Device header
#include "delay.h"
#include "stdlib.h"



#define OLED_DATA 1	//写数据

void OLED_WR_Byte(u8 dat,u8 mode);  //发送一个字节
void OLED_ColorTurn(u8 i);          //反转颜色
void OLED_DisplayTurn(u8 i);        //屏幕旋转180°
void OLED_DisPlay_On(void);         //开启oled显示屏
void OLED_DisPlay_Off(void);        //关闭oled显示屏
void OLED_Refresh(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2,u8 mode);
void OLED_DrawCircle(u8 x,u8 y,u8 r);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1,u8 mode);
void OLED_ShowChar6x8(u8 x,u8 y,u8 chr,u8 mode);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 size1,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1,u8 mode);
void OLED_ShowChinese(u8 x,u8 y,u8 num,u8 size1,u8 mode);
void OLED_ScrollDisplay(u8 num,u8 space,u8 mode);
void OLED_ShowPicture(u8 x,u8 y,u8 sizex,u8 sizey,u8 BMP[],u8 mode);
void OLED_Init(void);
void OLED_ShowFloat(u8 x,u8 y,float num,u8 len,u8 size,u8 mode);
float My_abs(float a);
void drawcircle(u8 x,u8 y,u8 r);
void drawcircle1(u8 x,u8 y,u8 r);
void drawcircle2(u8 x,u8 y,u8 r);
void drawcircle3(u8 x,u8 y,u16 r);
void draw_point(u8 x,s8 y);
void oled_draw_elliptic(u8 x,u8 y,u8 a,u8 b);
void oled_draw_elliptic_half(u8 x,u8 y,u8 a,u8 b,u8 tt);
	#endif
