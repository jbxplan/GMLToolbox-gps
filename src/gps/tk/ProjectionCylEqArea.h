#pragma once

/

#include "Projection.h"

/

class CProjectionCylEqArea : public CProjection
{
public:

				CProjectionCylEqArea		();
	virtual		~CProjectionCylEqArea		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/

