/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Test0 Logic includes
#include <vtkSlicerTest0Logic.h>

// Test0 includes
#include "qSlicerTest0Module.h"
#include "qSlicerTest0ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerTest0ModulePrivate
{
public:
  qSlicerTest0ModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerTest0ModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerTest0ModulePrivate::qSlicerTest0ModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerTest0Module methods

//-----------------------------------------------------------------------------
qSlicerTest0Module::qSlicerTest0Module(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerTest0ModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerTest0Module::~qSlicerTest0Module()
{
}

//-----------------------------------------------------------------------------
QString qSlicerTest0Module::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerTest0Module::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerTest0Module::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerTest0Module::icon() const
{
  return QIcon(":/Icons/Test0.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerTest0Module::categories() const
{
  return QStringList() << "Testing";
}

//-----------------------------------------------------------------------------
QStringList qSlicerTest0Module::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerTest0Module::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerTest0Module
::createWidgetRepresentation()
{
  return new qSlicerTest0ModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerTest0Module::createLogic()
{
  return vtkSlicerTest0Logic::New();
}
