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

// Function: FUN_0011ed00
// Address: 0x11ed00 - 0x11ed4c
void FUN_0011ed00_0x11ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ed00_0x11ed00");
#endif

    ctx->pc = 0x11ed00u;

    // 0x11ed00: 0xa1bc0  sll         $v1, $t2, 15
    ctx->pc = 0x11ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x11ed04: 0x94b80  sll         $t1, $t1, 14
    ctx->pc = 0x11ed04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
    // 0x11ed08: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x11ed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x11ed0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11ed10: 0x81bc0  sll         $v1, $t0, 15
    ctx->pc = 0x11ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x11ed14: 0x1234025  or          $t0, $t1, $v1
    ctx->pc = 0x11ed14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x11ed18: 0x71e80  sll         $v1, $a3, 26
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    // 0x11ed1c: 0x683825  or          $a3, $v1, $t0
    ctx->pc = 0x11ed1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x11ed20: 0x61f00  sll         $v1, $a2, 28
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
    // 0x11ed24: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x11ed24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x11ed28: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11ed28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ed2c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x11ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x11ed30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ed34: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11ed38: 0x5183e  dsrl32      $v1, $a1, 0
    ctx->pc = 0x11ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ed3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11ed3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11ed40: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11ed40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11ed44: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED44u;
        // 0x11ed48: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ED4Cu;
}
