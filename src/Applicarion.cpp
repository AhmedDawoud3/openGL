#include <GLFW/glfw3.h>
int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "First Window", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}
	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glClearColor(0.1f, 0.1f, 0.4f, 1.0f);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		//VSync
		glfwSwapInterval(0);
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glColor3f(1.0F, 1.0F, 1.0F);
		glRectf(-0.75f, 0.75f, 0.75f, -0.75f);
		glColor3f(1.0F, 0.5F, 0.6F);
		glBegin(GL_TRIANGLES);
		glVertex2d(1.0f, 1.0f);
		glVertex2d(0.0f, 0.0f);
		glVertex2d(0.0f, -1.0f);
		glEnd();
		glColor3f(0.0F, 0.5F, 0.6F);
		glBegin(GL_TRIANGLES);
		glVertex2d(0.0f, 1.0f);
		glVertex2d(-1.0f, -1.0f);
		glVertex2d(0.0f, -1.0f);
		glEnd();
		glColor3f(0.8F, 0.2F, 0.1f);
		glBegin(GL_TRIANGLES);
		glVertex2d(0.4f, -0.5f);
		glVertex2d(-0.4f, -0.2f);
		glVertex2d(-0.0f, 0.8f);
		glEnd();


		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
