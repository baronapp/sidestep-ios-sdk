//
//  APIManager+ObjcBridge.h
//  Sidestep
//
//  Created by Dmitry Korotchenkov on 21/04/16.
//  Copyright © 2016 Sidestep Technologies Inc. All rights reserved.
//

#ifndef APIManager_ObjcBridge_h
#define APIManager_ObjcBridge_h


#endif /* APIManager_ObjcBridge_h */

#import <CoreData/CoreData.h>
@class Error;

typedef void (^SuccessObjcBlock)(NSArray<NSManagedObject *> * _Nullable objects);
typedef void (^FailureObjcBlock)(NSHTTPURLResponse * _Nullable response, Error * _Nullable error);