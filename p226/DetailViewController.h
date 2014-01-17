//
//  DetailViewController.h
//  p226
//
//  Created by SDT-1 on 2014. 1. 17..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (weak,nonatomic)NSString*urlStr;
@property (weak, nonatomic) IBOutlet UIWebView *webview;

@end
