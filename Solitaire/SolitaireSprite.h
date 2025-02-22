//
//  SolitaireSprite.h
//  Solitaire
//
//  Created by Daniel Fontaine on 8/3/08.
//  Copyright (C) 2008 Daniel Fontaine
// 
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SolitaireView;

@interface SolitaireSprite : CALayer {
    __weak SolitaireView* view;
    BOOL selected;
}

@property(weak) SolitaireView* view;
@property(readwrite) BOOL selected;

-(instancetype) init NS_DESIGNATED_INITIALIZER;
-(void) drawSprite;
-(void) spriteClicked: (NSUInteger)clickCount;
-(void) onAddedToView: (SolitaireView*)gameView;

@end

NS_ASSUME_NONNULL_END
