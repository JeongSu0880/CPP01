#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
private:
	std::string mType;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string &getType();
	void	setType(std::string type);
};

#endif