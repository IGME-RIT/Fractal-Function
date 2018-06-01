




#include <math.h>

// Function to draw mandelbrot set
void mandelbrot()
{
	float red = 0.0;
	float green = 0.0;
	float blue = 0.0;
	double xInc = 0.0; //++ across the screen so that all pixels are plotted
	double yInc = 0.0; //between the domain and range 
	int current Iteration = 1;


	//variables for the c & z variables in the Mandelbrot function
	double cReal = 0.0;
	double cFake = 0.0;
	double zReal = 0.0;
	double zFake = 0.0;

	//calculate x and y increment values the window width and height need to be global variables
	xInc = (xMax - xMin) / (windowWidth);
	yInc = (yMax - yMin) / (windowHeight);

	//loop through plotting every pixel on screen
	for (int y = 0; y < windowHeight; y++)
	{
		//get complex values for c imaginary part
		cFake = yMax - y * yInc;

		for (int x = 0; x < windowWidth; x++)
		{
			//get complex value for c real part
			cReal = xMin + x * xInc;

			zFake = cFake;
			zReal = cReal;
			currentIteration = 0;

				//test if a point is in the Mandelbrot set
				while (currentIteration < maxIterations && (zReal*zReal + zFake * zFake) < 4)
				{
						//(2ab + c imaginary part)
						zFake = 2 * (zReal * zFake) + cFake;

						//(a^2 - b^2) + c real part)
						zReal = ((zReal*zReal) - (zFake*zFake)) + cReal;

						currentIteration++;
				}//end of iteration test loop


		}
	}

}





