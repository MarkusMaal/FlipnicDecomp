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

// Function: entry_001e40e4
// Address: 0x1e40e4 - 0x1e4128
void entry_001e40e4_0x1e40e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40e4_0x1e40e4");
#endif

    switch (ctx->pc) {
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e4108u: goto label_1e4108;
        default: break;
    }

    ctx->pc = 0x1e40e4u;

label_1e40e4:
    // 0x1e40e4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e40e8:
    // 0x1e40e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e40ec:
    // 0x1e40ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e40ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e40f0:
    // 0x1e40f0: 0x320f809  jalr        $t9
label_1e40f4:
    if (ctx->pc == 0x1E40F4u) {
        ctx->pc = 0x1E40F8u;
        goto label_1e40f8;
    }
    ctx->pc = 0x1E40F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E40F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E40F0u, 0x1E40F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E40F8u;
label_1e40f8:
    // 0x1e40f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e40fc:
    if (ctx->pc == 0x1E40FCu) {
        ctx->pc = 0x1E4100u;
        goto label_1e4100;
    }
    ctx->pc = 0x1E40F8u;
    {
        const bool branch_taken_0x1e40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40f8) {
            ctx->pc = 0x1E4128u;
            return;
        }
    }
    ctx->pc = 0x1E4100u;
label_1e4100:
    // 0x1e4100: 0xc07a704  jal         func_1E9C10
label_1e4104:
    if (ctx->pc == 0x1E4104u) {
        ctx->pc = 0x1E4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4100u;
        // 0x1e4104: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4108u;
        goto label_1e4108;
    }
    ctx->pc = 0x1E4100u;
    SET_GPR_U32(ctx, 31, 0x1E4108u);
    ctx->pc = 0x1E4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4100u;
    // 0x1e4104: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E4100u, 0x1E4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4108u;
label_1e4108:
    // 0x1e4108: 0x0  nop
    ctx->pc = 0x1e4108u;
    // NOP
label_1e410c:
    // 0x1e410c: 0x0  nop
    ctx->pc = 0x1e410cu;
    // NOP
label_1e4110:
    // 0x1e4110: 0x0  nop
    ctx->pc = 0x1e4110u;
    // NOP
label_1e4114:
    // 0x1e4114: 0x0  nop
    ctx->pc = 0x1e4114u;
    // NOP
label_1e4118:
    // 0x1e4118: 0x0  nop
    ctx->pc = 0x1e4118u;
    // NOP
label_1e411c:
    // 0x1e411c: 0x0  nop
    ctx->pc = 0x1e411cu;
    // NOP
label_1e4120:
    // 0x1e4120: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4124:
    if (ctx->pc == 0x1E4124u) {
        ctx->pc = 0x1E4128u;
        goto label_fallthrough_0x1e4120;
    }
    ctx->pc = 0x1E4120u;
    {
        const bool branch_taken_0x1e4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4120) {
            ctx->pc = 0x1E4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4108;
        }
    }
label_fallthrough_0x1e4120:
    ctx->pc = 0x1E4128u;
}
