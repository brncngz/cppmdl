

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		DeepCoreMiner(const DeepCoreMiner& src);
		~DeepCoreMiner(void);

		DeepCoreMiner&	operator=(const DeepCoreMiner& src);

		void	mine(IAsteroid *_ast);
	private:

};

#endif
