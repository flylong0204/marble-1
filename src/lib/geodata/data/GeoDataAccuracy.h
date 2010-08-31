//
// This file is part of the Marble Desktop Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2009      Eckhart Wörner <ewoerner@kde.org>
// Copyright 2010      Bastian Holst <bastianholst@gmx.de>
//

#ifndef MARBLE_GEODATAACCURACY_H
#define MARBLE_GEODATAACCURACY_H

#include <QtCore/QObject>



namespace Marble
{

class GeoDataAccuracy
{
 public:
    /**
     * @brief Approximate descriptive accuracy.
     */
    enum Level {
        none = 0,
        Country,
        Region,
        Locality,
        PostalCode,
        Street,
        Detailed
    } level;

    /**
     * @brief Horizontal accuracy in meters.
     */
    qreal horizontal;

    /**
     * @brief Vertical accuracy in meters.
     */
    qreal vertical;

    GeoDataAccuracy() {
        level = none;
        horizontal = 0;
        vertical = 0;
    }
};

}



#endif
