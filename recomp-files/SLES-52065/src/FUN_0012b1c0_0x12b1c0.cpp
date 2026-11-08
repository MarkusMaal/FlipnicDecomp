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

// Function: FUN_0012b1c0
// Address: 0x12b1c0 - 0x12b204
void FUN_0012b1c0_0x12b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b1c0_0x12b1c0");
#endif

    switch (ctx->pc) {
        case 0x12b1e0u: goto label_12b1e0;
        default: break;
    }

    ctx->pc = 0x12b1c0u;

    // 0x12b1c0: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x12b1c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x12b1c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1c8: 0xac85014c  sw          $a1, 0x14C($a0)
    ctx->pc = 0x12b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 5));
    // 0x12b1cc: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x12b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x12b1d0: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x12b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x12b1d4: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x12b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x12b1d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B1D8u;
    {
        const bool branch_taken_0x12b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1D8u;
        // 0x12b1dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1d8) {
            ctx->pc = 0x12B1E4u;
            goto label_12b1e4;
        }
    }
    ctx->pc = 0x12B1E0u;
label_12b1e0:
    // 0x12b1e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_12b1e4:
    // 0x12b1e4: 0x0  nop
    ctx->pc = 0x12b1e4u;
    // NOP
    // 0x12b1e8: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12b1ec: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b1f0: 0x0  nop
    ctx->pc = 0x12b1f0u;
    // NOP
    // 0x12b1f4: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B1F4u;
    {
        const bool branch_taken_0x12b1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b1f4) {
            ctx->pc = 0x12B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b1e0;
        }
    }
    ctx->pc = 0x12B1FCu;
    // 0x12b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1FCu;
        // 0x12b200: 0xac870150  sw          $a3, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B204u;
}
