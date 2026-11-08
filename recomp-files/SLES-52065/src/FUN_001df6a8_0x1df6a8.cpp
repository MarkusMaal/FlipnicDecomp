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

// Function: FUN_001df6a8
// Address: 0x1df6a8 - 0x1df700
void FUN_001df6a8_0x1df6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df6a8_0x1df6a8");
#endif

    switch (ctx->pc) {
        case 0x1df6f0u: goto label_1df6f0;
        default: break;
    }

    ctx->pc = 0x1df6a8u;

    // 0x1df6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df6ac: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x1df6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df6b0: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF6B0u;
    {
        const bool branch_taken_0x1df6b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6B0u;
        // 0x1df6b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6b0) {
            ctx->pc = 0x1DF6D0u;
            goto label_1df6d0;
        }
    }
    ctx->pc = 0x1DF6B8u;
    // 0x1df6b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df6bc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1df6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1df6c0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1df6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1df6c4: 0xac229f00  sw          $v0, -0x6100($at)
    ctx->pc = 0x1df6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942464), GPR_U32(ctx, 2));
    // 0x1df6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF6C8u;
    {
        const bool branch_taken_0x1df6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6C8u;
        // 0x1df6cc: 0x3c040039  lui         $a0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6c8) {
            ctx->pc = 0x1DF6D4u;
            goto label_1df6d4;
        }
    }
    ctx->pc = 0x1DF6D0u;
label_1df6d0:
    // 0x1df6d0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1df6d4:
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
