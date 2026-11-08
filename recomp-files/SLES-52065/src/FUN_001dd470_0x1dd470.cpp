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

// Function: FUN_001dd470
// Address: 0x1dd470 - 0x1dd4b4
void FUN_001dd470_0x1dd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd470_0x1dd470");
#endif

    ctx->pc = 0x1dd470u;

    // 0x1dd470: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd474: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1dd474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1dd478: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd47c: 0x24e77330  addiu       $a3, $a3, 0x7330
    ctx->pc = 0x1dd47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29488));
    // 0x1dd480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd484: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1dd488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd48c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd490: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd494: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1dd494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1dd498: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dd498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd49c: 0xac450070  sw          $a1, 0x70($v0)
    ctx->pc = 0x1dd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 5));
    // 0x1dd4a0: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x1dd4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x1dd4a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd4a8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1dd4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1dd4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4ACu;
        // 0x1dd4b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD4B4u;
}
