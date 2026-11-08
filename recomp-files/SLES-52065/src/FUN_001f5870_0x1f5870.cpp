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

// Function: FUN_001f5870
// Address: 0x1f5870 - 0x1f58cc
void FUN_001f5870_0x1f5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5870_0x1f5870");
#endif

    ctx->pc = 0x1f5870u;

    // 0x1f5870: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5874: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5878: 0x34423830  ori         $v0, $v0, 0x3830
    ctx->pc = 0x1f5878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14384);
    // 0x1f587c: 0x34843820  ori         $a0, $a0, 0x3820
    ctx->pc = 0x1f587cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14368);
    // 0x1f5880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f5880u;
    runtime->Store32(rdram, ctx, 0x10003830u, GPR_U32(ctx, 0));
    // 0x1f5884: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f5884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5888: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f5888u;
    runtime->Store32(rdram, ctx, 0x10003820u, GPR_U32(ctx, 0));
    // 0x1f588c: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x1f588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x1f5890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5894: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5894u;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 2));
    // 0x1f5898: 0x4848e000  cfc2.ni     $t0, $vi28
    ctx->pc = 0x1f5898u;
    SET_GPR_U32(ctx, 8, ctx->vu0_fbrst);
    // 0x1f589c: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x1f589cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x1f58a0: 0x48c8e000  ctc2.ni     $t0, $vi28
    ctx->pc = 0x1f58a0u;
    ctx->vu0_fbrst = GPR_U32(ctx, 8) & 0x00000C0Cu;
    // 0x1f58a4: 0x40f  sync.p
    ctx->pc = 0x1f58a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f58a8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f58ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f58acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f58b0: 0x2484ba80  addiu       $a0, $a0, -0x4580
    ctx->pc = 0x1f58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949504));
    // 0x1f58b4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f58b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1f58b8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1f58b8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21BA80u));
    // 0x1f58bc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1f58bcu;
    runtime->Store128(rdram, ctx, 0x10004000u, GPR_VEC(ctx, 2));
    // 0x1f58c0: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x1f58c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21BA90u));
    // 0x1f58c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F58C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58C4u;
        // 0x1f58c8: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F58C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F58CCu;
}
