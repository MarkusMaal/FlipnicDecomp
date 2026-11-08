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

// Function: entry_0018acf4
// Address: 0x18acf4 - 0x18ad18
void entry_0018acf4_0x18acf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acf4_0x18acf4");
#endif

    switch (ctx->pc) {
        case 0x18acfcu: goto label_18acfc;
        default: break;
    }

    ctx->pc = 0x18acf4u;

    // 0x18acf4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x18ACF4u;
    SET_GPR_U32(ctx, 31, 0x18ACFCu);
    ctx->pc = 0x18ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACF4u;
    // 0x18acf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x18ACF4u, 0x18ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACFCu;
label_18acfc:
    // 0x18acfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ad00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ad00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ad04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ad04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ad08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ad08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ad0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ad0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad10: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD18u;
}
