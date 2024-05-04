// Author: Francisco Contreras
// Office: Senior VFX Compositor & 3D FX Artist
// Website: videovina.com

#ifndef OS_HPP
#define OS_HPP

#include <iostream>
using namespace std;
#include <math.h>   /* round, floor, ceil, trunc */
#include <unistd.h> // sleep usleep
#include <fstream>  // ifstream
#include <QHostInfo>
#include <QString>
#include <QDebug>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QDirIterator>
#include <QDir>
#include <QFile>
#include <QProcess>
//librerias propias
#include "util.h"
//--------------------

#ifdef _WIN32
#include <windows.h>
#include <TlHelp32.h>
#endif

namespace os
{

void copy(QString src, QString dst);
void copydir(QString src, QString dst);
void move(QString src, QString dst);
void remove(QString _file);
void system(QString cmd);
QString dirname(QString file);
QString basename(QString file);
QString get_user();
QString get_home();
bool isfile(QString file);
bool isdir(QString dir);
void makedirs(QString dir);
void makedir(QString dir);
void kill(int pid, bool force = false);
QStringList listdir(QString folder, bool recursive = false,
                    bool onlyname = false);
QString sh(QString cmd, bool error = true);
const QString hostName();
const QString ip();
const QString mac();
const QString user();
void back(QString cmd);
void rename(QString src, QString dst);
void copymove(QString src, QString dst, bool copy);
} // namespace os

//define el systema operativo
#ifdef _WIN32
#define _win32 1
#define _darwin 0
#define _linux 0
#elif __APPLE__
#define _win32 0
#define _darwin 1
#define _linux 0
#elif __linux__
#define _win32 0
#define _darwin 0
#define _linux 1
#else
#define _win32 0
#define _darwin 0
#define _linux 0
#endif
//----------------------------

#endif //OS_HPP
