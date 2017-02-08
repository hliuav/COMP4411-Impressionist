//
// SharpenBrush.h
//
// The header file for Point Brush. 
//

#ifndef SHARPENBRUSH_H
#define SHARPENBRUSH_H

#include "ImpBrush.h"

class SharpenBrush : public ImpBrush
{
public:
	SharpenBrush( ImpressionistDoc* pDoc = NULL, char* name = NULL );

	void BrushBegin( const Point source, const Point target );
	void BrushMove( const Point source, const Point target );
	void BrushEnd( const Point source, const Point target );
	void SetFilterColor( const Point source );
	char* BrushName( void );
};

#endif