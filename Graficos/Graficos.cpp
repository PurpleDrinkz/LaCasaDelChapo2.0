// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"

#include <iostream>
using namespace std;
GLfloat red, green, blue;

//Aquí está al cien pa cambiar los valores de las variable de mi programa
void actualizar()
{
	/*
	red += 0.001;
	green += 0.002;
	blue += 0.003;

	if (red > 1) red = 0; 
		if (green > 1) green = 0;
	if (blue > 1) blue = 0;
	*/

}



void dibujar()
{
	
	glBegin(GL_POLYGON); //suelo

	glColor3f(150.0f / 255.0, 101.0f / 255.0, 71.0f / 255.0);
	glVertex3f(-1.0f, -0.3f, 0.0f);

	glColor3f(150.0f / 255.0, 101.0f / 255.0, 71.0f / 255.0);
	glVertex3f(1.0f, -0.3f, 0.0f);

	glColor3f(150.0f / 255.0, 101.0f / 255.0, 71.0f / 255.0);
	glVertex3f(1.0, -1.0f, 0.0f);

	glColor3f(150.0f / 255.0, 101.0f / 255.0, 71.0f / 255.0);
	glVertex3f(-1.0, -1.0f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //suelo de concreto

	glColor3f(150.0f / 255.0, 150.0f / 255.0, 167.0f / 255.0);
	glVertex3f(-0.7f, -0.4f, 0.0f);

	glColor3f(150.0f / 255.0, 150.0f / 255.0, 167.0f / 255.0);
	glVertex3f(0.7f, -0.4f, 0.0f);

	glColor3f(150.0f / 255.0, 150.0f / 255.0, 167.0f / 255.0);
	glVertex3f(0.7, -0.95f, 0.0f);

	glColor3f(150.0f / 255.0, 150.0f / 255.0, 167.0f / 255.0);
	glVertex3f(-0.7, -0.95f, 0.0f);

	glEnd(); //Finaliza la rutina.
	
	
	
	glBegin(GL_POLYGON); //nube 1.1

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + -0.3f, 0.1f*sin(i) + 0.7f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //nube 1.2

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + -0.2f, 0.1f*sin(i) + 0.7f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //nube 2.1

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.3f, 0.1f*sin(i) + 0.6f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //nube 2.2

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.2f, 0.1f*sin(i) + 0.6f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //nube 3.1

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.6f, 0.1f*sin(i) + 0.7f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //nube 3.2

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.7f, 0.1f*sin(i) + 0.7f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //nube 4.1

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.8f, 0.1f*sin(i) + 0.3f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //nube 4.2

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + 0.9f, 0.1f*sin(i) + 0.3f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //nube 4.1

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + -0.7f, 0.1f*sin(i) + 0.3f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //nube 4.2

	glColor3f(255.0f / 255.0, 255.0f / 255.0, 255.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.1f*cos(i) + -0.8f, 0.1f*sin(i) + 0.3f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.





	glBegin(GL_POLYGON); //CASA

	glColor3f(245.0f / 255.0, 239.0f / 255.0, 205.0f / 255.0);
	glVertex3f(-0.5f, 0.3f, 0.0f);

	glColor3f(245.0f / 255.0, 239.0f / 255.0, 205.0f / 255.0);
	glVertex3f(0.5f, 0.3f, 0.0f);

	glColor3f(245.0f / 255.0, 239.0f / 255.0, 205.0f / 255.0);
	glVertex3f(0.5, -0.8f, 0.0f);

	glColor3f(245.0f / 255.0, 239.0f / 255.0, 205.0f / 255.0);
	glVertex3f(-0.5,-0.8f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //techo

	glColor3f(202.0f / 255.0, 66.0f / 255.0, 0.0f / 255.0);
	glVertex3f(-0.5f, 0.3f, 0.0f);

	glColor3f(202.0f / 255.0, 66.0f / 255.0, 0.0f / 255.0);
	glVertex3f(0.5f, 0.3f, 0.0f);

	glColor3f(202.0f / 255.0, 66.0f / 255.0, 0.0f / 255.0);
	glVertex3f(0.0, 0.6f, 0.0f);


	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana1

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.4f, -0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.4f, 0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.2f, 0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.2f, -0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana2

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.4f, 0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.4f, -0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.2f, -0.1f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.2f, 0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana3
	
	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.4f, -0.4f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.4f, -0.6f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.2f, -0.6f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(-0.2f, -0.4f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana4

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.4f, -0.4f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.4f, -0.6f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.2f, -0.6f, 0.0f);

	glColor3f(155.0f / 255.0, 214.0f / 255.0, 236.0f / 255.0);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_LINES); //ventana1

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.4f, -0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.4f, 0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.2f, 0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.2f, -0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_LINES); //ventana2

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.4f, 0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.4f, -0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.2f, -0.1f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.2f, 0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_LINES); //ventana3

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.4f, -0.4f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.4f, -0.6f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.2f, -0.6f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(-0.2f, -0.4f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_LINES); //ventana4

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.4f, -0.4f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.4f, -0.6f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.2f, -0.6f, 0.0f);

	glColor3f(52.0f / 255.0, 49.0f / 255.0, 7.0f / 255.0);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glEnd(); //Finaliza la rutina.

	




	glBegin(GL_POLYGON); //puerta

	glColor3f(230.0f / 255.0, 121.0f / 255.0, 2.0f / 255.0);
	glVertex3f(-0.1f, -0.5f, 0.0f);

	glColor3f(230.0f / 255.0, 121.0f / 255.0, 2.0f / 255.0);
	glVertex3f(0.1f, -0.5f, 0.0f);

	glColor3f(230.0f / 255.0, 121.0f / 255.0, 2.0f / 255.0);
	glVertex3f(0.1f, -0.8f, 0.0f);

	glColor3f(230.0f / 255.0, 121.0f / 255.0, 2.0f / 255.0);
	glVertex3f(-0.1f, -0.8f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //tapete 

	glColor3f(33.0f / 255.0, 123.0f / 255.0, 17.0f / 255.0);
	glVertex3f(-0.08f, -0.82f, 0.0f);

	glColor3f(33.0f / 255.0, 123.0f / 255.0, 17.0f / 255.0);
	glVertex3f(0.08f, -0.82f, 0.0f);

	glColor3f(33.0f / 255.0, 123.0f / 255.0, 17.0f / 255.0);
	glVertex3f(0.08f, -0.91f, 0.0f);

	glColor3f(33.0f / 255.0, 123.0f / 255.0, 17.0f / 255.0);
	glVertex3f(-0.08f, -0.91f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //perilla

	glColor3f(237.0f / 255.0, 247.0f / 255.0, 49.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.02f*cos(i) + 0.05f, 0.02f*sin(i) + -0.65f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //sol

	glColor3f(237.0f / 255.0, 247.0f / 255.0, 49.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.4f*cos(i) + -1.0f, 0.4f*sin(i) + 1.0f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //tronco del arbol

	glColor3f(104.0f / 255.0, 81.0f / 255.0, 32.0f / 255.0);
	glVertex3f(0.9f, -0.2f, 0.0f);

	glColor3f(104.0f / 255.0, 81.0f / 255.0, 32.0f / 255.0);
	glVertex3f(1.0f, -0.2f, 0.0f);

	glColor3f(104.0f / 255.0, 81.0f / 255.0, 32.0f / 255.0);
	glVertex3f(1.0f, -0.8f, 0.0f);

	glColor3f(104.0f / 255.0, 81.0f / 255.0, 32.0f / 255.0);
	glVertex3f(0.9f, -0.8f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //arbol 1.1

	glColor3f(5.0f / 255.0, 150.0f / 255.0, 31.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.3f*cos(i) + 1.0f, 0.3f*sin(i) + -0.1f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //arbol 1.2

	glColor3f(5.0f / 255.0, 150.0f / 255.0, 31.0f / 255.0);
	for (float i = 0; i < 360; i++) {
		glVertex3f(0.2f*cos(i) + 1.0f, 0.2f*sin(i) + 0.3f, 0.0f);

	}

	glEnd(); //Finaliza la rutina.
}

int main()
{

	//Declaración de ventana.
	GLFWwindow * window;
	//Propiedades de la ventana.
	GLfloat ancho = 1024;
	GLfloat alto = 768;

	//Inicialización de GLFW.
	if (!glfwInit()) 
	{
		//Si no se inició bien, terminar la ejecución.
		exit(EXIT_FAILURE);
	}

	//Inicializar la ventana.
	window = glfwCreateWindow(ancho, alto, "Gráficos", NULL, NULL);
	
	//Verificar si se creó bien la ventana.
	if (!window)
	{
	//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Terminar ejecución.
		exit(EXIT_FAILURE);
	}

	//Establecer "window" como contexto.
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL Moderno.
	glewExperimental = true;

	//Inicializar GLEW
	GLenum glewError = glewInit();

	//Verificar que GLEW se inicializó bien.
	if (glewError != GLEW_OK)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << version << endl;

	red = green = blue = 0.7f;

	//Ciclo de dibujo.
	while (!glfwWindowShouldClose(window))
	{
		//Establecer el area de render (viewport).
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia la pantalla.
		glClearColor(0.0/255.0, 108.0/255.0, 217.0/255.0, 1);

		//Limpiar la pantalla.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo.
		actualizar();
		dibujar();

		//Intercambio de buffers.
		glfwSwapBuffers(window);

		//Buscar señales de entrada
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();



    return 0;
}

