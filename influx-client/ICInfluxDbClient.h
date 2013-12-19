//
//  ICInfluxDbClient.h
//  influx-client
//
//  Created by Courtf on 12/18/13.
//  Copyright (c) 2013 ESRI. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AFHTTPRequestOperation;

@interface ICInfluxDbClient : NSObject
- (id)init __attribute__((unavailable("init is unavailable, use initWithHost:port:user:pass:dbName:")));
- (id)initWithHost:(NSString *)host port:(int)port user:(NSString *)user pass:(NSString *)pass dbName:(NSString *)dbName;
- (void) writePoints:(NSMutableArray *)points toSeries:(NSString *)seriesName withColumns:(NSMutableArray *)columns onSuccess:(void (^)(NSMutableData *response))success onFailure:(void (^)(NSError *error))failure;
@end
