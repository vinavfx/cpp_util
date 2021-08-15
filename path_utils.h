// Author: Francisco José Contreras Cuevas
// Office: Senior VFX Compositor & 3D FX Artist
// Website: videovina.com

#ifndef PATH_UTILS_H
#define PATH_UTILS_H

#include <QString>

namespace path_util
{

QString remove_padding(QString _string);
QString remove_ext(QString _string);
QString get_padding(QString _string);
QString get_ext(QString _string);
QString basename_no_ext(QString _string);

}; // namespace path_util

#endif // PATH_UTILS_H
