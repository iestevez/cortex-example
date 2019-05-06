/***************
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
***************/
#include <QtCore/QCoreApplication>
#include <QtCore/QtDebug>
#include "DataStreamExample.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DataStreamExample dse;

    qInfo() << "";
    qInfo() << "#####";
    qInfo() << "Reminder: to subscribe to the EEG data stream, you must get an appropriate licence from Emotiv.";
    qInfo() << "#####";
    qInfo() << "";

    // TODO use your Emotiv license to get EEG data
    dse.start("eeg", "1f7bec32-1cd7-45e0-97a1-fe5c73cb843a");
    return a.exec();
}
