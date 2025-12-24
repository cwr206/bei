#include "Point3D.h"

int main() {
    // 测试二维点
    cout << "===== 测试二维点 =====" << endl;
    Point2D p2_1(1.0, 2.0);
    Point2D p2_2(4.0, 6.0);
    p2_1.show();
    p2_2.show();
    cout << "二维点p2_1与p2_2的距离：" << distance(p2_1, p2_2) << endl;
    p2_1.move(2.0, 3.0);
    cout << "p2_1移动后：";
    p2_1.show();

    // 测试三维点
    cout << "\n===== 测试三维点 =====" << endl;
    Point3D p3_1(1.0, 2.0, 3.0);
    Point3D p3_2(4.0, 6.0, 8.0);
    p3_1.show();
    p3_2.show();
    // 显式调用三维点的距离函数
    cout << "三维点p3_1与p3_2的距离：" << distance(p3_1, p3_2) << endl;
    p3_1.move(2.0, 3.0, 4.0);
    cout << "p3_1移动后：";
    p3_1.show();
    // 移动后再次计算距离
    cout << "p3_1移动后与p3_2的距离：" << distance(p3_1, p3_2) << endl;

    return 0;
}
