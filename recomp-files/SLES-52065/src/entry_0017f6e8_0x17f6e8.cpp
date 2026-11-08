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

// Function: entry_0017f6e8
// Address: 0x17f6e8 - 0x17f708
void entry_0017f6e8_0x17f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6e8_0x17f6e8");
#endif

    switch (ctx->pc) {
        case 0x17f6f4u: goto label_17f6f4;
        default: break;
    }

    ctx->pc = 0x17f6e8u;

    // 0x17f6e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6ec: 0xc05fde0  jal         func_17F780
    ctx->pc = 0x17F6ECu;
    SET_GPR_U32(ctx, 31, 0x17F6F4u);
    ctx->pc = 0x17F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6ECu;
    // 0x17f6f0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F780u, 0x17F6ECu, 0x17F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6F4u;
label_17f6f4:
    // 0x17f6f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17f6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f700: 0x3e00008  jr          $ra
    ctx->pc = 0x17F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F700u;
        // 0x17f704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F708u;
}
