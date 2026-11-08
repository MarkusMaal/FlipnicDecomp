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

// Function: entry_001cc458
// Address: 0x1cc458 - 0x1cc47c
void entry_001cc458_0x1cc458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc458_0x1cc458");
#endif

    switch (ctx->pc) {
        case 0x1cc460u: goto label_1cc460;
        default: break;
    }

    ctx->pc = 0x1cc458u;

    // 0x1cc458: 0xc0714f0  jal         func_1C53C0
    ctx->pc = 0x1CC458u;
    SET_GPR_U32(ctx, 31, 0x1CC460u);
    ctx->pc = 0x1CC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC458u;
    // 0x1cc45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53C0u, 0x1CC458u, 0x1CC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC460u;
label_1cc460:
    // 0x1cc460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc474: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC474u;
        // 0x1cc478: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC47Cu;
}
