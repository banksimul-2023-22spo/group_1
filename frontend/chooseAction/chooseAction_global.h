
#ifndef CHOOSEACTION_GLOBAL_H
#define CHOOSEACTION_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QDebug>

#if defined(CHOOSEACTION_LIBRARY)
#  define CHOOSEACTION_EXPORT Q_DECL_EXPORT
#else
#  define CHOOSEACTION_EXPORT Q_DECL_IMPORT
#endif

#endif // CHOOSEACTION_GLOBAL_H
