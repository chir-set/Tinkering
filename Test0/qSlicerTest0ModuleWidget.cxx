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

// Qt includes
#include <QDebug>

// Slicer includes
#include "qSlicerTest0ModuleWidget.h"
#include "ui_qSlicerTest0ModuleWidget.h"

#include <vtkMRMLMarkupsFiducialNode.h>

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerTest0ModuleWidgetPrivate: public Ui_qSlicerTest0ModuleWidget
{
public:
  qSlicerTest0ModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerTest0ModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerTest0ModuleWidgetPrivate::qSlicerTest0ModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerTest0ModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerTest0ModuleWidget::qSlicerTest0ModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerTest0ModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerTest0ModuleWidget::~qSlicerTest0ModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerTest0ModuleWidget::setup()
{
  Q_D(qSlicerTest0ModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
  
  QObject::connect(d->applyButton, SIGNAL(clicked()),
                   this, SLOT(onApply()));
}

//-----------------------------------------------------------------------------
void qSlicerTest0ModuleWidget::onApply()
{
  Q_D(qSlicerTest0ModuleWidget);
  
  vtkMRMLNode * fiducialNode = d->inputFiducialSelector->currentNode();
  vtkMRMLMarkupsFiducialNode * fiducialNodeReal = vtkMRMLMarkupsFiducialNode::SafeDownCast(fiducialNode);
  std::cout << fiducialNodeReal->GetClassName() << std::endl; // OK
  std::cout << fiducialNodeReal->GetNumberOfControlPoints() << std::endl; // Crash
}
