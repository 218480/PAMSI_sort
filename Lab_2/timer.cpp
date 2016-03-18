#include "timer.h"

// Uruchamia pomiar czasu
void Timer::Start()
{
	ftime(&t_start);
}

// Zwraca czas od ostatniego wywolania funkcji Start()
float Timer::Show()
{
    timeb t_now;
    ftime(&t_now);
    return (float)(t_now.time - t_start.time) * 1000.0f + (float)(t_now.millitm - t_start.millitm);
}

Timer::Timer()
{
	Start();
}
