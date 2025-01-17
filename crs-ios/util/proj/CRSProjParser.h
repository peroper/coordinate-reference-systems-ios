//
//  CRSProjParser.h
//  crs-ios
//
//  Created by Brian Osborn on 9/2/21.
//  Copyright © 2021 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRSProjParams.h"
#import "CRSObject.h"
#import "CRSGeoCoordinateReferenceSystem.h"
#import "CRSProjectedCoordinateReferenceSystem.h"
#import "CRSCompoundCoordinateReferenceSystem.h"

/**
 * CRS to proj4 parser
 */
@interface CRSProjParser : NSObject

/**
 * Parse crs well-known text into proj4 params
 *
 * @param wkt
 *            crs well-known text
 * @return params
 */
+(CRSProjParams *) paramsFromText: (NSString *) wkt;

/**
 * Parse crs well-known text into proj4 params text
 *
 * @param wkt
 *            crs well-known text
 * @return params text
 */
+(NSString *) paramsTextFromText: (NSString *) wkt;

/**
 * Convert a CRS object into proj4 params
 *
 * @param crs
 *            CRS object
 * @return params
 */
+(CRSProjParams *) paramsFromCRS: (CRSObject *) crs;

/**
 * Convert a CRS object into proj4 params text
 *
 * @param crs
 *            CRS object
 * @return params text
 */
+(NSString *) paramsTextFromCRS: (CRSObject *) crs;

/**
 * Convert a geodetic or geographic crs into proj4 params
 *
 * @param geo
 *            geodetic or geographic crs
 * @return params
 */
+(CRSProjParams *) paramsFromGeo: (CRSGeoCoordinateReferenceSystem *) geo;

/**
 * Convert a geodetic or geographic crs into proj4 params text
 *
 * @param geo
 *            geodetic or geographic crs
 * @return params text
 */
+(NSString *) paramsTextFromGeo: (CRSGeoCoordinateReferenceSystem *) geo;

/**
 * Convert a projected crs into proj4 params
 *
 * @param projected
 *            projected crs
 * @return params
 */
+(CRSProjParams *) paramsFromProjected: (CRSProjectedCoordinateReferenceSystem *) projected;

/**
 * Convert a projected crs into proj4 params text
 *
 * @param projected
 *            projected crs
 * @return params text
 */
+(NSString *) paramsTextFromProjected: (CRSProjectedCoordinateReferenceSystem *) projected;

/**
 * Convert a compound crs into proj4 params
 *
 * @param compound
 *            compound crs
 * @return params
 */
+(CRSProjParams *) paramsFromCompound: (CRSCompoundCoordinateReferenceSystem *) compound;

/**
 * Convert a compound crs into proj4 params text
 *
 * @param compound
 *            compound crs
 * @return params text
 */
+(NSString *) paramsTextFromCompound: (CRSCompoundCoordinateReferenceSystem *) compound;

@end
