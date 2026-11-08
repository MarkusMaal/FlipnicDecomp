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

// Function: caseD_9
// Address: 0x1c3870 - 0x1c38b4
void caseD_9_0x1c3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1c3870");
#endif

    switch (ctx->pc) {
        case 0x1c387cu: goto label_1c387c;
        case 0x1c3888u: goto label_1c3888;
        case 0x1c3894u: goto label_1c3894;
        default: break;
    }

    ctx->pc = 0x1c3870u;

    // 0x1c3870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3874: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3874u;
    SET_GPR_U32(ctx, 31, 0x1C387Cu);
    ctx->pc = 0x1C3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3874u;
    // 0x1c3878: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3874u, 0x1C387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C387Cu;
label_1c387c:
    // 0x1c387c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3880: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3880u;
    SET_GPR_U32(ctx, 31, 0x1C3888u);
    ctx->pc = 0x1C3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3880u;
    // 0x1c3884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3880u, 0x1C3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3888u;
label_1c3888:
    // 0x1c3888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c388c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C388Cu;
    SET_GPR_U32(ctx, 31, 0x1C3894u);
    ctx->pc = 0x1C3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C388Cu;
    // 0x1c3890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C388Cu, 0x1C3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3894u;
label_1c3894:
    // 0x1c3894: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1c3898: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c389c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C389Cu;
    {
        const bool branch_taken_0x1c389c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C389Cu;
        // 0x1c38a0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c389c) {
            ctx->pc = 0x1C38B4u;
            return;
        }
    }
    ctx->pc = 0x1C38A4u;
    // 0x1c38a4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c38a8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1c38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1c38ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38b0: 0xac22f5f0  sw          $v0, -0xA10($at)
    ctx->pc = 0x1c38b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5F0u, _value); } while (0);
    ctx->pc = 0x1c38b4u;
}
