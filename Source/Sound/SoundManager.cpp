#include "../../Header/Sound/SoundManager.h"
#include <iostream>

using namespace Soundmanager;

SoundBuffer SoundManager::ballBounce;
Sound SoundManager::soundEffect;

const string SoundManager::ballBouncePath = "Assets/Sounds/Ball_Bounce.wav";

void SoundManager::initialize()
{
	LoadSoundFromFile();
}

void SoundManager::LoadSoundFromFile()
{
	ballBounce.loadFromFile(ballBouncePath);
}

SoundManager::SoundManager()
{
	initialize();
}

SoundManager::~SoundManager()
{
}

void SoundManager::PlaySoundEffect(SoundType soundType)
{
	switch (soundType)
	{
	case SoundType::Ball_Bounce:
		soundEffect.setBuffer(ballBounce);
		break;
	default:
		std::cout << "Invalid Sound Type.";
		return;
	}
	soundEffect.play();
}

void SoundManager::PlayBackgroundMusic()
{
}
