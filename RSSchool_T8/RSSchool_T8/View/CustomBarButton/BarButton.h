//
//  CustomBarButton.h
//  RSSchool_T8
//
//  Created by Viktor Krasilnikov on 7/17/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BarButton : UIBarButtonItem
@property (weak, nonatomic) NSDictionary *barButtonFont;


- (void)configureFont;

@end

NS_ASSUME_NONNULL_END
