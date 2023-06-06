QT += testlib
QT -= gui
QT += core gui
QT += network

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

CONFIG += c++17

TEMPLATE = app

SOURCES +=  tst_isaev_221_332_test.cpp \
    ../server/func_for_server.cpp \
    ../server/mytcpserver.cpp

HEADERS += \
    ../server/func_for_server.h \
    ../server/mytcpserver.h
