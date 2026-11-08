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

// Function: entry_001df6d4
// Address: 0x1df6d4 - 0x1df700
void entry_001df6d4_0x1df6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df6d4_0x1df6d4");
#endif

    switch (ctx->pc) {
        case 0x1df6f0u: goto label_1df6f0;
        default: break;
    }

    ctx->pc = 0x1df6d4u;

    // 0x1df6d4: 0x24829f00  addiu       $v0, $a0, -0x6100
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x1df6d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1df6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df6dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1df6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1df6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1df6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1df6e8: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF6E8u;
    SET_GPR_U32(ctx, 31, 0x1DF6F0u);
    ctx->pc = 0x1DF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6E8u;
    // 0x1df6ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF6E8u, 0x1DF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6F0u;
label_1df6f0:
    // 0x1df6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6F8u;
        // 0x1df6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF700u;
}
