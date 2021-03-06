/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

//
//  MainViewController.h
//  Portal
//
//  Created by Allen Hsu on 7/3/13.
//  Copyright Allen Hsu 2013. All rights reserved.
//

#ifdef CORDOVA_FRAMEWORK
    #import <Cordova/CDVViewController.h>
#else
    #import "CDVViewController.h"
#endif

@interface HtmlViewController : CDVViewController
{
    UIView *storeTitleView;
    UIBarButtonItem *storeRightItem;
    UIBarButtonItem *storeLeftItem;
    NSDictionary *rightItemDict;
    NSDictionary *leftItemDict;
    BOOL firstTime;
}

@property(retain, nonatomic) UIBarButtonItem *storeLeftItem;
@property(retain, nonatomic) UIBarButtonItem *storeRightItem;
@property(retain, nonatomic) NSDictionary *rightItemDict;
@property(retain, nonatomic) NSDictionary *leftItemDict;

- (void)popWindow:(NSMutableArray*)arguments;
- (void)popToRoot:(NSMutableArray*)arguments;
- (void)pushWindow:(NSMutableArray*)arguments;

@end
