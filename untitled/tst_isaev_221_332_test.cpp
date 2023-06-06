#include "../server/func_for_server.h"
#include <QtTest>

// add necessary includes here

class Isaev_221_332_Test : public QObject
{
    Q_OBJECT

public:
    Isaev_221_332_Test();
    ~Isaev_221_332_Test();

private slots:
    void test_case1();
    void test_case2();
};

Isaev_221_332_Test::Isaev_221_332_Test()
{

}

Isaev_221_332_Test::~Isaev_221_332_Test()
{

}

void Isaev_221_332_Test::test_case1()
{
    QString params1 = "square@1,1@3,7@5,10@6,3@4,1";
    QCOMPARE(calculatePerimeter(parsing(params1), ""), 32.0);
    QString params2 = "square@1,2@2,3@4,5";
    QCOMPARE(calculatePerimeter(params2), 2.0);
    QString params3 = "perimeter@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeter(params3), 10.472136);
    QString params4 = "perimeter@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeter(params4), 12.675);
    QString params5 = "area@1,1@3,7@5,10@6,3@4,1";
    QCOMPARE(calculatePerimeter(params5), 30.0);
    QString params6 = "area@1,2@2,3@4,5";
    QCOMPARE(calculatePerimeter(params6), 0.5);
    QString params7 = "area@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeter(params7), 0.0);
    QString params8 = "area@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeter(params8), 8.5);
    QString params9 = "perimeter@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeter(params9), 10.472136);
    QString params10 = "perimeter@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeter(params10), 12.675);
}

void Isaev_221_332_Test::test_case2()
{
    QString params1 = "area@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeterOrArea(params1), 0.0);
    QString params2 = "area@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeterOrArea(params2), 8.5);
    QString params3 = "perimeter@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeterOrArea(params3), 10.472136);
    QString params4 = "perimeter@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeterOrArea(params4), 12.675);
    QString params5 = "square@1,1@3,7@5,10@6,3@4,1";
    QCOMPARE(calculatePerimeterOrArea(params5), 32.0);
    QString params6 = "square@1,2@2,3@4,5";
    QCOMPARE(calculatePerimeterOrArea(params6), 2.0);
    QString params7 = "square@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeterOrArea(params7), 0.0);
    QString params8 = "square@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeterOrArea(params8), 0.0);
    QString params9 = "perimeter@1,2@3,4@5,6";
    QCOMPARE(calculatePerimeterOrArea(params9), 10.472136);
    QString params10 = "perimeter@2,3@4,6@8,9";
    QCOMPARE(calculatePerimeterOrArea(params10), 12.675);
}


QTEST_APPLESS_MAIN(Isaev_221_332_Test)

#include "tst_isaev_221_332_test.moc"
