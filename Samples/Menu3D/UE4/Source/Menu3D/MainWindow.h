////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

namespace Menu3D
{

////////////////////////////////////////////////////////////////////////////////////////////////////
class MainWindow : public Noesis::Grid
{
private:
	NS_IMPLEMENT_INLINE_REFLECTION(MainWindow, Noesis::Grid)
	{
		NsMeta<Noesis::TypeId>("Menu3D.MainWindow");
	}
};

}
