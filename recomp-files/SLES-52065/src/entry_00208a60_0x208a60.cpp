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

// Function: entry_00208a60
// Address: 0x208a60 - 0x208a80
void entry_00208a60_0x208a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a60_0x208a60");
#endif

    ctx->pc = 0x208a60u;

    // 0x208a60: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x208a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x208a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208a68: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x208a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208a70: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x208a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x208a74: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x208a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x208a78: 0x3e00008  jr          $ra
    ctx->pc = 0x208A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A78u;
        // 0x208a7c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A80u;
}
