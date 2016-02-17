//
//  LVResizableNavigationController.h
//  Level Money
//
//  Created by Todd Anderson on 3/11/15.
//
//  ========================================================================
//  Copyright (c) 2015 Level Money Financial, Inc.
//  ------------------------------------------------------------------------
//  All rights reserved. This program and the accompanying materials
//  are made available under the terms of the Eclipse Public License v1.0
//
//      The Eclipse Public License is available at
//      http://www.eclipse.org/legal/epl-v10.html
//
//
//  You may elect to redistribute this code under this license.
//  ========================================================================
//

#import <UIKit/UIKit.h>

@interface LVResizableNavigationController : UINavigationController

- (void)resetNavigationDelegate;

/**
 * Use this method in order to resize the navigation bar if needed 
 * @brief Will call the delegates once again 
 * @param viewController: VC that should have the nav bar resized
 */
- (void)updateNavigationBarForViewController:(UIViewController * _Nonnull)viewController;

@end

@protocol LVResizableNavigationBarController

@optional
- (UIView * _Nonnull)resizableNavigationBarControllerSubHeaderView;
- (CGFloat)resizableNavigationBarControllerNavigationBarHeight;
- (UIColor * _Nonnull)resizableNavigationBarControllerNavigationBarTintColor;

@end
