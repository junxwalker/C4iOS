// Copyright © 2012 Travis Kirton
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions: The above copyright
// notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#import <QuartzCore/QuartzCore.h>
#import "C4LayerAnimation.h"

/** This document describes the basic C4Layer, a subclass of CALayer which conforms to the C4LayerAnimation protocol.
 
 It is rare that you will need to directly use C4Layers when working with C4. By conforming to the C4LayerAnimation protocol, this class makes it possible to animate basic properties of the layer such as color.
 
 *To understand the animatable properties of a C4Layer please see the documentation for the [C4LayerAnimation](C4LayerAnimation) protocol.*
 
 @warning *Note:* At the time of this documentation, the C4Layer class is only used as the backing layer for a C4Window. This provides access to changing the window's background color, and other simple things.
 */

@interface C4Layer : CALayer <C4LayerAnimation> {
}

/**Specifies the perspective distance for x and y axis rotations.
 
 Technically, this will set the perspective transform component of the receiver's transform to 1/value (i.e. the new value that is set). It will perform the following action:
 
 `CATransform3D t = self.transform;
 if(perspectiveDistance != 0.0f) t.m34 = 1/self.perspectiveDistance;
 else t.m34 = 0.0f;
 self.transform = t;`
 
 Defaults to 0.
 */
@property (readwrite, nonatomic) CGFloat perspectiveDistance;

/**The rotation angle for the receiver's Z-axis.
 
 The Z-axis is the one that comes out of the screen, it is orthogonal to the device.
 */
@property (readwrite, nonatomic) CGFloat rotationAngle;

/**The rotation angle for the receiver's X-axis
 
 The X-axis is the one parallel to the left-hand / right-hand sides of the device.
 */
@property (readwrite, nonatomic) CGFloat rotationAngleX;

/**The rotation angle for the receiver's Y-axis
 
 The Y-axis is the one parallel to the top / bottom edges of the device.
 */
@property (readwrite, nonatomic) CGFloat rotationAngleY;

@end