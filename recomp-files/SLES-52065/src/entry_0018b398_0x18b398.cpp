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

// Function: entry_0018b398
// Address: 0x18b398 - 0x18b3bc
void entry_0018b398_0x18b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b398_0x18b398");
#endif

    ctx->pc = 0x18b398u;

    // 0x18b398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18b398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b39c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b39cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b3a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b3a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3B4u;
        // 0x18b3b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B3BCu;
}
