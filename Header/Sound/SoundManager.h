#pragma once

#include "SFML/Audio.hpp"
#include<string>

using namespace sf;
using namespace std;

namespace Soundmanager
{
	enum class SoundType
	{
		Ball_Bounce
	};
	class SoundManager
	{
	private:
		static Music backgroundMusic;
		static Sound soundEffect;
		static SoundBuffer ballBounce;

		static float backfrounfMusicVolume;
		static const string bgmPath;
		static const string ballBouncePath;

		void initialize();
		static void LoadSoundFromFile();

	public:
		SoundManager();
		~SoundManager();

		static void PlaySoundEffect(SoundType soundType);
		static void PlayBackgroundMusic();
	};
}

