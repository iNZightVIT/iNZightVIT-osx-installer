// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSOWNNAME_H
#define _GIOMM_DBUSOWNNAME_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <giomm/dbusconnection.h>


namespace Gio
{

namespace DBus
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 * Flags used in g_bus_own_name().
 * 
 * @newin{2,26}
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%BusNameOwnerFlags operator|(BusNameOwnerFlags, BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags operator&(BusNameOwnerFlags, BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags operator^(BusNameOwnerFlags, BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags operator~(BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags& operator|=(BusNameOwnerFlags&, BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags& operator&=(BusNameOwnerFlags&, BusNameOwnerFlags)</tt><br>
 * <tt>%BusNameOwnerFlags& operator^=(BusNameOwnerFlags&, BusNameOwnerFlags)</tt><br>
 */
enum BusNameOwnerFlags
{
  /** No flags set.
   */
  BUS_NAME_OWNER_FLAGS_NONE = 0x0,
  /** Allow another message bus connection to claim the name.
   */
  BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT = (1<<0),
  /** If another message bus connection owns the name and have
   * specified BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT, then take the name from the other connection.
   */
  BUS_NAME_OWNER_FLAGS_REPLACE = (1<<1)
};

/** @ingroup giommEnums */
inline BusNameOwnerFlags operator|(BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
  { return static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags operator&(BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
  { return static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags operator^(BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
  { return static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags operator~(BusNameOwnerFlags flags)
  { return static_cast<BusNameOwnerFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags& operator|=(BusNameOwnerFlags& lhs, BusNameOwnerFlags rhs)
  { return (lhs = static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags& operator&=(BusNameOwnerFlags& lhs, BusNameOwnerFlags rhs)
  { return (lhs = static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline BusNameOwnerFlags& operator^=(BusNameOwnerFlags& lhs, BusNameOwnerFlags rhs)
  { return (lhs = static_cast<BusNameOwnerFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace DBus

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::DBus::BusNameOwnerFlags> : public Glib::Value_Flags<Gio::DBus::BusNameOwnerFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{

namespace DBus
{


/** For example,
 * void on_bus_acquired(const Glib::RefPtr<Gio::DBus::Connection>& connection,
 * const Glib::ustring& name);
 * @newin{2,28}
 * @ingroup DBus
 */
typedef sigc::slot<void, const Glib::RefPtr<Gio::DBus::Connection>&, Glib::ustring> SlotBusAcquired;

/** For example,
 * void on_name_acquired(const Glib::RefPtr<Gio::DBus::Connection>& connection,
 * const Glib::ustring& name);
 * @ingroup DBus
 */
typedef sigc::slot<void, const Glib::RefPtr<Gio::DBus::Connection>&, Glib::ustring> SlotNameAcquired;

/** For example,
 * void on_name_lost(const Glib::RefPtr<Gio::DBus::Connection>& connection,
 * const Glib::ustring& name);
 * @ingroup DBus
 */
typedef sigc::slot<void, const Glib::RefPtr<Gio::DBus::Connection>&, Glib::ustring> SlotNameLost;

//TODO: See https://bugzilla.gnome.org/show_bug.cgi?id=646427 about the apparent uselessness of SlotNameAcquired.
//TODO: Add example from C API in class docs.
/** Starts acquiring @a name on the bus specified by @a bus_type and calls @a
 * name_acquired_slot and name_@a lost_slot when the name is acquired
 * respectively lost. Slots will be invoked in the thread-default main
 * loop of the thread you are calling this function from.
 *
 * You are guaranteed that one of the @a name_acquired_slot and @a
 * name_lost_slot slots will be invoked after calling this function - there
 * are three possible cases:
 *
 * - @a name_lost_slot with a NULL connection (if a connection to the bus
 * can't be made).
 * - @a bus_acquired_slot then @a name_lost_slot (if the name can't be
 * obtained)
 * - @a bus_acquired_slot then @a name_acquired_slot (if the name was
 * obtained).
 *
 * When you are done owning the name, just call unown_name() with the owner id
 * this function returns.
 *
 * If the name is acquired or lost (for example another application could
 * acquire the name if you allow replacement or the application currently
 * owning the name exits), the slots are also invoked. If the
 * Connection that is used for attempting to own the name closes, then
 * @a name_lost_slot is invoked since it is no longer possible for other
 * processes to access the process.
 *
 * You cannot use own_name() several times for the same name (unless
 * interleaved with calls to unown_name()) - only the first call will work.
 *
 * Another guarantee is that invocations of name_@a acquired_slot and
 * @a name_lost_slot are guaranteed to alternate; that is, if
 * @a name_acquired_slot is invoked then you are guaranteed that the next
 * time one of the slots is invoked, it will be @a name_lost_slot. The
 * reverse is also true.
 *
 * If you plan on exporting objects (using e.g.
 * Gio::DbusConnection::register_object()), note that it is generally too late
 * to export the objects in @a name_acquired_slot. Instead, you can do this
 * in @a bus_acquired_slot since you are guaranteed that this will run
 * before name is requested from the bus.
 *
 * This behavior makes it very simple to write applications that wants to own
 * names and export objects.
 *
 * @param bus_type The type of bus to own a name on.
 * @param name The well-known name to own.
 * @param bus_acquired_slot Slot to invoke when connected to the bus of
 * type bus_type.
 * @param name_acquired_slot Slot to invoke when name is acquired.
 * @param name_lost_slot Slot to invoke when name is lost.
 * @param flags A set of flags from the BusNameOwnerFlags enumeration.
 * @return An identifier (never 0) that an be used with unown_name() to stop
 * owning the name.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
guint own_name(
  BusType bus_type,
  const Glib::ustring& name,
  const SlotBusAcquired& bus_acquired_slot = SlotBusAcquired(),
  const SlotNameAcquired& name_acquired_slot = SlotNameAcquired(),
  const SlotNameLost& name_lost_slot = SlotNameLost(),
  BusNameOwnerFlags flags = Gio::DBus::BUS_NAME_OWNER_FLAGS_NONE
);


/** Stops owning a name.
 * @param owner_id An identifier obtained from own_name().
 */
void unown_name(guint owner_id);


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSOWNNAME_H */

