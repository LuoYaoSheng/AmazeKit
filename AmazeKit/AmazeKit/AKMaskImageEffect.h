//
//  AKMaskImageEffect.h
//  AmazeKit
//
//  Created by Jeff Kelley on 8/6/12.
//  Copyright (c) 2012 Detroit Labs. All rights reserved.
//


#import "AKImageEffect.h"


@interface AKMaskImageEffect : AKImageEffect

@property (strong, readonly) UIImage	*maskImage;

- (id)initWithAlpha:(CGFloat)alpha
		  blendMode:(CGBlendMode)blendMode
		  maskImage:(UIImage *)maskImage;

@end
