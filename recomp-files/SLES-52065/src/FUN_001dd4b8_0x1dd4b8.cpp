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

// Function: FUN_001dd4b8
// Address: 0x1dd4b8 - 0x1dd4e8
void FUN_001dd4b8_0x1dd4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd4b8_0x1dd4b8");
#endif

    ctx->pc = 0x1dd4b8u;

    // 0x1dd4b8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd4bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd4c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd4c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd4cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd4d0: 0x24217330  addiu       $at, $at, 0x7330
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29488));
    // 0x1dd4d4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1dd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1dd4d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd4dc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1dd4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dd4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4E0u;
        // 0x1dd4e4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD4E8u;
}
