#include <QtTest/QTest>
#include <QFile>
#include "../cameras/abstractcamera.h"

class CameraTests : public QObject
{
    Q_OBJECT
private slots:
    void getNewFileName_data();
    void getNewFileName();
};

void CameraTests::getNewFileName_data()
{
    //Remove all exisiting files in test dir
    auto testDir = QDir(QDir::currentPath());
    testDir.setNameFilters(QStringList() << ".jpg");
    testDir.setFilter(QDir::Files);
    foreach(auto dirFile, testDir.entryList())
    {
        testDir.remove(dirFile);
    }
    auto dirString = testDir.absolutePath();

    //Create test files
    QFile testFile1("IMG1.jpg");
    testFile1.open(QFile::WriteOnly);
    testFile1.close();

    QFile testFile2("IMAGE500.jpg");
    testFile2.open(QFile::WriteOnly);
    testFile2.close();

    QFile testFile3("PNGImage1.png");
    testFile3.open(QFile::WriteOnly);
    testFile3.close();

    QFile testFile4("PNGimage600.png");
    testFile4.open(QFile::WriteOnly);
    testFile4.close();

    QFile testFile5("avivid1.avi");
    testFile5.open(QFile::WriteOnly);
    testFile5.close();


    QFile testFile6("mp4vid1.mp4");
    testFile6.open(QFile::WriteOnly);
    testFile6.close();



    QTest::addColumn<QString>("prefix");
    QTest::addColumn<QString>("path");
    QTest::addColumn<QString>("result");

    QTest::newRow("First image") << "img" << dirString << "img1";
    QTest::newRow("Test against jpg") << "IMG" << dirString << "IMG2";
    QTest::newRow("Test against jpg large number") << "IMAGE" << dirString <<  "IMAGE501";
    QTest::newRow("Number in prefix") << "img04" << dirString << "img041";
    QTest::newRow("Test against png") << "PNGImage" << dirString <<  "PNGImage2";
    QTest::newRow("Test against file large png") << "PNGimage" << dirString <<  "PNGimage601";
    QTest::newRow("Test against avi") << "avivid" << dirString <<  "avivid2";
    QTest::newRow("Test against mp4") << "mp4vid" << dirString <<  "mp4vid2";

}

void CameraTests::getNewFileName()
{

    QFETCH(QString, prefix);
    QFETCH(QString, path);
    QFETCH(QString, result);
    QCOMPARE(AbstractCamera::getNewFileName(prefix, QDir(path)), result);
}

QTEST_MAIN(CameraTests)
#include "cameratests.moc"
