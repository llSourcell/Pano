//
//  CRViewController.h
//  TestAssetLibrary
//
//  Created by Jason Ravel on 2/4/14.
//

#import <UIKit/UIKit.h>
#import "CRVPanoramaImagePicker.h"

@interface CRViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *selectedImage;

- (IBAction)btnOpenImagePicker:(id)sender;

@end
