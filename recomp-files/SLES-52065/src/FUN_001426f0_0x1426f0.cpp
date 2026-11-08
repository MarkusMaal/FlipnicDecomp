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

// Function: FUN_001426f0
// Address: 0x1426f0 - 0x142730
void FUN_001426f0_0x1426f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001426f0_0x1426f0");
#endif

    ctx->pc = 0x1426f0u;

    // 0x1426f0: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x1426f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1426f4: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1426f8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1426f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1426fc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1426fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x142700: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x142700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x142704: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x142704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x142708: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x142708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14270c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x142710: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x142714: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x142714u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x142718: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x142718u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14271c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14271cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x142720: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x142720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x142724: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x142724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x142728: 0x3e00008  jr          $ra
    ctx->pc = 0x142728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142728u;
        // 0x14272c: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142730u;
}
