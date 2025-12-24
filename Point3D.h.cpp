#ifndef POINT3D_H
#define POINT3D_H
#include "Point2D.h"

class Point3D : public Point2D {
private:
    double z;
public:
    Point3D(double x = 0.0, double y = 0.0, double z = 0.0) : Point2D(x, y), z(z) {
        cout << "Point3D构造函数调用" << endl;
    }

    ~Point3D() {
        cout << "Point3D析构函数调用" << endl;
    }

    void move(double dx, double dy, double dz) {
        Point2D::move(dx, dy);
        z += dz;
    }

    // 修正：直接输出完整三维坐标，避免依赖基类show的拆分显示
    void show() const {
        cout << "三维点坐标：(" << getX() << ", " << getY() << ", " << z << ")" << endl;
    }

    // 友元函数声明（仅声明，实现写在类外）
    friend double distance(const Point3D& p1, const Point3D& p2);

    // 提供私有成员z的访问接口（供友元函数使用）
    double getZ() const { return z; }
};

// 修正三维点距离计算的友元函数实现
double distance(const Point3D& p1, const Point3D& p2) {
    double dx = p1.getX() - p2.getX();
    double dy = p1.getY() - p2.getY();
    double dz = p1.getZ() - p2.getZ();
    // 精确计算欧式距离
    return sqrt(dx * dx + dy * dy + dz * dz);
}

#endif
