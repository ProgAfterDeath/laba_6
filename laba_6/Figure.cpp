#include <SFML/Graphics.hpp>

using namespace sf;

class Figure : public Drawable, public Transformable {
private:

    CircleShape central_circle;
    CircleShape leftUp_circle;
    CircleShape leftDown_circle;
    CircleShape rightUp_circle;
    CircleShape rightDown_circle;

    RectangleShape x_line_1;
    RectangleShape x_line_2;

    RectangleShape vert_line;
    RectangleShape horz_line;

    RectangleShape upper_triangleSide_1;
    RectangleShape upper_triangleSide_2;
    RectangleShape lefter_triangleSide_1;
    RectangleShape lefter_triangleSide_2;
    RectangleShape righter_triangleSide_1;
    RectangleShape righter_triangleSide_2;
    RectangleShape lower_triangleSide_1;
    RectangleShape lower_triangleSide_2;

    CircleShape triangle_upper;
    CircleShape triangle_lefter;
    CircleShape triangle_righter;
    CircleShape triangle_lower;

    virtual void draw(RenderTarget& target, RenderStates states) const
    {
        states.transform *= getTransform();

        target.draw(leftUp_circle, states);
        target.draw(leftDown_circle, states);
        target.draw(rightUp_circle, states);
        target.draw(rightDown_circle, states);
        target.draw(central_circle, states);

        target.draw(x_line_1, states);
        target.draw(x_line_2, states);

        target.draw(vert_line, states);
        target.draw(horz_line, states);

        target.draw(upper_triangleSide_1, states);
        target.draw(upper_triangleSide_2, states);
        target.draw(lefter_triangleSide_1, states);
        target.draw(lefter_triangleSide_2, states);
        target.draw(righter_triangleSide_1, states);
        target.draw(righter_triangleSide_2, states);
        target.draw(lower_triangleSide_1, states);
        target.draw(lower_triangleSide_2, states);

        target.draw(triangle_upper, states);
        target.draw(triangle_lefter, states);
        target.draw(triangle_righter, states);
        target.draw(triangle_lower, states);
    }

public:

    void Figures() {

        //Central Circle//
        central_circle.setRadius(50); // устанавливаем радиус круга
        central_circle.setFillColor(Color(255, 255, 255, 0)); // закрашиваем наш круг 
        central_circle.setOutlineThickness(4.f); // устанавливаем толщину контура круга
        central_circle.setOutlineColor(Color(0, 0, 0)); // устанавливаем цвет контура
        central_circle.move(0, 0); // перемещаем наш круг для корректного отображения в окне

        //LeftUp Circle//
        leftUp_circle.setRadius(40);
        leftUp_circle.setFillColor(Color(255, 255, 255, 0));
        leftUp_circle.setOutlineThickness(4.f);
        leftUp_circle.setOutlineColor(Color(0, 0, 0));
        leftUp_circle.move(-31, -31);

        //LeftDown Circle//
        leftDown_circle.setRadius(40);
        leftDown_circle.setFillColor(Color(255, 255, 255, 0));
        leftDown_circle.setOutlineThickness(4.f);
        leftDown_circle.setOutlineColor(Color(0, 0, 0));
        leftDown_circle.move(-31, 52);

        //RightUp Circle//
        rightUp_circle.setRadius(40);
        rightUp_circle.setFillColor(Color(255, 255, 255, 0));
        rightUp_circle.setOutlineThickness(4.f);
        rightUp_circle.setOutlineColor(Color(0, 0, 0));
        rightUp_circle.move(52, -31);

        //RightDown Circle//
        rightDown_circle.setRadius(40);
        rightDown_circle.setFillColor(Color(255, 255, 255, 0));
        rightDown_circle.setOutlineThickness(4.f);
        rightDown_circle.setOutlineColor(Color(0, 0, 0));
        rightDown_circle.move(52, 52);

        //X Line  1//
        x_line_1.setSize(Vector2f(125.f, 0.f));
        x_line_1.setFillColor(Color(255, 255, 255, 0));
        x_line_1.setOutlineThickness(2.f);
        x_line_1.setOutlineColor(Color(0, 0, 0));
        x_line_1.setRotation(45.f);
        x_line_1.move(6, 6);

        //X Line 2//
        x_line_2.setSize(Vector2f(125.f, 0.f));
        x_line_2.setFillColor(Color(255, 255, 255, 0));
        x_line_2.setOutlineThickness(2.f);
        x_line_2.setOutlineColor(Color(0, 0, 0));
        x_line_2.setRotation(315.f);
        x_line_2.move(6, 94);

        //Vertical Line//
        vert_line.setSize(Vector2f(200.f, 0.f));
        vert_line.setFillColor(Color(255, 255, 255, 0));
        vert_line.setOutlineThickness(2.f);
        vert_line.setOutlineColor(Color(0, 0, 0));
        vert_line.setRotation(90.f);
        vert_line.move(50, -50);

        //Horizontal Line//
        horz_line.setSize(Vector2f(200.f, 0.f));
        horz_line.setFillColor(Color(255, 255, 255, 0));
        horz_line.setOutlineThickness(2.f);
        horz_line.setOutlineColor(Color(0, 0, 0));
        horz_line.setRotation(0.f);
        horz_line.move(-50, 50);

        //Upper Triangle Side 1//
        upper_triangleSide_1.setSize(Vector2f(70.f, 0.f));
        upper_triangleSide_1.setFillColor(Color(255, 255, 255, 0));
        upper_triangleSide_1.setOutlineThickness(2.f);
        upper_triangleSide_1.setOutlineColor(Color(0, 0, 0));
        upper_triangleSide_1.setRotation(120.f);
        upper_triangleSide_1.move(50, -50);

        //Upper Triangle Side 2//
        upper_triangleSide_2.setSize(Vector2f(70.f, 0.f));
        upper_triangleSide_2.setFillColor(Color(255, 255, 255, 0));
        upper_triangleSide_2.setOutlineThickness(2.f);
        upper_triangleSide_2.setOutlineColor(Color(0, 0, 0));
        upper_triangleSide_2.setRotation(60.f);
        upper_triangleSide_2.move(50, -50);

        //Left Triangle Side 1//
        lefter_triangleSide_1.setSize(Vector2f(70.f, 0.f));
        lefter_triangleSide_1.setFillColor(Color(255, 255, 255, 0));
        lefter_triangleSide_1.setOutlineThickness(2.f);
        lefter_triangleSide_1.setOutlineColor(Color(0, 0, 0));
        lefter_triangleSide_1.setRotation(30.f);
        lefter_triangleSide_1.move(-50, 50);

        //Left Triangle Side 2//
        lefter_triangleSide_2.setSize(Vector2f(70.f, 0.f));
        lefter_triangleSide_2.setFillColor(Color(255, 255, 255, 0));
        lefter_triangleSide_2.setOutlineThickness(2.f);
        lefter_triangleSide_2.setOutlineColor(Color(0, 0, 0));
        lefter_triangleSide_2.setRotation(330.f);
        lefter_triangleSide_2.move(-50, 50);

        //Right Triangle Side 1//
        righter_triangleSide_1.setSize(Vector2f(70.f, 0.f));
        righter_triangleSide_1.setFillColor(Color(255, 255, 255, 0));
        righter_triangleSide_1.setOutlineThickness(2.f);
        righter_triangleSide_1.setOutlineColor(Color(0, 0, 0));
        righter_triangleSide_1.setRotation(150.f);
        righter_triangleSide_1.move(150, 50);

        //Right Triangle Side 2//
        righter_triangleSide_2.setSize(Vector2f(70.f, 0.f));
        righter_triangleSide_2.setFillColor(Color(255, 255, 255, 0));
        righter_triangleSide_2.setOutlineThickness(2.f);
        righter_triangleSide_2.setOutlineColor(Color(0, 0, 0));
        righter_triangleSide_2.setRotation(210.f);
        righter_triangleSide_2.move(150, 50);

        //Lower Triangle Side 1//
        lower_triangleSide_1.setSize(Vector2f(70.f, 0.f));
        lower_triangleSide_1.setFillColor(Color(255, 255, 255, 0));
        lower_triangleSide_1.setOutlineThickness(2.f);
        lower_triangleSide_1.setOutlineColor(Color(0, 0, 0));
        lower_triangleSide_1.setRotation(300.f);
        lower_triangleSide_1.move(50, 150);

        //Lower Triangle Side 2//
        lower_triangleSide_2.setSize(Vector2f(70.f, 0.f));
        lower_triangleSide_2.setFillColor(Color(255, 255, 255, 0));
        lower_triangleSide_2.setOutlineThickness(2.f);
        lower_triangleSide_2.setOutlineColor(Color(0, 0, 0));
        lower_triangleSide_2.setRotation(240.f);
        lower_triangleSide_2.move(50, 150);

        //Triangle Upper//
        triangle_upper.setRadius(15.f);
        triangle_upper.setPointCount(3);
        triangle_upper.setFillColor(Color(255, 255, 255, 0));
        triangle_upper.setOutlineThickness(4.f);
        triangle_upper.setOutlineColor(Color(0, 0, 0));
        triangle_upper.setRotation(0.f);
        triangle_upper.setPosition(35, -74);

        //Triangle Lefter//
        triangle_lefter.setRadius(15.f);
        triangle_lefter.setPointCount(3);
        triangle_lefter.setFillColor(Color(255, 255, 255, 0));
        triangle_lefter.setOutlineThickness(4.f);
        triangle_lefter.setOutlineColor(Color(0, 0, 0));
        triangle_lefter.setRotation(270.f);
        triangle_lefter.setPosition(-74, 65);

        //Triangle Righter//
        triangle_righter.setRadius(15.f);
        triangle_righter.setPointCount(3);
        triangle_righter.setFillColor(Color(255, 255, 255, 0));
        triangle_righter.setOutlineThickness(4.f);
        triangle_righter.setOutlineColor(Color(0, 0, 0));
        triangle_righter.setRotation(90.f);
        triangle_righter.setPosition(174, 35);

        //Triangle Lower//
        triangle_lower.setRadius(15.f);
        triangle_lower.setPointCount(3);
        triangle_lower.setFillColor(Color(255, 255, 255, 0));
        triangle_lower.setOutlineThickness(4.f);
        triangle_lower.setOutlineColor(Color(0, 0, 0));
        triangle_lower.setRotation(180.f);
        triangle_lower.setPosition(65, 174);

    }

    void control()
    {
        this->setOrigin(50.f, 50.f);//центр вращения
        if (Keyboard::isKeyPressed(Keyboard::W))
        {
            this->move(0, -0.5f);
        }
        if (Keyboard::isKeyPressed(Keyboard::S))
        {
            this->move(0, 0.5f);
        }
        if (Keyboard::isKeyPressed(Keyboard::A))
        {
            this->move(-0.5f, 0);
        }
        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            this->move(0.5f, 0);
        }
        if (Keyboard::isKeyPressed(Keyboard::Left) || Mouse::isButtonPressed(Mouse::Left))
        {
            this->rotate(1);
        }
        if (Keyboard::isKeyPressed(Keyboard::Right) || Mouse::isButtonPressed(Mouse::Right))
        {
            this->rotate(-1);
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            this->setScale(1.2, 1.2);
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            this->setScale(0.9, 0.9);
        }

    }
};