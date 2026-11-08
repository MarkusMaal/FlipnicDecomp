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

// Function: entry_0018b00c
// Address: 0x18b00c - 0x18b034
void entry_0018b00c_0x18b00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b00c_0x18b00c");
#endif

    ctx->pc = 0x18b00cu;

    // 0x18b00c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b010: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b014: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b018: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B02Cu;
        // 0x18b030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B034u;
}
