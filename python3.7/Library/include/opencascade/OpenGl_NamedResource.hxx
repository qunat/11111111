// Created on: 2011-03-18
// Created by: Anton POLETAEV
// Copyright (c) 2011-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _OpenGl_NamedResource_HeaderFile
#define _OpenGl_NamedResource_HeaderFile

#include <OpenGl_Resource.hxx>
#include <TCollection_AsciiString.hxx>

//! Named resource object.
class OpenGl_NamedResource : public OpenGl_Resource
{
  DEFINE_STANDARD_RTTIEXT(OpenGl_NamedResource, OpenGl_Resource)
public:

  //! Empty constructor
  OpenGl_NamedResource (const TCollection_AsciiString& theId)
  : myResourceId (theId) {}

  //! Return resource name.
  const TCollection_AsciiString& ResourceId() const { return myResourceId; }

protected:

  TCollection_AsciiString myResourceId; //!< resource name

};

#endif // _OpenGl_NamedResource_HeaderFile
