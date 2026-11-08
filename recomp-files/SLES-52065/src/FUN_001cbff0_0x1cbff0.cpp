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

// Function: FUN_001cbff0
// Address: 0x1cbff0 - 0x1cc028
void FUN_001cbff0_0x1cbff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbff0_0x1cbff0");
#endif

    ctx->pc = 0x1cbff0u;

    // 0x1cbff0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbff4: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cbff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbff8: 0x8c28ca84  lw          $t0, -0x357C($at)
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbffc: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc000: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc004: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cc008: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cc008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc00c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc010: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cc018: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1cc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1cc01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc020: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC020u;
        // 0x1cc024: 0xac660068  sw          $a2, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC028u;
}
