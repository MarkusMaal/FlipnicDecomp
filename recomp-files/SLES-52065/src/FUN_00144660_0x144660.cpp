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

// Function: FUN_00144660
// Address: 0x144660 - 0x144690
void FUN_00144660_0x144660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144660_0x144660");
#endif

    ctx->pc = 0x144660u;

    // 0x144660: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x144664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144664u;
    {
        const bool branch_taken_0x144664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144664u;
        // 0x144668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144664) {
            ctx->pc = 0x144674u;
            goto label_144674;
        }
    }
    ctx->pc = 0x14466Cu;
    // 0x14466c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14466Cu;
    {
        const bool branch_taken_0x14466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14466c) {
            ctx->pc = 0x144688u;
            goto label_144688;
        }
    }
    ctx->pc = 0x144674u;
label_144674:
    // 0x144674: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x144678: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14467c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144684: 0x0  nop
    ctx->pc = 0x144684u;
    // NOP
label_144688:
    // 0x144688: 0x3e00008  jr          $ra
    ctx->pc = 0x144688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144690u;
}
