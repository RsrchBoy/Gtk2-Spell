/*
 * 
 * Copyright (C) 2003 by the gtk2-perl team (see the file AUTHORS for the full
 * list)
 * 
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Library General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
 * License for more details.
 * 
 * You should have received a copy of the GNU Library General Public License
 * along with this library; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307  USA.
 * 
 * $Header: /cvsroot/gtk2-perl/gtk2-perl-xs/GtkSpell/gtk2spellperl.h,v 1.2 2003/09/22 00:45:59 rwmcfa1 Exp $
 */

#ifndef _GTK2PERL_SPELL_H_
#define _GTK2PERL_SPELL_H_

#include <gtk2perl.h>

#include <gtkspell/gtkspell.h>

SV * newSVGtkSpell (GtkSpell * spell);
GtkSpell * SvGtkSpell (SV * sv);

#endif /* _GTK2PERL_SPELL_H_ */
