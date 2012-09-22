/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, VKAttributedRoute;

@interface VKAttributedRouteMatch : NSObject
{
    CDStruct_3f2a7a20 _routeCoordinate;
    CDStruct_3f2a7a20 _lastGoodMatchCoordinate;
    CDStruct_2c43369c _coordinateOnRoute;
    unsigned int _stepIndex;
    unsigned int _consecutiveProgressionsOffRoute;
    double _modifiedHorizontalAccuracy;
    double _distanceTraveledOffRoute;
    double _modifiedCourseAccuracy;
    double _matchedCourse;
    double _distanceFromRoute;
    BOOL _isPoorMatch;
    VKAttributedRoute *_route;
    CDStruct_a206f7ef *_road;
    VKAttributedRouteMatch *_projectedFrom;
    NSDate *_timestamp;
    NSDate *_lastTimeInTunnel;
}

@property(retain, nonatomic) NSDate *lastTimeInTunnel; // @synthesize lastTimeInTunnel=_lastTimeInTunnel;
@property(nonatomic) CDStruct_3f2a7a20 lastGoodMatchCoordinate; // @synthesize lastGoodMatchCoordinate=_lastGoodMatchCoordinate;
@property(nonatomic) double distanceTraveledOffRoute; // @synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute;
@property(nonatomic) unsigned int consecutiveProgressionsOffRoute; // @synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL isPoorMatch; // @synthesize isPoorMatch=_isPoorMatch;
@property(retain, nonatomic) VKAttributedRouteMatch *projectedFrom; // @synthesize projectedFrom=_projectedFrom;
@property(nonatomic) double modifiedCourseAccuracy; // @synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy;
@property(nonatomic) double modifiedHorizontalAccuracy; // @synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(nonatomic) CDStruct_a206f7ef *road; // @synthesize road=_road;
@property(readonly, nonatomic) VKAttributedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) double matchedCourse; // @synthesize matchedCourse=_matchedCourse;
@property(readonly, nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_c3b9c2ee coordinateOnRoute; // @synthesize coordinateOnRoute=_coordinateOnRoute;
@property(readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id).cxx_construct;
- (id)description;
@property(readonly, nonatomic) double timeSinceTunnel;
@property(readonly, nonatomic) BOOL routeMatchedToEnd;
@property(readonly, nonatomic) float offset;
@property(readonly, nonatomic) unsigned int pointIndex;
- (BOOL)routeMatchBehind:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2 coordinateOnRoute:(CDStruct_c3b9c2ee)arg3 stepIndex:(unsigned int)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;

@end
