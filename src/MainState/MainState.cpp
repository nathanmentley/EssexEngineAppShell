/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineAppShell/MainState.h>

EssexEngine::Apps::Shell::MainState::MainState(WeakPointer<Context> _context)
:Core::Models::State(_context) {
}

EssexEngine::Apps::Shell::MainState::~MainState() {
}

void EssexEngine::Apps::Shell::MainState::Setup() {
}

void EssexEngine::Apps::Shell::MainState::Logic() {
}

void EssexEngine::Apps::Shell::MainState::Render() {
}

bool EssexEngine::Apps::Shell::MainState::PauseUnder() {
    return true;
}
