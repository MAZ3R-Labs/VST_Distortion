/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DistortionVstAudioProcessorEditor::DistortionVstAudioProcessorEditor (DistortionVstAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    addAndMakeVisible(driveknob = new Slider("Drive"));
    driveknob->setSliderStyle(Slider::Rotary);
    driveknob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    addAndMakeVisible(rangeknob = new Slider("Range"));
    rangeknob->setSliderStyle(Slider::Rotary);
    rangeknob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    addAndMakeVisible(blendknob = new Slider("Blend"));
    blendknob->setSliderStyle(Slider::Rotary);
    blendknob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    addAndMakeVisible(volumeknob = new Slider("Volume"));
    volumeknob->setSliderStyle(Slider::Rotary);
    volumeknob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    driveAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "drive", *driveknob);
    rangeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "range", *rangeknob);
    blendAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "blend", *blendknob);
    volumeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "volume", *volumeknob);


    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 200);
}

DistortionVstAudioProcessorEditor::~DistortionVstAudioProcessorEditor()
{
}

//==============================================================================
void DistortionVstAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);

    g.drawText("Drive", ((getWidth() / 5) * 1) - (100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Range", ((getWidth() / 5) * 2) - (100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Blend", ((getWidth() / 5) * 3) - (100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Volume", ((getWidth() / 5) * 4) - (100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
}

void DistortionVstAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    driveknob->setBounds(((getWidth() / 5) * 1) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
    rangeknob->setBounds(((getWidth() / 5) * 2) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
    blendknob->setBounds(((getWidth() / 5) * 3) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
    volumeknob->setBounds(((getWidth() / 5) * 4) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);

}
