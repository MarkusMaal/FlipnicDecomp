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

// Function: entry_001d179c
// Address: 0x1d179c - 0x1d17d4
void entry_001d179c_0x1d179c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d179c_0x1d179c");
#endif

    ctx->pc = 0x1d179cu;

label_1d179c:
    // 0x1d179c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1d179cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1d17a0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1d17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1d17a4: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1d17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1d17a8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d17ac: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d17b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D179Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d179c;
        }
    }
    ctx->pc = 0x1D17B8u;
    // 0x1d17b8: 0xa08001e0  sb          $zero, 0x1E0($a0)
    ctx->pc = 0x1d17b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d17bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d17bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d17c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d17c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d17c8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1d17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1d17cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17CCu;
        // 0x1d17d0: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D17D4u;
}
