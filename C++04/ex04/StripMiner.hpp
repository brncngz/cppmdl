

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(const StripMiner& src);
		~StripMiner(void);

		StripMiner&	operator=(const StripMiner& src);

		void	mine(IAsteroid *_ast);
	private:

};

#endif
