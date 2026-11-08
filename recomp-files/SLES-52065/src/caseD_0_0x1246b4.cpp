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

// Function: caseD_0
// Address: 0x1246b4 - 0x1246f4
void caseD_0_0x1246b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1246b4");
#endif

    switch (ctx->pc) {
        case 0x1246ccu: goto label_1246cc;
        case 0x1246d8u: goto label_1246d8;
        default: break;
    }

    ctx->pc = 0x1246b4u;

    // 0x1246b4: 0x0  nop
    ctx->pc = 0x1246b4u;
    // NOP
    // 0x1246b8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1246b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1246bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1246bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1246c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c4: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x1246C4u;
    SET_GPR_U32(ctx, 31, 0x1246CCu);
    ctx->pc = 0x1246C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246C4u;
    // 0x1246c8: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x1246C4u, 0x1246CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246CCu;
label_1246cc:
    // 0x1246cc: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1246d0: 0xc048148  jal         func_120520
    ctx->pc = 0x1246D0u;
    SET_GPR_U32(ctx, 31, 0x1246D8u);
    ctx->pc = 0x1246D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246D0u;
    // 0x1246d4: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1246D0u, 0x1246D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246D8u;
label_1246d8:
    // 0x1246d8: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1246dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1246dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1246e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1246e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1246e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1246e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1246e8: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1246e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1246ec: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1246ECu;
    {
        const bool branch_taken_0x1246ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ECu;
        // 0x1246f0: 0x26b50090  addiu       $s5, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246ec) {
            ctx->pc = 0x124584u;
            return;
        }
    }
    ctx->pc = 0x1246F4u;
}
