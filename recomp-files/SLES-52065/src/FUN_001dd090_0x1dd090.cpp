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

// Function: FUN_001dd090
// Address: 0x1dd090 - 0x1dd0c8
void FUN_001dd090_0x1dd090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd090_0x1dd090");
#endif

    ctx->pc = 0x1dd090u;

    // 0x1dd090: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd094: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dd094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dd098: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd09c: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dd0a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd0a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd0a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd0ac: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd0b0: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1dd0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1dd0b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd0b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd0bc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dd0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1dd0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C0u;
        // 0x1dd0c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0C8u;
}
