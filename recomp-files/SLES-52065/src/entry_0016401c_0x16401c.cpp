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

// Function: entry_0016401c
// Address: 0x16401c - 0x16403c
void entry_0016401c_0x16401c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016401c_0x16401c");
#endif

    ctx->pc = 0x16401cu;

    // 0x16401c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16402c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16402cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164034: 0x3e00008  jr          $ra
    ctx->pc = 0x164034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164034u;
        // 0x164038: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16403Cu;
}
