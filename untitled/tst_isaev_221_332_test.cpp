#include "../server/func_for_server.cpp"
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
    QTcpSocket a;
    QString params1 = "perimeter@1,1@3,7@5,10@6,3@4,1";
    QCOMPARE(parsing(params1, a).toDouble(), 32.0);
    QString params2 = "perimeter@1,1@3,4@5,2";
    QCOMPARE(parsing(params2, a).toDouble(), 9.61577310586);
    QString params3 = "perimeter@1,1@5,1@5,3@1,3";
    QCOMPARE(parsing(params3, a).toDouble(), 12.0);
    QString params4 = "perimeter@2,3@8,3@8,9@2,9";
    QCOMPARE(parsing(params4, a).toDouble(), 24.0);
    QString params5 = "perimeter@3,1@8,1@8,6";
    QCOMPARE(parsing(params5, a).toDouble(), 17.1527767793);
    QString params6 = "perimeter@5,5@3";
    QCOMPARE(parsing(params6, a).toDouble(), 18.8495559215);
    QString params7 = "perimeter@2,2@5,2@5,5@2,5";
    QCOMPARE(parsing(params7, a).toDouble(), 12.0);
    QString params8 = "perimeter@1,1@9,1@9,5@1,5";
    QCOMPARE(parsing(params8, a).toDouble(), 16.0);
    QString params9 = "perimeter@1,1@5,1@3,4";
    QCOMPARE(parsing(params9, a).toDouble(), 10.9393398282);
    QString params10 = "perimeter@7,8@4.5";
    QCOMPARE(parsing(params10, a).toDouble(), 28.2743338823);
}

void Isaev_221_332_Test::test_case2()
{
    QTcpSocket a;
    QString params1 = "square@1,1@3,7@5,10@6,3@4,1";
    QCOMPARE(parsing(params1, a).toDouble(), 32.0);
    QString params2 = "square@1,1@3,4@5,2";
    QCOMPARE(parsing(params2, a).toDouble(), 9.61577310586);
    QString params3 = "square@1,1@5,1@5,3@1,3";
    QCOMPARE(parsing(params3, a).toDouble(), 12.0);
    QString params4 = "square@2,3@8,3@8,9@2,9";
    QCOMPARE(parsing(params4, a).toDouble(), 24.0);
    QString params5 = "square@3,1@8,1@8,6";
    QCOMPARE(parsing(params5, a).toDouble(), 17.1527767793);
    QString params6 = "square@5,5@3";
    QCOMPARE(parsing(params6, a).toDouble(), 18.8495559215);
    QString params7 = "square@2,2@5,2@5,5@2,5";
    QCOMPARE(parsing(params7, a).toDouble(), 12.0);
    QString params8 = "square@1,1@9,1@9,5@1,5";
    QCOMPARE(parsing(params8, a).toDouble(), 16.0);
    QString params9 = "square@1,1@5,1@3,4";
    QCOMPARE(parsing(params9, a).toDouble(), 10.9393398282);
    QString params10 = "square@7,8@4.5";
    QCOMPARE(parsing(params10, a).toDouble(), 28.2743338823);
}

QTEST_APPLESS_MAIN(Isaev_221_332_Test)

#include "tst_isaev_221_332_test.moc"
