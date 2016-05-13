// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_IMAGEMENUITEM_H
#define _GTKMM_IMAGEMENUITEM_H


#include <glibmm.h>

/* $Id: imagemenuitem.hg,v 1.3 2006/04/12 11:11:25 murrayc Exp $ */

/* checkmenuitem.h
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

#include <gtkmm/menuitem.h>
#include <gtkmm/stockid.h>
#include <gtkmm/accelgroup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkImageMenuItem GtkImageMenuItem;
typedef struct _GtkImageMenuItemClass GtkImageMenuItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ImageMenuItem_Class; } // namespace Gtk
namespace Gtk
{

/** A menu item with an icon.
 * 
 * A GtkImageMenuItem is a menu item which has an icon next to the text label. Note that the
 * user can disable display of menu icons, so make sure to still fill in the text label.
 *
 * @ingroup Menus
 * @ingroup Widgets                                                                                                                                                S
 */

class ImageMenuItem : public MenuItem
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ImageMenuItem CppObjectType;
  typedef ImageMenuItem_Class CppClassType;
  typedef GtkImageMenuItem BaseObjectType;
  typedef GtkImageMenuItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ImageMenuItem();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ImageMenuItem_Class;
  static CppClassType imagemenuitem_class_;

  // noncopyable
  ImageMenuItem(const ImageMenuItem&);
  ImageMenuItem& operator=(const ImageMenuItem&);

protected:
  explicit ImageMenuItem(const Glib::ConstructParams& construct_params);
  explicit ImageMenuItem(GtkImageMenuItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkImageMenuItem*       gobj()       { return reinterpret_cast<GtkImageMenuItem*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkImageMenuItem* gobj() const { return reinterpret_cast<GtkImageMenuItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  ImageMenuItem();
  explicit ImageMenuItem(Widget& image, 
                         const Glib::ustring& label, bool mnemonic = false);
  explicit ImageMenuItem(const Glib::ustring& label, bool mnemonic = false);
  explicit ImageMenuItem(const StockID& id);  
  
  
  /** If <tt>true</tt>, the menu item will ignore the Gtk::Settings:gtk-menu-images 
   * setting and always show the image, if available.
   * 
   * Use this property if the menuitem would be useless or hard to use
   * without the image. 
   * 
   * @newin{2,16}
   * @param always_show <tt>true</tt> if the menuitem should always show the image.
   */
  void set_always_show_image(bool always_show =  true);
  
  /** Returns whether the menu item will ignore the Gtk::Settings:gtk-menu-images
   * setting and always show the image, if available.
   * 
   * @newin{2,16}
   * @return <tt>true</tt> if the menu item will always show the image.
   */
  bool get_always_show_image() const;

  
  /** Sets the image of @a image_menu_item to the given widget.
   * Note that it depends on the show-menu-images setting whether
   * the image will be displayed or not.
   * @param image A widget to set as the image for the menu item.
   */
  void set_image(Widget& image);
  
  /** Gets the widget that is currently set as the image of @a image_menu_item.
   * See set_image().
   * @return The widget set as image of @a image_menu_item.
   */
  Widget* get_image();
  
  /** Gets the widget that is currently set as the image of @a image_menu_item.
   * See set_image().
   * @return The widget set as image of @a image_menu_item.
   */
  const Widget* get_image() const;

  
  /** If <tt>true</tt>, the label set in the menuitem is used as a
   * stock id to select the stock item for the item.
   * 
   * @newin{2,16}
   * @param use_stock <tt>true</tt> if the menuitem should use a stock item.
   */
  void set_use_stock(bool use_stock =  true);
  
  /** Checks whether the label set in the menuitem is used as a
   * stock id to select the stock item for the item.
   * 
   * @newin{2,16}
   * @return <tt>true</tt> if the label set in the menuitem is used as a
   * stock id to select the stock item for the item.
   */
  bool get_use_stock() const;
  
  /** Specifies an @a accel_group to add the menu items accelerator to
   * (this only applies to stock items so a stock item must already
   * be set, make sure to call set_use_stock()
   * and Gtk::MenuItem::set_label() with a valid stock item first).
   * 
   * If you want this menu item to have changeable accelerators then
   * you shouldnt need this (see new_from_stock()).
   * 
   * @newin{2,16}
   * @param accel_group The Gtk::AccelGroup.
   */
  void set_accel_group(const Glib::RefPtr<AccelGroup>& accel_group);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Child widget to appear next to the menu text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Widget*> property_image() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Child widget to appear next to the menu text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Widget*> property_image() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use the label text to create a stock menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_use_stock() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use the label text to create a stock menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_use_stock() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The Accel Group to use for stock accelerator keys.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::RefPtr<AccelGroup> > property_accel_group() ;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the image will always be shown.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_always_show_image() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the image will always be shown.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_always_show_image() const;
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
   * @relates Gtk::ImageMenuItem
   */
  Gtk::ImageMenuItem* wrap(GtkImageMenuItem* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_IMAGEMENUITEM_H */

