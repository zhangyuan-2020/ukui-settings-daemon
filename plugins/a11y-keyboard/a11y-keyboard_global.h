#ifndef A11YKEYBOARD_GLOBAL_H
#define A11YKEYBOARD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(A11YKEYBOARD_LIBRARY)
#  define A11YKEYBOARD_EXPORT Q_DECL_EXPORT
#else
#  define A11YKEYBOARD_EXPORT Q_DECL_IMPORT
#endif

#endif // A11YKEYBOARD_GLOBAL_H
