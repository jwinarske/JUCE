/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== AudioPluginXCodeScript.txt ==================
static const unsigned char temp_43731c40[] =
"\r\n"
"# This script takes the build product and copies it to the AU, VST, and RTAS folders, depending on \r\n"
"# which plugin types you've built\r\n"
"\r\n"
"original=$CONFIGURATION_BUILD_DIR/$FULL_PRODUCT_NAME\r\n"
"\r\n"
"# this looks inside the binary to detect which platforms are needed.. \r\n"
"copyAU=`nm -g \"$CONFIGURATION_BUILD_DIR/$EXECUTABLE_PATH\" | grep -i 'AudioUnit' | wc -l`\r\n"
"copyVST=`nm -g \"$CONFIGURATION_BUILD_DIR/$EXECUTABLE_PATH\" | grep -i 'VSTPlugin' | wc -l`\r\n"
"copyRTAS=`nm -g \"$CONFIGURATION_BUILD_DIR/$EXECUTABLE_PATH\" | grep -i 'CProcess' | wc -l`\r\n"
"copyAAX=`nm -g \"$CONFIGURATION_BUILD_DIR/$EXECUTABLE_PATH\" | grep -i 'GetEffectDescriptions' | wc -l`\r\n"
"\r\n"
"if [ $copyAU -gt 0 ]; then\r\n"
"  echo \"Copying to AudioUnit folder...\"\r\n"
"  AU=~/Library/Audio/Plug-Ins/Components/$PRODUCT_NAME.component\r\n"
"  if [ -d \"$AU\" ]; then \r\n"
"    rm -r \"$AU\"\r\n"
"  fi\r\n"
"\r\n"
"  cp -r \"$original\" \"$AU\"\r\n"
"  sed -i \"\" -e 's/TDMwPTul/BNDLPTul/g' \"$AU/Contents/PkgInfo\"\r\n"
"  sed -i \"\" -e 's/TDMw/BNDL/g' \"$AU/Contents/$INFOPLIST_FILE\"\r\n"
"fi\r\n"
"\r\n"
"if [ $copyVST -gt 0 ]; then\r\n"
"  echo \"Copying to VST folder...\"\r\n"
"  VST=~/Library/Audio/Plug-Ins/VST/$PRODUCT_NAME.vst\r\n"
"  if [ -d \"$VST\" ]; then \r\n"
"    rm -r \"$VST\"\r\n"
"  fi\r\n"
"\r\n"
"  cp -r \"$original\" \"$VST\"\r\n"
"  sed -i \"\" -e 's/TDMwPTul/BNDLPTul/g' \"$VST/Contents/PkgInfo\"\r\n"
"  sed -i \"\" -e 's/TDMw/BNDL/g' \"$VST/Contents/$INFOPLIST_FILE\"\r\n"
"fi\r\n"
"\r\n"
"if [ $copyRTAS -gt 0 ]; then\r\n"
"  echo \"Copying to RTAS folder...\"\r\n"
"  RTAS=/Library/Application\\ Support/Digidesign/Plug-Ins/$PRODUCT_NAME.dpm\r\n"
"  if [ -d \"$RTAS\" ]; then\r\n"
"    rm -r \"$RTAS\"\r\n"
"  fi\r\n"
"\r\n"
"  cp -r \"$original\" \"$RTAS\"\r\n"
"fi\r\n"
"\r\n"
"if [ $copyAAX -gt 0 ]; then\r\n"
"  echo \"Copying to AAX folder...\"\r\n"
"\r\n"
"  if [ -d \"/Applications/ProTools_3PDev/Plug-Ins\" ]; then\r\n"
"    AAX1=\"/Applications/ProTools_3PDev/Plug-Ins/$PRODUCT_NAME.aaxplugin\"\r\n"
"\r\n"
"    if [ -d \"$AAX1\" ]; then\r\n"
"      rm -r \"$AAX1\"\r\n"
"    fi\r\n"
"\r\n"
"    cp -r \"$original\" \"$AAX1\"\r\n"
"  fi\r\n"
"\r\n"
"  if [ -d \"/Library/Application Support/Avid/Audio/Plug-Ins\" ]; then\r\n"
"    AAX2=\"/Library/Application Support/Avid/Audio/Plug-Ins/$PRODUCT_NAME.aaxplugin\"\r\n"
"\r\n"
"    if [ -d \"$AAX2\" ]; then\r\n"
"      rm -r \"$AAX2\"\r\n"
"    fi\r\n"
"\r\n"
"    cp -r \"$original\" \"$AAX2\"\r\n"
"  fi\r\n"
"fi\r\n";

const char* AudioPluginXCodeScript_txt = (const char*) temp_43731c40;

//================== background_tile.png ==================
static const unsigned char temp_e612dbe3[] =
{ 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,7,0,0,0,7,8,6,0,0,0,196,82,87,211,0,0,0,94,73,68,65,84,120,218,85,141,73,14,0,33,8,4,253,137,226,18,19,245,234,255,127,70,75,155,232,56,135,10,132,94,112,33,4,37,222,123,205,57,107,74,105,239,196,137,
8,72,239,29,99,12,204,57,209,90,227,237,19,45,113,161,209,12,234,172,18,49,70,88,229,134,34,103,173,245,159,60,134,82,10,238,79,166,223,106,238,91,100,229,73,191,80,92,47,179,68,223,148,158,98,226,0,0,0,0,73,69,78,68,174,66,96,130,0,0 };

const char* background_tile_png = (const char*) temp_e612dbe3;

//================== colourscheme_dark.xml ==================
static const unsigned char temp_7bcdfa76[] =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
"\r\n"
"<COLOUR_SCHEME font=\"&lt;Monospaced&gt;; 13.0\">\r\n"
"  <COLOUR name=\"Main Window Bkgd\" colour=\"FF29292A\"/>\r\n"
"  <COLOUR name=\"Treeview Highlight\" colour=\"2BFFFEC3\"/>\r\n"
"  <COLOUR name=\"Code Background\" colour=\"FF222222\"/>\r\n"
"  <COLOUR name=\"Line Number Bkgd\" colour=\"44C1C1C1\"/>\r\n"
"  <COLOUR name=\"Line Numbers\" colour=\"E9B2B2B2\"/>\r\n"
"  <COLOUR name=\"Plain Text\" colour=\"FFCECECE\"/>\r\n"
"  <COLOUR name=\"Selected Text Bkgd\" colour=\"FF2859AC\"/>\r\n"
"  <COLOUR name=\"Caret\" colour=\"FFFFFFFF\"/>\r\n"
"  <COLOUR name=\"Preprocessor Text\" colour=\"FFF8F631\"/>\r\n"
"  <COLOUR name=\"Punctuation\" colour=\"FFCFBEFF\"/>\r\n"
"  <COLOUR name=\"Bracket\" colour=\"FF058202\"/>\r\n"
"  <COLOUR name=\"String\" colour=\"FFBC45DD\"/>\r\n"
"  <COLOUR name=\"Float\" colour=\"ff885500\"/>\r\n"
"  <COLOUR name=\"Integer\" colour=\"FF42C8C4\"/>\r\n"
"  <COLOUR name=\"Identifier\" colour=\"FFCFCFCF\"/>\r\n"
"  <COLOUR name=\"Operator\" colour=\"FFC4EB19\"/>\r\n"
"  <COLOUR name=\"Keyword\" colour=\"FFEE6F6F\"/>\r\n"
"  <COLOUR name=\"Comment\" colour=\"FF72D20C\"/>\r\n"
"  <COLOUR name=\"Error\" colour=\"FFE60000\"/>\r\n"
"</COLOUR_SCHEME>\r\n";

const char* colourscheme_dark_xml = (const char*) temp_7bcdfa76;

//================== colourscheme_light.xml ==================
static const unsigned char temp_97d41148[] =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
"\r\n"
"<COLOUR_SCHEME font=\"&lt;Monospaced&gt;; 13.0\">\r\n"
"  <COLOUR name=\"Main Window Bkgd\" colour=\"FFE6E7E9\"/>\r\n"
"  <COLOUR name=\"Treeview Highlight\" colour=\"401111ee\"/>\r\n"
"  <COLOUR name=\"Code Background\" colour=\"ffffffff\"/>\r\n"
"  <COLOUR name=\"Line Number Bkgd\" colour=\"44999999\"/>\r\n"
"  <COLOUR name=\"Line Numbers\" colour=\"44000000\"/>\r\n"
"  <COLOUR name=\"Plain Text\" colour=\"ff000000\"/>\r\n"
"  <COLOUR name=\"Selected Text Bkgd\" colour=\"401111ee\"/>\r\n"
"  <COLOUR name=\"Caret\" colour=\"ff000000\"/>\r\n"
"  <COLOUR name=\"Preprocessor Text\" colour=\"ff660000\"/>\r\n"
"  <COLOUR name=\"Punctuation\" colour=\"ff004400\"/>\r\n"
"  <COLOUR name=\"Bracket\" colour=\"ff000055\"/>\r\n"
"  <COLOUR name=\"String\" colour=\"ff990099\"/>\r\n"
"  <COLOUR name=\"Float\" colour=\"ff885500\"/>\r\n"
"  <COLOUR name=\"Integer\" colour=\"ff880000\"/>\r\n"
"  <COLOUR name=\"Identifier\" colour=\"ff000000\"/>\r\n"
"  <COLOUR name=\"Operator\" colour=\"ff225500\"/>\r\n"
"  <COLOUR name=\"Keyword\" colour=\"ff0000cc\"/>\r\n"
"  <COLOUR name=\"Comment\" colour=\"ff00aa00\"/>\r\n"
"  <COLOUR name=\"Error\" colour=\"ffcc0000\"/>\r\n"
"</COLOUR_SCHEME>\r\n";

const char* colourscheme_light_xml = (const char*) temp_97d41148;

//================== jucer_AudioPluginEditorTemplate.cpp ==================
static const unsigned char temp_6eda5614[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated by the Introjucer!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"EDITORCPPHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"EDITORCLASSNAME::EDITORCLASSNAME (FILTERCLASSNAME* ownerFilter)\r\n"
"    : AudioProcessorEditor (ownerFilter)\r\n"
"{\r\n"
"    // This is where our plugin's editor size is set.\r\n"
"    setSize (400, 300);\r\n"
"}\r\n"
"\r\n"
"EDITORCLASSNAME::~EDITORCLASSNAME()\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"void EDITORCLASSNAME::paint (Graphics& g)\r\n"
"{\r\n"
"    g.fillAll (Colours::white);\r\n"
"    g.setColour (Colours::black);\r\n"
"    g.setFont (15.0f);\r\n"
"    g.drawFittedText (\"Hello World!\",\r\n"
"                      0, 0, getWidth(), getHeight(),\r\n"
"                      Justification::centred, 1);\r\n"
"}\r\n";

const char* jucer_AudioPluginEditorTemplate_cpp = (const char*) temp_6eda5614;

//================== jucer_AudioPluginEditorTemplate.h ==================
static const unsigned char temp_67353d19[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated by the Introjucer!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"EDITORHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"/**\r\n"
"*/\r\n"
"class EDITORCLASSNAME  : public AudioProcessorEditor\r\n"
"{\r\n"
"public:\r\n"
"    EDITORCLASSNAME (FILTERCLASSNAME* ownerFilter);\r\n"
"    ~EDITORCLASSNAME();\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    // This is just a standard Juce paint method...\r\n"
"    void paint (Graphics& g);\r\n"
"};\r\n"
"\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_AudioPluginEditorTemplate_h = (const char*) temp_67353d19;

//================== jucer_AudioPluginFilterTemplate.cpp ==================
static const unsigned char temp_98c9479f[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"FILTERHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"FILTERCLASSNAME::FILTERCLASSNAME()\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"FILTERCLASSNAME::~FILTERCLASSNAME()\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"const String FILTERCLASSNAME::getName() const\r\n"
"{\r\n"
"    return JucePlugin_Name;\r\n"
"}\r\n"
"\r\n"
"int FILTERCLASSNAME::getNumParameters()\r\n"
"{\r\n"
"    return 0;\r\n"
"}\r\n"
"\r\n"
"float FILTERCLASSNAME::getParameter (int index)\r\n"
"{\r\n"
"    return 0.0f;\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::setParameter (int index, float newValue)\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"const String FILTERCLASSNAME::getParameterName (int index)\r\n"
"{\r\n"
"    return String::empty;\r\n"
"}\r\n"
"\r\n"
"const String FILTERCLASSNAME::getParameterText (int index)\r\n"
"{\r\n"
"    return String::empty;\r\n"
"}\r\n"
"\r\n"
"const String FILTERCLASSNAME::getInputChannelName (int channelIndex) const\r\n"
"{\r\n"
"    return String (channelIndex + 1);\r\n"
"}\r\n"
"\r\n"
"const String FILTERCLASSNAME::getOutputChannelName (int channelIndex) const\r\n"
"{\r\n"
"    return String (channelIndex + 1);\r\n"
"}\r\n"
"\r\n"
"bool FILTERCLASSNAME::isInputChannelStereoPair (int index) const\r\n"
"{\r\n"
"    return true;\r\n"
"}\r\n"
"\r\n"
"bool FILTERCLASSNAME::isOutputChannelStereoPair (int index) const\r\n"
"{\r\n"
"    return true;\r\n"
"}\r\n"
"\r\n"
"bool FILTERCLASSNAME::acceptsMidi() const\r\n"
"{\r\n"
"   #if JucePlugin_WantsMidiInput\r\n"
"    return true;\r\n"
"   #else\r\n"
"    return false;\r\n"
"   #endif\r\n"
"}\r\n"
"\r\n"
"bool FILTERCLASSNAME::producesMidi() const\r\n"
"{\r\n"
"   #if JucePlugin_ProducesMidiOutput\r\n"
"    return true;\r\n"
"   #else\r\n"
"    return false;\r\n"
"   #endif\r\n"
"}\r\n"
"\r\n"
"bool FILTERCLASSNAME::silenceInProducesSilenceOut() const\r\n"
"{\r\n"
"    return false;\r\n"
"}\r\n"
"\r\n"
"int FILTERCLASSNAME::getNumPrograms()\r\n"
"{\r\n"
"    return 0;\r\n"
"}\r\n"
"\r\n"
"int FILTERCLASSNAME::getCurrentProgram()\r\n"
"{\r\n"
"    return 0;\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::setCurrentProgram (int index)\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"const String FILTERCLASSNAME::getProgramName (int index)\r\n"
"{\r\n"
"    return String::empty;\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::changeProgramName (int index, const String& newName)\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"void FILTERCLASSNAME::prepareToPlay (double sampleRate, int samplesPerBlock)\r\n"
"{\r\n"
"    // Use this method as the place to do any pre-playback\r\n"
"    // initialisation that you need..\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::releaseResources()\r\n"
"{\r\n"
"    // When playback stops, you can use this as an opportunity to free up any\r\n"
"    // spare memory, etc.\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)\r\n"
"{\r\n"
"    // This is the place where you'd normally do the guts of your plugin's\r\n"
"    // audio processing...\r\n"
"    for (int channel = 0; channel < getNumInputChannels(); ++channel)\r\n"
"    {\r\n"
"        float* channelData = buffer.getSampleData (channel);\r\n"
"\r\n"
"        // ..do something to the data...\r\n"
"    }\r\n"
"\r\n"
"    // In case we have more outputs than inputs, we'll clear any output\r\n"
"    // channels that didn't contain input data, (because these aren't\r\n"
"    // guaranteed to be empty - they may contain garbage).\r\n"
"    for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)\r\n"
"    {\r\n"
"        buffer.clear (i, 0, buffer.getNumSamples());\r\n"
"    }\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"bool FILTERCLASSNAME::hasEditor() const\r\n"
"{\r\n"
"    return true; // (change this to false if you choose to not supply an editor)\r\n"
"}\r\n"
"\r\n"
"AudioProcessorEditor* FILTERCLASSNAME::createEditor()\r\n"
"{\r\n"
"    return new EDITORCLASSNAME (this);\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"void FILTERCLASSNAME::getStateInformation (MemoryBlock& destData)\r\n"
"{\r\n"
"    // You should use this method to store your parameters in the memory block.\r\n"
"    // You could do that either as raw data, or use the XML or ValueTree classes\r\n"
"    // as intermediaries to make it easy to save and load complex data.\r\n"
"}\r\n"
"\r\n"
"void FILTERCLASSNAME::setStateInformation (const void* data, int sizeInBytes)\r\n"
"{\r\n"
"    // You should use this method to restore your parameters from this memory block,\r\n"
"    // whose contents will have been created by the getStateInformation() call.\r\n"
"}\r\n"
"\r\n"
"//==============================================================================\r\n"
"// This creates new instances of the plugin..\r\n"
"AudioProcessor* JUCE_CALLTYPE createPluginFilter()\r\n"
"{\r\n"
"    return new FILTERCLASSNAME();\r\n"
"}\r\n";

const char* jucer_AudioPluginFilterTemplate_cpp = (const char*) temp_98c9479f;

//================== jucer_AudioPluginFilterTemplate.h ==================
static const unsigned char temp_62b91564[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"APPHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"/**\r\n"
"*/\r\n"
"class FILTERCLASSNAME  : public AudioProcessor\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    FILTERCLASSNAME();\r\n"
"    ~FILTERCLASSNAME();\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void prepareToPlay (double sampleRate, int samplesPerBlock);\r\n"
"    void releaseResources();\r\n"
"\r\n"
"    void processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages);\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    AudioProcessorEditor* createEditor();\r\n"
"    bool hasEditor() const;\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    const String getName() const;\r\n"
"\r\n"
"    int getNumParameters();\r\n"
"\r\n"
"    float getParameter (int index);\r\n"
"    void setParameter (int index, float newValue);\r\n"
"\r\n"
"    const String getParameterName (int index);\r\n"
"    const String getParameterText (int index);\r\n"
"\r\n"
"    const String getInputChannelName (int channelIndex) const;\r\n"
"    const String getOutputChannelName (int channelIndex) const;\r\n"
"    bool isInputChannelStereoPair (int index) const;\r\n"
"    bool isOutputChannelStereoPair (int index) const;\r\n"
"\r\n"
"    bool acceptsMidi() const;\r\n"
"    bool producesMidi() const;\r\n"
"    bool silenceInProducesSilenceOut() const;\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    int getNumPrograms();\r\n"
"    int getCurrentProgram();\r\n"
"    void setCurrentProgram (int index);\r\n"
"    const String getProgramName (int index);\r\n"
"    void changeProgramName (int index, const String& newName);\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void getStateInformation (MemoryBlock& destData);\r\n"
"    void setStateInformation (const void* data, int sizeInBytes);\r\n"
"\r\n"
"private:\r\n"
"    //==============================================================================\r\n"
"    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FILTERCLASSNAME);\r\n"
"};\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_AudioPluginFilterTemplate_h = (const char*) temp_62b91564;

//================== jucer_ContentCompTemplate.cpp ==================
static const unsigned char temp_7e4c4c06[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated!\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"INCLUDE_CORRESPONDING_HEADER\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"CONTENTCOMPCLASS::CONTENTCOMPCLASS()\r\n"
"{\r\n"
"    setSize (500, 400);\r\n"
"}\r\n"
"\r\n"
"CONTENTCOMPCLASS::~CONTENTCOMPCLASS()\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"void CONTENTCOMPCLASS::paint (Graphics& g)\r\n"
"{\r\n"
"    g.fillAll (Colour (0xffeeddff));\r\n"
"\r\n"
"    g.setFont (Font (16.0f));\r\n"
"    g.setColour (Colours::black);\r\n"
"    g.drawText (\"Hello World!\", getLocalBounds(), Justification::centred, true);\r\n"
"}\r\n"
"\r\n"
"void CONTENTCOMPCLASS::resized()\r\n"
"{\r\n"
"    // This is called when the CONTENTCOMPCLASS is resized.\r\n"
"    // If you add any child components, this is where you should\r\n"
"    // update their positions.\r\n"
"}\r\n";

const char* jucer_ContentCompTemplate_cpp = (const char*) temp_7e4c4c06;

//================== jucer_ContentCompTemplate.h ==================
static const unsigned char temp_4a30078b[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated!\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"INCLUDE_JUCE\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"/*\r\n"
"    This component lives inside our window, and this is where you should put all\r\n"
"    your controls and content.\r\n"
"*/\r\n"
"class CONTENTCOMPCLASS   : public Component\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    CONTENTCOMPCLASS();\r\n"
"    ~CONTENTCOMPCLASS();\r\n"
"\r\n"
"    void paint (Graphics&);\r\n"
"    void resized();\r\n"
"\r\n"
"private:\r\n"
"    //==============================================================================\r\n"
"    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CONTENTCOMPCLASS)\r\n"
"};\r\n"
"\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_ContentCompTemplate_h = (const char*) temp_4a30078b;

//================== jucer_MainConsoleAppTemplate.cpp ==================
static const unsigned char temp_794304c3[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"APPHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"int main (int argc, char* argv[])\r\n"
"{\r\n"
"\r\n"
"    // ..your code goes here!\r\n"
"\r\n"
"\r\n"
"    return 0;\r\n"
"}\r\n";

const char* jucer_MainConsoleAppTemplate_cpp = (const char*) temp_794304c3;

//================== jucer_MainTemplate_NoWindow.cpp ==================
static const unsigned char temp_2f039a1[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated by the Introjucer!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"APPHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"class APPCLASSNAME  : public JUCEApplication\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    APPCLASSNAME() {}\r\n"
"\r\n"
"    const String getApplicationName()       { return ProjectInfo::projectName; }\r\n"
"    const String getApplicationVersion()    { return ProjectInfo::versionString; }\r\n"
"    bool moreThanOneInstanceAllowed()       { return ALLOWMORETHANONEINSTANCE; }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void initialise (const String& commandLine)\r\n"
"    {\r\n"
"        // Add your application's initialisation code here..\r\n"
"    }\r\n"
"\r\n"
"    void shutdown()\r\n"
"    {\r\n"
"        // Add your application's shutdown code here..\r\n"
"    }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void systemRequestedQuit()\r\n"
"    {\r\n"
"        // This is called when the app is being asked to quit: you can ignore this\r\n"
"        // request and let the app carry on running, or call quit() to allow the app to close.\r\n"
"        quit();\r\n"
"    }\r\n"
"\r\n"
"    void anotherInstanceStarted (const String& commandLine)\r\n"
"    {\r\n"
"        // When another instance of the app is launched while this one is running,\r\n"
"        // this method is invoked, and the commandLine parameter tells you what\r\n"
"        // the other instance's command-line arguments were.\r\n"
"    }\r\n"
"};\r\n"
"\r\n"
"//==============================================================================\r\n"
"// This macro generates the main() routine that launches the app.\r\n"
"START_JUCE_APPLICATION (APPCLASSNAME)\r\n";

const char* jucer_MainTemplate_NoWindow_cpp = (const char*) temp_2f039a1;

//================== jucer_MainTemplate_Window.cpp ==================
static const unsigned char temp_b2f1a7c0[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file was auto-generated by the Introjucer!\r\n"
"\r\n"
"    It contains the basic startup code for a Juce application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"APPHEADERS\r\n"
"\r\n"
"\r\n"
"//==============================================================================\r\n"
"class APPCLASSNAME  : public JUCEApplication\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    APPCLASSNAME() {}\r\n"
"\r\n"
"    const String getApplicationName()       { return ProjectInfo::projectName; }\r\n"
"    const String getApplicationVersion()    { return ProjectInfo::versionString; }\r\n"
"    bool moreThanOneInstanceAllowed()       { return ALLOWMORETHANONEINSTANCE; }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void initialise (const String& commandLine)\r\n"
"    {\r\n"
"        // This method is where you should put your application's initialisation code..\r\n"
"\r\n"
"        mainWindow = new MainWindow();\r\n"
"    }\r\n"
"\r\n"
"    void shutdown()\r\n"
"    {\r\n"
"        // Add your application's shutdown code here..\r\n"
"\r\n"
"        mainWindow = nullptr; // (deletes our window)\r\n"
"    }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void systemRequestedQuit()\r\n"
"    {\r\n"
"        // This is called when the app is being asked to quit: you can ignore this\r\n"
"        // request and let the app carry on running, or call quit() to allow the app to close.\r\n"
"        quit();\r\n"
"    }\r\n"
"\r\n"
"    void anotherInstanceStarted (const String& commandLine)\r\n"
"    {\r\n"
"        // When another instance of the app is launched while this one is running,\r\n"
"        // this method is invoked, and the commandLine parameter tells you what\r\n"
"        // the other instance's command-line arguments were.\r\n"
"    }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    /*\r\n"
"        This class implements the desktop window that contains an instance of\r\n"
"        our CONTENTCOMPCLASS class.\r\n"
"    */\r\n"
"    class MainWindow    : public DocumentWindow\r\n"
"    {\r\n"
"    public:\r\n"
"        MainWindow()  : DocumentWindow (\"MainWindow\",\r\n"
"                                        Colours::lightgrey,\r\n"
"                                        DocumentWindow::allButtons)\r\n"
"        {\r\n"
"            setContentOwned (new CONTENTCOMPCLASS(), true);\r\n"
"\r\n"
"            centreWithSize (getWidth(), getHeight());\r\n"
"            setVisible (true);\r\n"
"        }\r\n"
"\r\n"
"        void closeButtonPressed()\r\n"
"        {\r\n"
"            // This is called when the user tries to close this window. Here, we'll just\r\n"
"            // ask the app to quit when this happens, but you can change this to do\r\n"
"            // whatever you need.\r\n"
"            JUCEApplication::getInstance()->systemRequestedQuit();\r\n"
"        }\r\n"
"\r\n"
"        /* Note: Be careful if you override any DocumentWindow methods - the base\r\n"
"           class uses a lot of them, so by overriding you might break its functionality.\r\n"
"           It's best to do all your work in your content component instead, but if\r\n"
"           you really have to override any DocumentWindow methods, make sure your\r\n"
"           subclass also calls the superclass's method.\r\n"
"        */\r\n"
"\r\n"
"    private:\r\n"
"        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow);\r\n"
"    };\r\n"
"\r\n"
"private:\r\n"
"    ScopedPointer<MainWindow> mainWindow;\r\n"
"};\r\n"
"\r\n"
"//==============================================================================\r\n"
"// This macro generates the main() routine that launches the app.\r\n"
"START_JUCE_APPLICATION (APPCLASSNAME)\r\n";

const char* jucer_MainTemplate_Window_cpp = (const char*) temp_b2f1a7c0;

//================== jucer_NewComponentTemplate.cpp ==================
static const unsigned char temp_e0f76d5d[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    FILENAME\r\n"
"    Created: DATE\r\n"
"    Author:  AUTHOR\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"INCLUDE_JUCE\r\n"
"INCLUDE_CORRESPONDING_HEADER\r\n"
"\r\n"
"//==============================================================================\r\n"
"COMPONENTCLASS::COMPONENTCLASS()\r\n"
"{\r\n"
"    // In your constructor, you should add any child components, and\r\n"
"    // initialise any special settings that your component needs.\r\n"
"\r\n"
"}\r\n"
"\r\n"
"COMPONENTCLASS::~COMPONENTCLASS()\r\n"
"{\r\n"
"}\r\n"
"\r\n"
"void COMPONENTCLASS::paint (Graphics& g)\r\n"
"{\r\n"
"    /* This demo code just fills the component's background and\r\n"
"       draws some placeholder text to get you started.\r\n"
"\r\n"
"       You should replace everything in this method with your own\r\n"
"       drawing code..\r\n"
"    */\r\n"
"\r\n"
"    g.fillAll (Colours::white);   // clear the background\r\n"
"\r\n"
"    g.setColour (Colours::grey);\r\n"
"    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component\r\n"
"\r\n"
"    g.setColour (Colours::lightblue);\r\n"
"    g.setFont (14.0f);\r\n"
"    g.drawText (\"COMPONENTCLASS\", getLocalBounds(),\r\n"
"                Justification::centred, true);   // draw some placeholder text\r\n"
"}\r\n"
"\r\n"
"void COMPONENTCLASS::resized()\r\n"
"{\r\n"
"    // This method is where you should set the bounds of any child\r\n"
"    // components that your component contains..\r\n"
"\r\n"
"}\r\n";

const char* jucer_NewComponentTemplate_cpp = (const char*) temp_e0f76d5d;

//================== jucer_NewComponentTemplate.h ==================
static const unsigned char temp_5f1192a2[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    FILENAME\r\n"
"    Created: DATE\r\n"
"    Author:  AUTHOR\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"INCLUDE_JUCE\r\n"
"\r\n"
"//==============================================================================\r\n"
"/*\r\n"
"*/\r\n"
"class COMPONENTCLASS    : public Component\r\n"
"{\r\n"
"public:\r\n"
"    COMPONENTCLASS();\r\n"
"    ~COMPONENTCLASS();\r\n"
"\r\n"
"    void paint (Graphics&);\r\n"
"    void resized();\r\n"
"\r\n"
"private:\r\n"
"    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (COMPONENTCLASS);\r\n"
"};\r\n"
"\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_NewComponentTemplate_h = (const char*) temp_5f1192a2;

//================== jucer_NewCppFileTemplate.cpp ==================
static const unsigned char temp_79decf5f[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    FILENAME\r\n"
"    Created: DATE\r\n"
"    Author:  AUTHOR\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"INCLUDE_CORRESPONDING_HEADER";

const char* jucer_NewCppFileTemplate_cpp = (const char*) temp_79decf5f;

//================== jucer_NewCppFileTemplate.h ==================
static const unsigned char temp_70d8d24[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    FILENAME\r\n"
"    Created: DATE\r\n"
"    Author:  AUTHOR\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_NewCppFileTemplate_h = (const char*) temp_70d8d24;

//================== jucer_NewInlineComponentTemplate.h ==================
static const unsigned char temp_627c3689[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    FILENAME\r\n"
"    Created: DATE\r\n"
"    Author:  AUTHOR\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#ifndef HEADERGUARD\r\n"
"#define HEADERGUARD\r\n"
"\r\n"
"INCLUDE_JUCE\r\n"
"\r\n"
"//==============================================================================\r\n"
"/*\r\n"
"*/\r\n"
"class COMPONENTCLASS    : public Component\r\n"
"{\r\n"
"public:\r\n"
"    COMPONENTCLASS()\r\n"
"    {\r\n"
"        // In your constructor, you should add any child components, and\r\n"
"        // initialise any special settings that your component needs.\r\n"
"\r\n"
"    }\r\n"
"\r\n"
"    ~COMPONENTCLASS()\r\n"
"    {\r\n"
"    }\r\n"
"\r\n"
"    void paint (Graphics& g)\r\n"
"    {\r\n"
"        /* This demo code just fills the component's background and\r\n"
"           draws some placeholder text to get you started.\r\n"
"\r\n"
"           You should replace everything in this method with your own\r\n"
"           drawing code..\r\n"
"        */\r\n"
"\r\n"
"        g.fillAll (Colours::white);   // clear the background\r\n"
"\r\n"
"        g.setColour (Colours::grey);\r\n"
"        g.drawRect (getLocalBounds(), 1);   // draw an outline around the component\r\n"
"\r\n"
"        g.setColour (Colours::lightblue);\r\n"
"        g.setFont (14.0f);\r\n"
"        g.drawText (\"COMPONENTCLASS\", getLocalBounds(),\r\n"
"                    Justification::centred, true);   // draw some placeholder text\r\n"
"    }\r\n"
"\r\n"
"    void resized()\r\n"
"    {\r\n"
"        // This method is where you should set the bounds of any child\r\n"
"        // components that your component contains..\r\n"
"\r\n"
"    }\r\n"
"\r\n"
"private:\r\n"
"    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (COMPONENTCLASS);\r\n"
"};\r\n"
"\r\n"
"\r\n"
"#endif  // HEADERGUARD\r\n";

const char* jucer_NewInlineComponentTemplate_h = (const char*) temp_627c3689;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x44be9398:  numBytes = 2112; return AudioPluginXCodeScript_txt;
        case 0x4a0cfd09:  numBytes = 151; return background_tile_png;
        case 0x763d39dc:  numBytes = 1050; return colourscheme_dark_xml;
        case 0xe8b08520:  numBytes = 1050; return colourscheme_light_xml;
        case 0x27c5a93a:  numBytes = 1008; return jucer_AudioPluginEditorTemplate_cpp;
        case 0x4d0721bf:  numBytes = 799; return jucer_AudioPluginEditorTemplate_h;
        case 0x51b49ac5:  numBytes = 4559; return jucer_AudioPluginFilterTemplate_cpp;
        case 0x488afa0a:  numBytes = 2447; return jucer_AudioPluginFilterTemplate_h;
        case 0x0b66646c:  numBytes = 886; return jucer_ContentCompTemplate_cpp;
        case 0x6fa10171:  numBytes = 924; return jucer_ContentCompTemplate_h;
        case 0x8905395b:  numBytes = 470; return jucer_MainConsoleAppTemplate_cpp;
        case 0x5e5ea047:  numBytes = 1947; return jucer_MainTemplate_NoWindow_cpp;
        case 0x400bc026:  numBytes = 3614; return jucer_MainTemplate_Window_cpp;
        case 0xf4842835:  numBytes = 1389; return jucer_NewComponentTemplate_cpp;
        case 0xe7bf237a:  numBytes = 649; return jucer_NewComponentTemplate_h;
        case 0x02a2a077:  numBytes = 260; return jucer_NewCppFileTemplate_cpp;
        case 0x0842c43c:  numBytes = 308; return jucer_NewCppFileTemplate_h;
        case 0x36e634a1:  numBytes = 1627; return jucer_NewInlineComponentTemplate_h;
        default: break;
    }

    numBytes = 0;
    return 0;
}

}
