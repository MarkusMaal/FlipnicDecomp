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

// Function: FUN_001399a0
// Address: 0x1399a0 - 0x1399d4
void FUN_001399a0_0x1399a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001399a0_0x1399a0");
#endif

    ctx->pc = 0x1399a0u;

    // 0x1399a0: 0x90880020  lbu         $t0, 0x20($a0)
    ctx->pc = 0x1399a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1399a4: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x1399a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1399a8: 0x30a70003  andi        $a3, $a1, 0x3
    ctx->pc = 0x1399a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1399ac: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1399acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1399b0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1399b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1399b4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1399b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1399b8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1399b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1399bc: 0xa0860020  sb          $a2, 0x20($a0)
    ctx->pc = 0x1399bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x1399c0: 0x90860020  lbu         $a2, 0x20($a0)
    ctx->pc = 0x1399c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1399c4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1399c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1399c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1399c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1399cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1399CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1399D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399CCu;
        // 0x1399d0: 0xa0830020  sb          $v1, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1399CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1399D4u;
}
