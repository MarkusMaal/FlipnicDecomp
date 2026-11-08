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

// Function: entry_00106a4c
// Address: 0x106a4c - 0x106a6c
void entry_00106a4c_0x106a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106a4c_0x106a4c");
#endif

    switch (ctx->pc) {
        case 0x106a58u: goto label_106a58;
        default: break;
    }

    ctx->pc = 0x106a4cu;

    // 0x106a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a50: 0xc05a200  jal         func_168800
    ctx->pc = 0x106A50u;
    SET_GPR_U32(ctx, 31, 0x106A58u);
    ctx->pc = 0x106A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A50u;
    // 0x106a54: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106A50u, 0x106A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A58u;
label_106a58:
    // 0x106a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a64: 0x3e00008  jr          $ra
    ctx->pc = 0x106A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A64u;
        // 0x106a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A6Cu;
}
