// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_MISC_H
#define _GTKMM_MISC_H


#include <glibmm.h>

/* $Id: misc.hg,v 1.1 2003/01/21 13:40:31 murrayc Exp $ */

/* misc.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMisc GtkMisc;
typedef struct _GtkMiscClass GtkMiscClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Misc_Class; } // namespace Gtk
namespace Gtk
{

/** A base class for widgets with alignments and padding.
 *
 * This is an abstract for a set of utility widgets
 * that lack a physical window.  They do have
 * alignment and padding within their defined space.
 *
 * Without a window, widgets of this type cannot capture events.
 * To capture events place in Gtk::EventBox.
 *
 */

class Misc : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Misc CppObjectType;
  typedef Misc_Class CppClassType;
  typedef GtkMisc BaseObjectType;
  typedef GtkMiscClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Misc();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Misc_Class;
  static CppClassType misc_class_;

  // noncopyable
  Misc(const Misc&);
  Misc& operator=(const Misc&);

protected:
  explicit Misc(const Glib::ConstructParams& construct_params);
  explicit Misc(GtkMisc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMisc*       gobj()       { return reinterpret_cast<GtkMisc*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMisc* gobj() const { return reinterpret_cast<GtkMisc*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

protected:
  Misc();
public:

  
  void set_alignment(float xalign =  0.0, float yalign =  0.5);
  
  void set_alignment(AlignmentEnum xalign =  Gtk::ALIGN_START, AlignmentEnum yalign =  Gtk::ALIGN_CENTER);

  
  /** Gets the X and Y alignment of the widget within its allocation. 
   * See set_alignment().
   * @param xalign Location to store X alignment of @a misc, or <tt>0</tt>.
   * @param yalign Location to store Y alignment of @a misc, or <tt>0</tt>.
   */
  void get_alignment(float& xalign, float& yalign) const;

  
  void set_padding(int xpad, int ypad);
  
  /** Gets the padding in the X and Y directions of the widget. 
   * See set_padding().
   * @param xpad Location to store padding in the X direction, or <tt>0</tt>.
   * @param ypad Location to store padding in the Y direction, or <tt>0</tt>.
   */
  void get_padding(int& xpad, int& ypad) const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal alignment, from 0 (left) to 1 (right). Reversed for RTL layouts.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<float> property_xalign() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal alignment, from 0 (left) to 1 (right). Reversed for RTL layouts.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<float> property_xalign() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical alignment, from 0 (top) to 1 (bottom).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<float> property_yalign() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical alignment, from 0 (top) to 1 (bottom).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<float> property_yalign() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The amount of space to add on the left and right of the widget, in pixels.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_xpad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The amount of space to add on the left and right of the widget, in pixels.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_xpad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The amount of space to add on the top and bottom of the widget, in pixels.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_ypad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The amount of space to add on the top and bottom of the widget, in pixels.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_ypad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Misc
   */
  Gtk::Misc* wrap(GtkMisc* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MISC_H */

