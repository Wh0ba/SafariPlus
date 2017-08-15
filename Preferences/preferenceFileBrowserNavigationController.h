//  fileBrowserNavigationController.h
// (c) 2017 opa334

#import "preferenceFileBrowserTableViewController.h"

@interface preferenceFileBrowserNavigationController : UINavigationController {}
- (id)newTableViewControllerWithPath:(NSURL*)path;
- (void)reloadAllTableViews;
- (BOOL)shouldLoadPreviousPathElements;
- (NSURL*)rootPath;
@end
