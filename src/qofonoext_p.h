/****************************************************************************
**
** Copyright (C) 2015 Jolla Ltd.
** Contact: slava.monich@jollamobile.com
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/

#ifndef QOFONOEXT_PRIVATE_H
#define QOFONOEXT_PRIVATE_H

#include "qofonoext_types.h"

#include <QtDBus>

#define OFONO_SERVICE "org.ofono"
#define OFONO_BUS QDBusConnection::systemBus()

typedef QList<bool> QOfonoExtBoolList;

#endif // QOFONOEXT_PRIVATE_H
