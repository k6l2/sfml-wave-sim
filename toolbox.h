#pragma once
#include <iostream>
#include <SFML/System.hpp>
extern const double PI;
std::ostream& operator<<(std::ostream& lhs, const sf::Vector2f rhs);
float clampf(float value, float minValue, float maxValue);