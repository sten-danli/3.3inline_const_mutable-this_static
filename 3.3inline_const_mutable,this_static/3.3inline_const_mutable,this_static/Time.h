#ifndef __TIME__H__
#define __TIME__H__

class Time
{
public:
	int Minute;
	int Hour;
	int Second;
	int Millisecond;


public://���캯��
	Time(int tmphour, int tmpmin, int tmpsec);

public://��Ա����
	void initMilisecond(int mls);

public://����ֱ������Ķ�����ֱ��ʵ�ֵĳ�Ա����.h���棬�ᱻ������inline��������������
	void addhour(int temhour)
	{
		Hour += temhour;
	}










};









#endif // !__TIME__H__
