//
//  SolitairePreferencesController.h
//  Solitaire
//
//  Created by Daniel Fontaine on 5/30/09.
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


@interface SolitairePreferencesController : NSObject {
    IBOutlet __weak NSPopUpButton*  _backgroundPopup;
    
    NSArray *cardBackFiles_;
}

@property(weak) IBOutlet NSPanel* preferencesPanel;
@property(weak) IBOutlet NSColorWell* colorWell;

-(void) data2Controls;
-(IBAction) onOkayClicked: (id)sender;
-(IBAction) onCancelClicked: (id)sender;
-(IBAction) onDefaultClicked: (id)sender;

-(NSColor*)     selectedColor;
-(NSString*)    selectedCardBack;

@end
