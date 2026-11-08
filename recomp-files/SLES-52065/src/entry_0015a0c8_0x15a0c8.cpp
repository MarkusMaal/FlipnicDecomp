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

// Function: entry_0015a0c8
// Address: 0x15a0c8 - 0x15a0f0
void entry_0015a0c8_0x15a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0c8_0x15a0c8");
#endif

    ctx->pc = 0x15a0c8u;

    // 0x15a0c8: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x15a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x15a0cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a0d0: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x15a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x15a0d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a0d8: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x15a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x15a0dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0E8u;
        // 0x15a0ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A0F0u;
}
