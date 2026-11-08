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

// Function: FUN_001d2fb8
// Address: 0x1d2fb8 - 0x1d2ff8
void FUN_001d2fb8_0x1d2fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2fb8_0x1d2fb8");
#endif

    ctx->pc = 0x1d2fb8u;

    // 0x1d2fb8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d2fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fbc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d2fc0: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x1d2fc4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d2fc8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1d2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2fcc: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1d2fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2fd0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2fd4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d2fd8: 0x24632f18  addiu       $v1, $v1, 0x2F18
    ctx->pc = 0x1d2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12056));
    // 0x1d2fdc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2FDCu;
    {
        const bool branch_taken_0x1d2fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FDCu;
        // 0x1d2fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fdc) {
            ctx->pc = 0x1D2FF0u;
            goto label_1d2ff0;
        }
    }
    ctx->pc = 0x1D2FE4u;
    // 0x1d2fe4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1d2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1d2fe8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1d2fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fec: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1d2fecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_1d2ff0:
    // 0x1d2ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2FF8u;
}
