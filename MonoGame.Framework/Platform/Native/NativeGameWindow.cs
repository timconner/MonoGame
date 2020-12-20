using System;
using MonoGame.Framework;

namespace Microsoft.Xna.Framework
{
    class NativeGameWindow : GameWindow
    {
        public static NativeGameWindow Instance;

        public NativeGameWindow()
        {
            Instance = this;
        }

        public override bool AllowUserResizing
        {
            get => MGNative.GetWindowResizable();
            set => MGNative.SetWindowResizable(value);
        }

        public override Rectangle ClientBounds => MGNative.GetWindowClientBounds();

        public override Point Position
        {
            get => MGNative.GetWindowPosition();
            set => MGNative.SetWindowPosition(value);
        }

        public override DisplayOrientation CurrentOrientation => MGNative.GetDisplayOrientation();

        public override IntPtr Handle => MGNative.GetWindowHandle();

        public override string ScreenDeviceName => MGNative.GetWindowTitle();

        public override void BeginScreenDeviceChange(bool willBeFullScreen)
        {

        }

        public override void EndScreenDeviceChange(string screenDeviceName, int clientWidth, int clientHeight)
        {

        }

        protected override void SetTitle(string title)
        {
            MGNative.SetWindowTitle(title);
        }

        protected internal override void SetSupportedOrientations(DisplayOrientation orientations)
        {

        }
    }
}
