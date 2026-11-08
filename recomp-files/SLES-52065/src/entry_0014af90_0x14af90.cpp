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

// Function: entry_0014af90
// Address: 0x14af90 - 0x14afd8
void entry_0014af90_0x14af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af90_0x14af90");
#endif

    ctx->pc = 0x14af90u;

    // 0x14af90: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14af94: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14af98: 0x14c5ffb0  bne         $a2, $a1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x14AF98u;
    {
        const bool branch_taken_0x14af98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x14af98) {
            ctx->pc = 0x14AE5Cu;
            return;
        }
    }
    ctx->pc = 0x14AFA0u;
    // 0x14afa0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14afa4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14afa8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x14afac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14afacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14afb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14afb4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14afb8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x14afbc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x14afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x14afc0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14afc4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x14afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x14afc8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x14afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x14afcc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14afccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x14afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFD0u;
        // 0x14afd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AFD8u;
}
