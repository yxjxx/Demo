//
//  ViewController.m
//  Demo
//
//  Created by yxj on 2023/3/31.
//

#import "ViewController.h"
#import <SDWebImage/SDWebImage.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = UIColor.whiteColor;
    UIImageView *imageV = [[UIImageView alloc] initWithFrame:CGRectMake(100, 100, 200, 200)];
    [self.view addSubview:imageV];
    NSURL *url = [NSURL URLWithString:@"https://p.ipic.vip/7cqyoy.jpg"];
    [imageV sd_setImageWithURL:url];
}


@end
