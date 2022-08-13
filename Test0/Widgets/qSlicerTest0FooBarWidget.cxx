/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerTest0FooBarWidget.h"
#include "ui_qSlicerTest0FooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_Test0
class qSlicerTest0FooBarWidgetPrivate
  : public Ui_qSlicerTest0FooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerTest0FooBarWidget);
protected:
  qSlicerTest0FooBarWidget* const q_ptr;

public:
  qSlicerTest0FooBarWidgetPrivate(
    qSlicerTest0FooBarWidget& object);
  virtual void setupUi(qSlicerTest0FooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerTest0FooBarWidgetPrivate
::qSlicerTest0FooBarWidgetPrivate(
  qSlicerTest0FooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerTest0FooBarWidgetPrivate
::setupUi(qSlicerTest0FooBarWidget* widget)
{
  this->Ui_qSlicerTest0FooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerTest0FooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerTest0FooBarWidget
::qSlicerTest0FooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerTest0FooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerTest0FooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerTest0FooBarWidget
::~qSlicerTest0FooBarWidget()
{
}
