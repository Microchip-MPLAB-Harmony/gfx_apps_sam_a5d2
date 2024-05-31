/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.02
* Profile  : Win32
* Platform : Windows.Software.RGBA8888
*
*******************************************************************************/

#ifndef Graphics_H
#define Graphics_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_GraphicsArcPath.h"
#include "_GraphicsCanvas.h"
#include "_GraphicsPath.h"

/* The definition Graphics::Edges enumerates the parts of a free scalable frame. 
   It is used to determine, which parts should be drawn. */
typedef XSet GraphicsEdges;

#define GraphicsEdgesLeft                                   0x00000001
#define GraphicsEdgesTop                                    0x00000002
#define GraphicsEdgesRight                                  0x00000004
#define GraphicsEdgesBottom                                 0x00000008
#define GraphicsEdgesInterior                               0x00000010

/* The definition Graphics::FillRule enumerates the possible modes how complex polygons 
   consisting of nested paths are filled. It is used to determine how Views::FillPath 
   should fill the path. */
typedef XEnum GraphicsFillRule;

#define GraphicsFillRuleEvenOdd                             0
#define GraphicsFillRuleNonZero                             1

/* The definition Graphics::PathJoin enumerates the possible modes how the edges 
   of a path are connected when stroking the path with path thickness greater than 
   1 pixel. It is used to determine how Views::StrokePath should raster the path. */
typedef XEnum GraphicsPathJoin;

#define GraphicsPathJoinBevel                               0
#define GraphicsPathJoinMiter                               1
#define GraphicsPathJoinRound                               2

/* The definition Graphics::PathCap enumerates the possible modes how the path caps 
   are displayed when stroking the path with path thickness greater than 1 pixel. 
   It is used to determine how Views::StrokePath should raster the path. */
typedef XEnum GraphicsPathCap;

#define GraphicsPathCapFlat                                 0
#define GraphicsPathCapSquare                               1
#define GraphicsPathCapRound                                2
#define GraphicsPathCapTriangle                             3

/* The definition Graphics::ArcStyle enumerates the possible shapes of an elliptical 
   arc. It is used to determine the mode how Graphics::ArcPath should calculate 
   the path data. */
typedef XEnum GraphicsArcStyle;

#define GraphicsArcStyleArc                                 0
#define GraphicsArcStyleSegment                             1
#define GraphicsArcStylePie                                 2
#define GraphicsArcStylePieRounded                          3
#define GraphicsArcStylePieRoundedStart                     4
#define GraphicsArcStylePieRoundedEnd                       5

#ifdef __cplusplus
  }
#endif

#endif /* Graphics_H */

/* Embedded Wizard */
