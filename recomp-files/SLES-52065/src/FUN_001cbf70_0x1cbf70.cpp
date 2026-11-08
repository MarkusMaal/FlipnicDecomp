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

// Function: FUN_001cbf70
// Address: 0x1cbf70 - 0x1cbfa8
void FUN_001cbf70_0x1cbf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbf70_0x1cbf70");
#endif

    ctx->pc = 0x1cbf70u;

    // 0x1cbf70: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbf74: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cbf74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbf78: 0x8c28ca84  lw          $t0, -0x357C($at)
    ctx->pc = 0x1cbf78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbf7c: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1cbf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cbf80: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbf84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cbf88: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cbf8c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbf90: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbf94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cbf94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cbf98: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1cbf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1cbf9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cbfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA0u;
        // 0x1cbfa4: 0xac66006c  sw          $a2, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBFA8u;
}
