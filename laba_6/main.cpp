#include <iostream>
#include "Figure.cpp"

int main()
{
    ContextSettings settings;
    settings.antialiasingLevel = 8;

	RenderWindow window(VideoMode(600, 400), "SFML Works!");  // ������, ������� �������� ������� ����� ����������
	
    Figure f, s;

    f.Figures();
    f.setPosition(300, 200);

	while (window.isOpen())	  // ������� ���� ����������. �����������, ���� ������� ����
	{
		
		Event event;  // ������������ ������� ������� � �����
		while (window.pollEvent(event))
		{
			
			if (event.type == Event::Closed)  // ������������ ����� �� �������� � ����� ������� ����?
				
				window.close();   // ����� ��������� ���
		}

        
        f.control();
        window.clear(Color::White);
        window.draw(f);

        
		window.display();  // ��������� ����	
	}

	return 0;
}