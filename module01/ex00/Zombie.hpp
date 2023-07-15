#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		Zombie( std::string name ); // prefered method for initializing with a name
		~Zombie();
		void	announce( void );
		void	setName( std::string name );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif