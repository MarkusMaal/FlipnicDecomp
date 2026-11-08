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

// Function: FUN_0015abb0
// Address: 0x15abb0 - 0x15abfc
void FUN_0015abb0_0x15abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015abb0_0x15abb0");
#endif

    switch (ctx->pc) {
        case 0x15abd4u: goto label_15abd4;
        case 0x15abe0u: goto label_15abe0;
        default: break;
    }

    ctx->pc = 0x15abb0u;

    // 0x15abb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15abb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15abb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15abbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15abc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15abc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15abc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15abc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abcc: 0xc05638c  jal         func_158E30
    ctx->pc = 0x15ABCCu;
    SET_GPR_U32(ctx, 31, 0x15ABD4u);
    ctx->pc = 0x15ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ABCCu;
    // 0x15abd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E30u, 0x15ABCCu, 0x15ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ABD4u;
label_15abd4:
    // 0x15abd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15abd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abd8: 0xc05bd20  jal         func_16F480
    ctx->pc = 0x15ABD8u;
    SET_GPR_U32(ctx, 31, 0x15ABE0u);
    ctx->pc = 0x15ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ABD8u;
    // 0x15abdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F480u, 0x15ABD8u, 0x15ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ABE0u;
label_15abe0:
    // 0x15abe0: 0xa24201f7  sb          $v0, 0x1F7($s2)
    ctx->pc = 0x15abe0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 503), (uint8_t)GPR_U32(ctx, 2));
    // 0x15abe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15abe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15abe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15abe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15abec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15abecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15abf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15abf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABF4u;
        // 0x15abf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABFCu;
}
