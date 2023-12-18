package test

import (
	"testing"

	"rice.cooker/main/module"
)

func TestPlugInOk(t *testing.T){
	
	_, err := module.PlugIn(false)

	if err != nil {
		t.Errorf("Their has an error")
	}

}

func TestUnplugOk(t *testing.T){
	
	_, err := module.Unplug(true, false)

	if err != nil {
		t.Errorf("Their has an error")
	}

}

func TestSwitchOn(t *testing.T){
	
	_, err := module.SwitchOn(false, false, true)

	if err != nil {
		t.Errorf("Their has an error")
	}

}

func TestSwitchOff(t *testing.T){
	
	_, err := module.SwitchOff(true)

	if err != nil {
		t.Errorf("Their has an error")
	}

}

func TestPutSomething(t *testing.T){
	
	_, err := module.PutSomething(true)

	if err != nil {
		t.Errorf("Their has an error")
	}

}

func TestEmpty(t *testing.T){
	
	_, err := module.Empty(false, false)

	if err != nil {
		t.Errorf("Their has an error")
	}

}