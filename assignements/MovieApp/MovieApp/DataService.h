//
//  DataService.h
//  MovieApp
//
//  Created by Ernest Esiabia on 24/07/2016.
//  Copyright © 2016 strathmore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"

@interface DataService : NSObject
{
    AppDelegate *delegate;
    NSURLConnection *connection;
}

@property(nonatomic,retain) AppDelegate *delegate;
-(NSMutableArray *) selectFromJson:(NSString *)searchParam;
+(NSString *) baseAPIUrl;
-(NSString *) makeApiCall:(NSString *)parameter;
- (NSData*) converResponseToDataStream: (NSString *) response;


@end
