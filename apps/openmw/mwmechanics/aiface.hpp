#ifndef GAME_MWMECHANICS_AIFACE_H
#define GAME_MWMECHANICS_AIFACE_H

#include "typedaipackage.hpp"

namespace MWMechanics
{
    /// AiPackage which makes an actor face a certain direction.
    class AiFace final : public TypedAiPackage<AiFace> {
        public:
            AiFace(float targetX, float targetY);

            bool execute (const MWWorld::Ptr& actor, CharacterController& characterController, AiState& state, float duration) final;

            int getTypeId() const final;

            unsigned int getPriority() const final;

            bool canCancel() const final { return false; }
            bool shouldCancelPreviousAi() const final { return false; }

        private:
            const float mTargetX;
            const float mTargetY;
    };
}

#endif
