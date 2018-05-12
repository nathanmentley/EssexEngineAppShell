/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineAppShell/MainState.h>

using EssexEngine::Core::IApp;
using EssexEngine::Core::Models::State;

using EssexEngine::Apps::Shell::MainState;

MainState::MainState(WeakPointer<Context> _context, WeakPointer<IApp> _app): State(_context, _app) {}
MainState::~MainState() {}

void MainState::Setup() {}
void MainState::Logic() {}
void MainState::Render() {}
bool MainState::PauseUnder() {
    return true;
}
