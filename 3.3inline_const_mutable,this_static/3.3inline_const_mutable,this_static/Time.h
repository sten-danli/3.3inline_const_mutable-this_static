#ifndef __TIME__H__
#define __TIME__H__

class Time
{
public:
	int Minute;
	int Hour;
	int Second;
	int Millisecond;


public://构造函数
	Time(int tmphour, int tmpmin, int tmpsec);

public://成员函数
	void initMilisecond(int mls);

public://这种直接在类的定义中直接实现的成员函数.h里面，会被当作做inline内联函数来处理。
	void addhour(int temhour)
	{
		Hour += temhour;
	}










};









#endif // !__TIME__H__
