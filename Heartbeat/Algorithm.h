//
//  Algorithm.h
//  Heartbeat
//
//  Created by Or Maayan on 9/13/13.
//  Copyright (c) 2013 michael leybovich. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Algorithm : NSObject
//Properties
@property (nonatomic , readonly) NSUInteger framesCounter;
@property (nonatomic , readwrite) CGFloat frameRate;// the frame rate of the video
@property (nonatomic , readwrite) NSUInteger windowSize;// size in frames
@property (nonatomic , readwrite) NSUInteger calibrationDuration;// duration in frames
@property (nonatomic , readwrite) NSUInteger windowSizeForAverageCalculation;// size must be <= calibrationDuration

#warning should we care of releasing this array?
@property (nonatomic , readwrite) double ** buttterworthValues;

//
- (CGFloat)getColorValueFrom:(UIColor *)color;

// outside API
@property (nonatomic , readonly) BOOL isCalibrationOver;
@property (nonatomic , readonly) BOOL isFinalResultDetermined;
@property (nonatomic , readonly) CGFloat bpmLatestResult;

@property (nonatomic, readonly) BOOL isPeakInLastFrame;

// the method to be called on each frame
- (void)newFrameDetectedWithAverageColor:(UIColor *)color;

@end
