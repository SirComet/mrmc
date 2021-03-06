/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "GUIDialogOSDSettings.h"
#include "GUIUserMessages.h"
#include "input/Key.h"

CGUIDialogOSDSettings::CGUIDialogOSDSettings(void)
    : CGUIDialog(WINDOW_DIALOG_OSD_SETTINGS, "OSDSettings.xml")
{
  m_loadType = KEEP_IN_MEMORY;
}

CGUIDialogOSDSettings::~CGUIDialogOSDSettings(void)
{
}

void CGUIDialogOSDSettings::FrameMove()
{
  CGUIDialog::FrameMove();
}

bool CGUIDialogOSDSettings::OnAction(const CAction &action)
{
  switch (action.GetID())
  {
    case ACTION_MOVE_UP:
    case ACTION_SHOW_OSD_SETTINGS:
      Close();
      return true;
      break;
  }

  return CGUIDialog::OnAction(action);
}

EVENT_RESULT CGUIDialogOSDSettings::OnMouseEvent(const CPoint &point, const CMouseEvent &event)
{
  return CGUIDialog::OnMouseEvent(point, event);
}

bool CGUIDialogOSDSettings::OnMessage(CGUIMessage& message)
{
  return CGUIDialog::OnMessage(message);
}
