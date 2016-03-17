//
// File: Utils.h
// Project: Sidestep
//
// Created by dkorneev on 2/4/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

void setRoundedCorners(UIRectCorner corner, UIView *pView);
void setRoundedCornersWithCornerRadius(UIRectCorner corner, UIView *pView, CGFloat cornerRadius, BOOL border, CGFloat borderWidth, CGColorRef color);
NSString *transformDateToString(NSDate *date);
NSDictionary *extractParamsFromUrl(NSURL *url);

#define CALL_SELF_DELEGATE_OPTIONAL_METHOD_WITH_PARAM(methodName, param) \
if (self.delegate && [self.delegate respondsToSelector:@selector(methodName:)]) { \
    [self.delegate methodName:param]; \
}

#define CALL_SELF_DELEGATE_OPTIONAL_METHOD(methodName) \
if (self.delegate && [self.delegate respondsToSelector:@selector(methodName)]) { \
    [self.delegate methodName]; \
}

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)