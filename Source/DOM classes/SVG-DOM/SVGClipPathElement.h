/**
http://www.w3.org/TR/SVG/masking.html#InterfaceSVGClipPathElement
 
 interface SVGClipPathElement : SVGElement,
 SVGTests,
 SVGLangSpace,
 SVGExternalResourcesRequired,
 SVGStylable,
 SVGTransformable,
 SVGUnitTypes {
 */

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

#import "SVGElement.h"
#import "SVGElement_ForParser.h"

#import "ConverterSVGToCALayer.h"
#import "SVGTransformable.h"
#import "SVGUnitTypes.h"


// Does NOT implement ConverterSVGToCALayer because <clipPath> elements are never rendered directly; they're only referenced via clip-path attributes in other elements
@interface SVGClipPathElement : SVGElement <SVGTransformable, SVGStylable>

@property(nonatomic, readonly) SVG_UNIT_TYPE clipPathUnits;

- (CALayer *) newLayer;
- (void)layoutLayer:(CALayer *)layer toMaskLayer:(CALayer *)maskThis;

@end
