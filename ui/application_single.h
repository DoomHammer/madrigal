/*
 * Madrigal
 *
 * Copyright (c) 2016 Craig Drummond <craig.p.drummond@gmail.com>
 *
 * ----
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef UI_APPLICATION_SINGLE_H
#define UI_APPLICATION_SINGLE_H

#include "3rdparty/qtsingleapplication/qtsingleapplication.h"

namespace Ui {
class Application : public QtSingleApplication {
    Q_OBJECT

public:
    Application(int &argc, char **argv);
    virtual ~Application();

    bool start();

private Q_SLOTS:
    void message(const QString &m);
};
}

#endif
