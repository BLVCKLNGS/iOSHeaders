/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBIconGridImage : XXUnknownSuperclass {
	unsigned _numberOfCells;
}
@property(readonly, assign, nonatomic) unsigned numberOfRows;
@property(readonly, assign, nonatomic) unsigned numberOfColumns;
@property(readonly, assign, nonatomic) unsigned numberOfCells;
+(CGSize)sizeForNumberOfRows:(unsigned)rows;
+(CGRect)rectAtIndex:(unsigned)index maxCount:(unsigned)count;
+(CGSize)cellSpacing;
+(CGSize)cellSize;
+(unsigned)numberOfRowsForNumberOfCells:(unsigned)cells;
+(unsigned)numberOfColumns;
+(id)gridImageForNumberOfCells:(unsigned)cells withCellImageProviderBlock:(id)cellImageProviderBlock;
+(id)_gridImageForNumberOfCells:(unsigned)cells withPreviousGridImage:(id)previousGridImage cellImageProviderBlock:(id)block;
-(id)iconImageAtIndex:(unsigned)index;
-(id)gridImageByPatchingWithCellImageProviderBlock:(id)cellImageProviderBlock;
@end

