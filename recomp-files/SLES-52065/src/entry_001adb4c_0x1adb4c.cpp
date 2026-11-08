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

// Function: entry_001adb4c
// Address: 0x1adb4c - 0x1adb74
void entry_001adb4c_0x1adb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb4c_0x1adb4c");
#endif

    ctx->pc = 0x1adb4cu;

    // 0x1adb4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adb50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1adb50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adb54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1adb54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adb58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1adb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1adb5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adb60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB74u;
}
