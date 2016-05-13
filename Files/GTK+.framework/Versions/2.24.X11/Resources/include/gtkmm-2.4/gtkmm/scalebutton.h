// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_SCALEBUTTON_H
#define _GTKMM_SCALEBUTTON_H

#include <gtkmmconfig.h>


#include <glibmm.h>

/*
 * Copyright (C) 2007 The gtkmm Development Team
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

 
#include <gtkmm/button.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkScaleButton GtkScaleButton;
typedef struct _GtkScaleButtonClass GtkScaleButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ScaleButton_Class; } // namespace Gtk
namespace Gtk
{

//TODO: Inherit/Implement Orientation when we can break ABI.

/** A button which pops up a scale widget.
 *
 * This kind of widget is commonly used for volume controls in multimedia
 * applications, and there is a Gtk::VolumeButton subclass that is tailored
 * for this use case.
 *
 * @ingroup Widgets
 * @newin{2,12}
 */

class ScaleButton : public Button
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ScaleButton CppObjectType;
  typedef ScaleButton_Class CppClassType;
  typedef GtkScaleButton BaseObjectType;
  typedef GtkScaleButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ScaleButton();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ScaleButton_Class;
  static CppClassType scalebutton_class_;

  // noncopyable
  ScaleButton(const ScaleButton&);
  ScaleButton& operator=(const ScaleButton&);

protected:
  explicit ScaleButton(const Glib::ConstructParams& construct_params);
  explicit ScaleButton(GtkScaleButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkScaleButton*       gobj()       { return reinterpret_cast<GtkScaleButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkScaleButton* gobj() const { return reinterpret_cast<GtkScaleButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_value_changed(double value);


private:


public:
    explicit ScaleButton(IconSize size, double min, double max, double step, const Glib::StringArrayHandle& icons);


  /** Sets the icons to be used by the scale button.
   * For details, see the Gtk::ScaleButton:icons property.
   * 
   * @newin{2,12}
   * @param icons A <tt>0</tt>-terminated array of icon names.
   */
  void set_icons(const Glib::StringArrayHandle& icons);
  
  /** Gets the current value of the scale button.
   * 
   * @newin{2,12}
   * @return Current value of the scale button.
   */
  double get_value() const;
  
  /** Sets the current value of the scale; if the value is outside
   * the minimum or maximum range values, it will be clamped to fit
   * inside them. The scale button emits the Gtk::ScaleButton::value-changed
   * signal if the value changes.
   * 
   * @newin{2,12}
   * @param value New value of the scale button.
   */
  void set_value(double value);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the Gtk::Adjustment associated with the Gtk::ScaleButton's scale.
   * See Gtk::Range::get_adjustment() for details.
   * 
   * @newin{2,12}
   * @return The adjustment associated with the scale.
   */
  Gtk::Adjustment* get_adjustment();
#endif // GTKMM_DISABLE_DEPRECATED


  //The return type should bge const. This has been fixed in the gtkmm-3maybe branch.
  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the Gtk::Adjustment associated with the Gtk::ScaleButton's scale.
   * See Gtk::Range::get_adjustment() for details.
   * 
   * @newin{2,12}
   * @return The adjustment associated with the scale.
   */
  Gtk::Adjustment* get_adjustment() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the Gtk::Adjustment to be used as a model
   * for the Gtk::ScaleButton's scale.
   * See Gtk::Range::set_adjustment() for details.
   * 
   * @newin{2,12}
   * @param adjustment A Gtk::Adjustment.
   */
  void set_adjustment(Gtk::Adjustment& adjustment);

  // TODO: Should be deprecated, but we have no replacement yet, until we break ABI.
  
  /** Gets the orientation of the Gtk::ScaleButton's popup window.
   * 
   * @newin{2,14}
   * 
   * Deprecated: 2.16: Use Gtk::Orientable::get_orientation() instead.
   * @return The Gtk::ScaleButton's orientation.
   */
  Orientation get_orientation();
  
  /** Sets the orientation of the Gtk::ScaleButton's popup window.
   * 
   * @newin{2,14}
   * 
   * Deprecated: 2.16: Use Gtk::Orientable::set_orientation() instead.
   * @param orientation The new orientation.
   */
  void set_orientation(Orientation orientation);

  
  /** Retrieves the plus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The plus button of the Gtk::ScaleButton.
   */
  Widget* get_plus_button();
  
  /** Retrieves the plus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The plus button of the Gtk::ScaleButton.
   */
  const Widget* get_plus_button() const;
  
  /** Retrieves the minus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The minus button of the Gtk::ScaleButton.
   */
  Widget* get_minus_button();
  
  /** Retrieves the minus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The minus button of the Gtk::ScaleButton.
   */
  const Widget* get_minus_button() const;
  
  /** Retrieves the popup of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The popup of the Gtk::ScaleButton.
   */
  Gtk::Widget* get_popup();
  
  /** Retrieves the popup of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * @return The popup of the Gtk::ScaleButton.
   */
  const Gtk::Widget* get_popup() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%value_changed(double value)</tt>
   */

  Glib::SignalProxy1< void,double > signal_value_changed();


  //Ignore key-binding signals:
  
  
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The value of the scale.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_value() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The value of the scale.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_value() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The icon size.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<IconSize> property_size() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The icon size.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<IconSize> property_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that contains the current value of this scale button object.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Adjustment*> property_adjustment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that contains the current value of this scale button object.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Adjustment*> property_adjustment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** List of icon names.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::StringArrayHandle> property_icons() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** List of icon names.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::StringArrayHandle> property_icons() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The orientation of the orientable.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Orientation> property_orientation() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The orientation of the orientable.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Orientation> property_orientation() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ScaleButton
   */
  Gtk::ScaleButton* wrap(GtkScaleButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SCALEBUTTON_H */
