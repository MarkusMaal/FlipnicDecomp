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

// Function: FUN_00128f30
// Address: 0x128f30 - 0x128f80
void FUN_00128f30_0x128f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128f30_0x128f30");
#endif

    ctx->pc = 0x128f30u;

    // 0x128f30: 0x8c850128  lw          $a1, 0x128($a0)
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x128f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f38: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x128f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x128f3c: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x128f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x128f40: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x128F40u;
    {
        const bool branch_taken_0x128f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x128f40) {
            ctx->pc = 0x128F68u;
            goto label_128f68;
        }
    }
    ctx->pc = 0x128F48u;
    // 0x128f48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x128F48u;
    {
        const bool branch_taken_0x128f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f48) {
            ctx->pc = 0x128F58u;
            goto label_128f58;
        }
    }
    ctx->pc = 0x128F50u;
    // 0x128f50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128F50u;
    {
        const bool branch_taken_0x128f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f50) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F58u;
label_128f58:
    // 0x128f58: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x128f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x128f5c: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x128f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x128f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128F60u;
    {
        const bool branch_taken_0x128f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F60u;
        // 0x128f64: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f60) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F68u;
label_128f68:
    // 0x128f68: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x128f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x128f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x128f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128f70: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x128f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x128f74: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x128f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_128f78:
    // 0x128f78: 0x3e00008  jr          $ra
    ctx->pc = 0x128F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128F80u;
}
