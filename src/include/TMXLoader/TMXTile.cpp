//
//  TMXTile.cpp
//  TMXLoader
//
//  Created by Marty on 06/09/2015.
//  Copyright (c) 2015 - 2020 Martin Grant. All rights reserved.
//  Available under MIT license. See License.txt for more information.
//
//  Uses RapidXML for file parsing.
//  Copyright (c) 2006, 2007 Marcin Kalicinski
//  http://rapidxml.sourceforge.net/
//  See /RapidXML/License.txt for more information.
//
//  www.midnightpacific.com
//  contact@midnightpacific.com
//  @_martingrant
//  http://github.com/martingrant/tmxloader
//

#include <iostream>
#include "TMXTile.h"

TMXTile::TMXTile(unsigned TileID, std::unordered_map<std::string, std::string> const &propertiesMap)
    : m_tileID{id_}, m_propertiesMap{propertiesMap} {}

TMXTile::~TMXTile() noexcept
{
    m_propertiesMap.clear();
    std::unordered_map<std::string, std::string>{}.swap(m_propertiesMap);
}

unsigned TMXTile::getTileID() const noexcept { return m_tileID; }

std::string TMXTile::getProperty(std::string const &propertyName) noexcept
{
    if (auto it{m_propertiesMap.find(propertyName)}; it != m_propertiesMap.end())
        return it->second;
    return nullptr;
}