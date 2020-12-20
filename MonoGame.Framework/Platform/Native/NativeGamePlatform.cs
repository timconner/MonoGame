using System;
using System.Runtime.InteropServices;
using System.Security;
using Microsoft.Xna.Framework.Graphics;
using MonoGame.Framework;

namespace Microsoft.Xna.Framework
{
    class NativeGamePlatform : GamePlatform
    {
        private Game _game;

        public NativeGamePlatform(Game game) : base(game)
        {
            _game = game;

            DefaultRunBehavior = MGNative.Initialize();
            Window = new NativeGameWindow();
        }

        public override GameRunBehavior DefaultRunBehavior { get; }

        public override bool BeforeDraw(GameTime gameTime)
        {
            return true;
        }

        public override bool BeforeUpdate(GameTime gameTime)
        {
            return true;
        }

        public override void BeginScreenDeviceChange(bool willBeFullScreen)
        {

        }

        public override void EndScreenDeviceChange(string screenDeviceName, int clientWidth, int clientHeight)
        {

        }

        public override void EnterFullScreen()
        {

        }

        public override void Exit()
        {

        }

        public override void ExitFullScreen()
        {

        }

        public override void RunLoop()
        {
            bool isActive = false;
            while(MGNative.Update(ref isActive))
            {
                IsActive = isActive;

                Game.Tick();
                Threading.Run();
                GraphicsDevice.DisposeContexts();
            }
        }

        public override void StartRunLoop()
        {

        }
    }
}
