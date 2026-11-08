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

// Function: FUN_001edc10
// Address: 0x1edc10 - 0x1edc4c
void FUN_001edc10_0x1edc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edc10_0x1edc10");
#endif

    switch (ctx->pc) {
        case 0x1edc40u: goto label_1edc40;
        default: break;
    }

    ctx->pc = 0x1edc10u;

    // 0x1edc10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1edc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1edc14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1edc18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edc20: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1edc20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1edc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edc2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1edc2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1edc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc34: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1edc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc38: 0xc07b6b6  jal         func_1EDAD8
    ctx->pc = 0x1EDC38u;
    SET_GPR_U32(ctx, 31, 0x1EDC40u);
    ctx->pc = 0x1EDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC38u;
    // 0x1edc3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDAD8u, 0x1EDC38u, 0x1EDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC40u;
label_1edc40:
    // 0x1edc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC44u;
        // 0x1edc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC4Cu;
}
