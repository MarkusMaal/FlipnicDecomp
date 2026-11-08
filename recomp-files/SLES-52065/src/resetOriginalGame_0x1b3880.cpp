#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: resetOriginalGame
// Address: 0x1b3880 - 0x1b38d8
void resetOriginalGame_0x1b3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("resetOriginalGame_0x1b3880");
#endif

    switch (ctx->pc) {
        case 0x1b389cu: goto label_1b389c;
        default: break;
    }

    ctx->pc = 0x1b3880u;

    // 0x1b3880: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x1b3880u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
    // 0x1b3884: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1b3884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1b3888: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1b3888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1b388c: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x1b388cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3890: 0xa0800059  sb          $zero, 0x59($a0)
    ctx->pc = 0x1b3890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3894: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x1b3894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3898: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_1b389c:
    // 0x1b389c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b389cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b38a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b38a4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1b38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1b38a8: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x1b38a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38ac: 0xa0600031  sb          $zero, 0x31($v1)
    ctx->pc = 0x1b38acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b0: 0xa0600030  sb          $zero, 0x30($v1)
    ctx->pc = 0x1b38b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b4: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x1b38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1b38b8: 0x248210c8  addiu       $v0, $a0, 0x10C8
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    // 0x1b38bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b38c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B38C0u;
    {
        const bool branch_taken_0x1b38c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b38c0) {
            ctx->pc = 0x1B389Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b389c;
        }
    }
    ctx->pc = 0x1B38C8u;
    // 0x1b38c8: 0xac802780  sw          $zero, 0x2780($a0)
    ctx->pc = 0x1b38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10112), GPR_U32(ctx, 0));
    // 0x1b38cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38D8u;
}
