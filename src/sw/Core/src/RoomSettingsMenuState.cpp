#include "RoomSettingsMenuState.h"
#include "Utils.h"

RoomSettingsMenuState::RoomSettingsMenuState(std::shared_ptr<StateManager> stateManager) : State(stateManager)
{
	// make new
	m_guiBuilder.setBackgroundColor(WHITE);

	m_guiBuilder.addTextBox(m_name, BLACK, 230, 40, 24);

	m_guiBuilder.addTextBox("Temperature:", BLACK, 115, 85, 20);
	m_guiBuilder.addTextBox(m_temperature, BLACK, 220, 85, 20);
	m_guiBuilder.addTextBox("*C" ,BLACK, 270, 85, 20);

	m_guiBuilder.addButton(Circle, BLUE, 140, 195, 150, 150);
	m_guiBuilder.addTextBox("Light", BLACK, 135, 195, 24);
	m_guiBuilder.addTextBox("+", RED, 133, 145, 24);
	m_guiBuilder.addTextBox("-", BLACK, 133, 240, 24);

	m_guiBuilder.addButton(Circle, BLUE, 340, 195, 150, 150);
	m_guiBuilder.addTextBox("Heater", BLACK, 340, 195, 24);
	m_guiBuilder.addTextBox("+", RED, 333, 145, 24);
	m_guiBuilder.addTextBox("-", BLACK, 333, 240, 24);

	m_guiBuilder.addTextBox("BACK", BLACK, 50, 300, 20);

	// set pointer to new GUI
	m_gui = m_guiBuilder.getResult();

	// temporary
	render();
}

void RoomSettingsMenuState::update(float deltaTime)
{
}

void RoomSettingsMenuState::render()
{
	m_gui.render();
}

void RoomSettingsMenuState::processInput(std::pair<unsigned, unsigned> touchAddress)
{
	m_gui.processInput(touchAddress);
}