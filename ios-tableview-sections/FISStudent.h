//
//  FISStudent.h
//  ios-tableview-sections
//
//  Created by Colin Walsh on 6/27/16.
//  Copyright © 2016 The Flatiron School. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISStudent : NSObject

@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSArray* favoriteThings;

- (instancetype) initWithName:(NSString*)name favoriteThings:(NSArray*)favoriteThings;

@end
