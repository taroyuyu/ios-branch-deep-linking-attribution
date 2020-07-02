//
//  BranchCSSearchableItemAttributeSet.h
//  Branch-TestBed
//
//  Created by Derrick Staten on 9/8/15.
//  Copyright © 2015 Branch Metrics. All rights reserved.
//

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

#if __has_feature(modules)
@import CoreSpotlight;
@import MobileCoreServices;
#else
#import <CoreSpotlight/CoreSpotlight.h>
#import <MobileCoreServices/MobileCoreServices.h>
#endif

@interface BranchCSSearchableItemAttributeSet : CSSearchableItemAttributeSet

- (instancetype)init;

#ifdef __IPHONE_14_0
- (instancetype)initWithContentType:(nonnull UTType *)contentType NS_AVAILABLE(10_16, 14_0);
#endif

- (instancetype)initWithItemContentType:(nonnull NSString *)type;

- (void)indexWithCallback:(void (^) (NSString * url, NSString * spotlightIdentifier, NSError * error))callback;

@property (nonatomic, strong) NSDictionary *params;
@property (nonatomic, strong) NSSet *keywords;
@property (nonatomic) BOOL publiclyIndexable; //!< Defaults to YES

@end
