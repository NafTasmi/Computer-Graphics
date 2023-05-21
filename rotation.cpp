#include <stdio.h>
#include <graphics.h>
#include <math.h>
#define PI acos(-1)

struct Matrix2
{
    double m11, m12;
    double m21, m22;

    Matrix2(double a, double b, double c, double d)
    {
        m11 = a;
        m12 = b;
        m21 = c;
        m22 = d;
    }

    Matrix2 operator*(Matrix2 &other)
    {
        return Matrix2(
            m11 * other.m11 + m12 * other.m21,
            m11 * other.m12 + m12 * other.m22,
            m21 * other.m11 + m22 * other.m21,
            m21 * other.m12 + m22 * other.m22);
    }
};

struct Matrix3
{
    double m11, m12, m13;
    double m21, m22, m23;
    double m31, m32, m33;

    Matrix3(double a, double b, double c, double d, double e, double f, double g = 0, double h = 0, double i = 1)
    {
        m11 = a;
        m12 = b;
        m13 = c;
        m21 = d;
        m22 = e;
        m23 = f;
        m31 = g;
        m32 = h;
        m33 = i;
    }

    Matrix3 operator*(Matrix3 &other)
    {
        return Matrix3(
            m11 * other.m11 + m12 * other.m21 + m13 * other.m31,
            m11 * other.m12 + m12 * other.m22 + m13 * other.m32,
            m11 * other.m13 + m12 * other.m23 + m13 * other.m33,
            m21 * other.m11 + m22 * other.m21 + m23 * other.m31,
            m21 * other.m12 + m22 * other.m22 + m23 * other.m32,
            m21 * other.m13 + m22 * other.m23 + m23 * other.m33,
            m31 * other.m11 + m32 * other.m21 + m33 * other.m31,
            m31 * other.m12 + m32 * other.m22 + m33 * other.m32,
            m31 * other.m13 + m32 * other.m23 + m33 * other.m33);
    }
};

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    double s, c, angle;
    initgraph(&gd, &gm, " ");

    printf("Enter coordinates of line: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    cleardevice();

    line(x1, y1, x2, y2);

    printf("Enter rotation angle: ");
    scanf("%lf", &angle);

    // int px, py;
    // printf("Enter pivot point: ");
    // scanf("%d%d", &px, &py);

    angle = angle * PI / 180;

    // Matrix3 translationMatrix = Matrix3(1, 0, px, 0, 1, py);

    // Matrix3 rotationMatrix = Matrix3(cos(angle), -sin(angle), 0, sin(angle), cos(angle), 0);

    // Matrix3 retranslationMatrix = Matrix3(1, 0, -px, 0, 1, -py);

    // Matrix3 lineMatrix = Matrix3(x1, x2, 1, y1, y2, 1);

    // Matrix3 newLineMatrix = translationMatrix * rotationMatrix * retranslationMatrix * lineMatrix;

    // x1 = newLineMatrix.m11;
    // y1 = newLineMatrix.m21;
    // x2 = newLineMatrix.m12;
    // y2 = newLineMatrix.m22;
    
    // Matrix2 rotationMatrix = Matrix2(cos(angle), -sin(angle), sin(angle), cos(angle));

    // Matrix2 lineMatrix = Matrix2(x1, x2, y1, y2);

    // Matrix2 newLineMatrix = rotationMatrix * lineMatrix;

    // x1 = newLineMatrix.m11;
    // y1 = newLineMatrix.m12;
    // x2 = newLineMatrix.m21;
    // y2 = newLineMatrix.m22;

    // c = cos(angle * PI / 180);
    // s = sin(angle * PI / 180);

    // x1 = x1 * cos(angle) - y1 * sin(angle);
    // y1 = x1 * sin(angle) + y1 * cos(angle);

    x2 = x2 * cos(angle) - y2 * sin(angle);
    y2 = x2 * sin(angle) + y2 * cos(angle);

    printf("%d %d %d %d", x1, y1, x2, y2);
    // cleardevice();
    line(x1, y1, x2, y2);

    getch();
    closegraph();
}
