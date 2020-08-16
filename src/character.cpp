#include "Character.hpp"

Character::Character() {}

Character::Character(const SpriteCreateInfo& p_info, std::string p_character)
:character(p_character)
{
	name = p_info.name;
	tex = p_info.tex;
	color = p_info.color;
	alpha = p_info.alpha;
	flip = p_info.flip;
	prevPos = p_info.pos,
	pos = p_info.pos;
	angle = p_info.angle;
	origin = p_info.origin;
	frameSize = p_info.frameSize;
	scale = p_info.scale;
	depth = p_info.depth;
	zoomModifier = p_info.zoomModifier;
	
	loadFrames(frameSize);
	currentFrame = frames[0];

	// Load a set of Animation Cycles from a file
	animationSet = loadAnimationFile("res/font.json");
	// Set the playback speed of the main animation
	animationSet[character].playBackSpeed = 1.f;
}

void Character::update(const float& p_dt)
{

	animate(p_dt);
	
	
}

void Character::setCharacter(std::string p_character)
{
<<<<<<< HEAD
	animationSet[p_character].playBackSpeed = 1.f;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = p_character;
	character = "5";
	if (character == "1")
=======
	std::cout << "p_char" << p_character << std::endl;
	
	character = "4";
	
	if (character == "7")
>>>>>>> ccf3993bae31fe14029b2f8be53286f50dc95dc2
	{
		std::cout << "char" << character << std::endl;
	}
	//
}

void Character::animate(const float& p_dt)
{	
<<<<<<< HEAD
	if (character == "1")
	{
		std::cout << "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE" << std::endl;
	}
=======
	std::cout << "char" << character << std::endl;
>>>>>>> ccf3993bae31fe14029b2f8be53286f50dc95dc2

	play(animationSet[character]);
	
}