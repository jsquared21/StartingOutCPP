// Population.h -- Population class specification file
#ifndef POPULATION_H 
#define POPULATION_H 

class Population
{
	private:
		// Member variables
		int CurrPop,		// Current Population
			Births,			// Annual number of births
			Deaths;			// Annual number of deaths
	public:
		// Member function prototypes
		Population(int, int, int);

		void setPopulation(int);

		void setBirths(int);

		void setDeaths(int);

		double getBirthRate();

		double getDeathRate();
};
#endif