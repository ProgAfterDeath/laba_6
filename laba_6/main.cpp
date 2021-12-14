#include <iostream>
#include "Figure.cpp"

int main()
{
    ContextSettings settings;
    settings.antialiasingLevel = 8;

	RenderWindow window(VideoMode(600, 400), "SFML Works!");  // Объект, который является главным окном приложения
	
    Figure f, s;

    f.Figures();
    f.setPosition(300, 200);

	while (window.isOpen())	  // Главный цикл приложения. Выполняется, пока открыто окно
	{
		
		Event event;  // Обрабатываем очередь событий в цикле
		while (window.pollEvent(event))
		{
			
			if (event.type == Event::Closed)  // Пользователь нажал на «крестик» и хочет закрыть окно?
				
				window.close();   // тогда закрываем его
		}

        
        f.control();
        window.clear(Color::White);
        window.draw(f);

        
		window.display();  // Отрисовка окна	
	}

	return 0;
}