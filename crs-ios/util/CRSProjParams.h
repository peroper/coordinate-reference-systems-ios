//
//  CRSProjParams.h
//  crs-ios
//
//  Created by Brian Osborn on 9/2/21.
//  Copyright © 2021 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * proj4 params
 */
@interface CRSProjParams : NSObject

@property (nonatomic, strong) NSString *proj;
@property (nonatomic, strong) NSString *lat_1;
@property (nonatomic, strong) NSString *lat_2;
@property (nonatomic, strong) NSString *lat_0;
@property (nonatomic, strong) NSString *lat_ts;
@property (nonatomic, strong) NSString *lon_0;
@property (nonatomic, strong) NSString *lonc;
@property (nonatomic, strong) NSString *alpha;
@property (nonatomic, strong) NSString *k_0;
@property (nonatomic, strong) NSString *x_0;
@property (nonatomic, strong) NSString *y_0;
@property (nonatomic, strong) NSString *axis;
@property (nonatomic, strong) NSString *datum;
@property (nonatomic) BOOL no_uoff;
@property (nonatomic, strong) NSString *gamma;
@property (nonatomic, strong) NSString *zone;
@property (nonatomic, strong) NSString *a;
@property (nonatomic, strong) NSString *b;
@property (nonatomic) BOOL south;
@property (nonatomic, strong) NSString *ellps;
@property (nonatomic, strong) NSString *towgs84;
@property (nonatomic, strong) NSString *param1;
@property (nonatomic, strong) NSString *param2;
@property (nonatomic, strong) NSString *param3;
@property (nonatomic, strong) NSString *param4;
@property (nonatomic, strong) NSString *param5;
@property (nonatomic, strong) NSString *param6;
@property (nonatomic, strong) NSString *param7;
@property (nonatomic, strong) NSString *pm;
@property (nonatomic, strong) NSString *units;
@property (nonatomic) BOOL no_defs;

/**
 *  Create
 *
 *  @return new params
 */
+(CRSProjParams *) params;

/**
 *  Initialize
 *
 *  @return new params
 */
-(instancetype) init;

@end
