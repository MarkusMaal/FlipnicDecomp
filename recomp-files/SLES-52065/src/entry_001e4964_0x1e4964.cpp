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

// Function: entry_001e4964
// Address: 0x1e4964 - 0x1e4994
void entry_001e4964_0x1e4964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4964_0x1e4964");
#endif

    ctx->pc = 0x1e4964u;

    // 0x1e4964: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e4964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e4968: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e496c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e496cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4970: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e497c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e497cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e498c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E498Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E498Cu;
        // 0x1e4990: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E498Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4994u;
}
