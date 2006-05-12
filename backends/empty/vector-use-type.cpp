//
// Copyright (C) 2004-2006 Maciej Sobczak, Stephen Hutton
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#include "soci.h"
#include "soci-empty.h"

#ifdef _MSC_VER
#pragma warning(disable:4355)
#endif

using namespace SOCI;
using namespace SOCI::details;


void EmptyVectorUseTypeBackEnd::bindByPos(int & /* position */,
        void * /* data */, eExchangeType /* type */)
{
    // ...
}

void EmptyVectorUseTypeBackEnd::bindByName(
    std::string const & /* name */, void * /* data */,
    eExchangeType /* type */)
{
    // ...
}

void EmptyVectorUseTypeBackEnd::preUse(eIndicator const * /* ind */)
{
    // ...
}

std::size_t EmptyVectorUseTypeBackEnd::size()
{
    // ...
    return 1;
}

void EmptyVectorUseTypeBackEnd::cleanUp()
{
    // ...
}
