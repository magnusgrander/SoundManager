#include "soundmanager.h"
#include <thread> 
#include <chrono> 
SoundManager *soundManager;				// 

int main()
{
	ALuint Sound;	
	ALuint Sound2;	
	soundManager = SoundManager::getInstance();
	soundManager -> listOpenALDevices();
	Sound = soundManager -> loadOGG("Humus.ogg");
	Sound2 = soundManager -> loadWAV("pain.wav");
	soundManager ->setVolume(0.01);
	soundManager ->loopSound(Sound);
	soundManager ->playSound(Sound);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	soundManager -> playSound(Sound2);	
	std::this_thread::sleep_for(std::chrono::seconds(60));
	
}
