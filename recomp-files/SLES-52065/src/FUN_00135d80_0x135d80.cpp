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

// Function: FUN_00135d80
// Address: 0x135d80 - 0x135da4
void FUN_00135d80_0x135d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135d80_0x135d80");
#endif

    ctx->pc = 0x135d80u;

    // 0x135d80: 0x8f85851c  lw          $a1, -0x7AE4($gp)
    ctx->pc = 0x135d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x135d84: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x135d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x135d88: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x135d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
    // 0x135d8c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x135d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135d90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x135d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x135d94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x135d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x135d98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x135D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D9Cu;
        // 0x135da0: 0xaf83853c  sw          $v1, -0x7AC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135DA4u;
}
