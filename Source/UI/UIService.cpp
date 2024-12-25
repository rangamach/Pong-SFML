#include "../../Header/UI/UIService.h"

void UIService::loadFontTexture()
{
	font.loadFromFile(font_path);
}

void UIService::createLeftScoreText()
{
	left_score_text.setFont(font);
	left_score_text.setString(initial_score);
	left_score_text.setCharacterSize(font_size);
	left_score_text.setFillColor(font_color);
	left_score_text.setPosition(left_score_pos_x, left_score_pos_y);
}

void UIService::createRightScoreText()
{
	right_score_text.setFont(font);
	right_score_text.setString(initial_score);
	right_score_text.setCharacterSize(font_size);
	right_score_text.setFillColor(font_color);
	right_score_text.setPosition(right_score_pos_x, right_score_pos_y);
}

UIService::UIService()
{
	loadFontTexture();
	createLeftScoreText();
	createRightScoreText();
}

void UIService::render(RenderWindow* game_window)
{
	game_window->draw(left_score_text);
	game_window->draw(right_score_text);
}
