// Widgets.h -- Widgets class specification file
#ifndef WIDGETS_H
#define WIDGETS_H

class Widgets
{
	private:
		int WPH, 
			OH;


	public:
		Widgets()
		{
			WPH = 10;
			OH = 16;
		}
		int getWPH()
		{
			return WPH;
		}

		int getOH()
		{
			return OH;
		}

		void numOfDays(int);
};
#endif
