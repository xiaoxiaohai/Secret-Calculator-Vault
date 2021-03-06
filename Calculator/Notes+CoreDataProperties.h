//
//  Notes+CoreDataProperties.h
//  Calculator
//
//  Created by Corey Allen Pett on 10/5/15.
//  Copyright © 2015 Corey Allen Pett. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Notes.h"

NS_ASSUME_NONNULL_BEGIN

@interface Notes (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *notes;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSDate *date;

@end

NS_ASSUME_NONNULL_END
