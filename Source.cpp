// put your code here
#include <iostream>
#include <string>
#include "MySound.h"

using namespace std;
void main()
{
	MySound M;
	M.Play(L"c:\\temp\\sound.wav", NULL, SND_LOOP);
}
