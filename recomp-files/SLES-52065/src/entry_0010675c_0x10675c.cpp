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

// Function: entry_0010675c
// Address: 0x10675c - 0x10677c
void entry_0010675c_0x10675c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010675c_0x10675c");
#endif

    switch (ctx->pc) {
        case 0x106768u: goto label_106768;
        default: break;
    }

    ctx->pc = 0x10675cu;

    // 0x10675c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10675cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106760: 0xc05a200  jal         func_168800
    ctx->pc = 0x106760u;
    SET_GPR_U32(ctx, 31, 0x106768u);
    ctx->pc = 0x106764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106760u;
    // 0x106764: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106760u, 0x106768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106768u;
label_106768:
    // 0x106768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10676c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106774: 0x3e00008  jr          $ra
    ctx->pc = 0x106774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106774u;
        // 0x106778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10677Cu;
}
