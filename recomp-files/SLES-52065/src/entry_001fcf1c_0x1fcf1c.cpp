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

// Function: entry_001fcf1c
// Address: 0x1fcf1c - 0x1fcf74
void entry_001fcf1c_0x1fcf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcf1c_0x1fcf1c");
#endif

    switch (ctx->pc) {
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf70u: goto label_1fcf70;
        default: break;
    }

    ctx->pc = 0x1fcf1cu;

    // 0x1fcf1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fcf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcf20: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCF20u;
    {
        const bool branch_taken_0x1fcf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF20u;
        // 0x1fcf24: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf20) {
            ctx->pc = 0x1FCF7Cu;
            return;
        }
    }
    ctx->pc = 0x1FCF28u;
    // 0x1fcf28: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FCF28u;
    SET_GPR_U32(ctx, 31, 0x1FCF30u);
    ctx->pc = 0x1FCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF28u;
    // 0x1fcf2c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FCF28u, 0x1FCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF30u;
label_1fcf30:
    // 0x1fcf30: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FCF30u;
    {
        const bool branch_taken_0x1fcf30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF30u;
        // 0x1fcf34: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf30) {
            ctx->pc = 0x1FCF80u;
            return;
        }
    }
    ctx->pc = 0x1FCF38u;
    // 0x1fcf38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcf3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf40: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fcf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcf44: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCF44u;
    SET_GPR_U32(ctx, 31, 0x1FCF4Cu);
    ctx->pc = 0x1FCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF44u;
    // 0x1fcf48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCF44u, 0x1FCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF4Cu;
label_1fcf4c:
    // 0x1fcf4c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fcf50: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1fcf54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCF54u;
    {
        const bool branch_taken_0x1fcf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF54u;
        // 0x1fcf58: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf54) {
            ctx->pc = 0x1FCF74u;
            return;
        }
    }
    ctx->pc = 0x1FCF5Cu;
    // 0x1fcf5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fcf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcf60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf64: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fcf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcf68: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCF68u;
    SET_GPR_U32(ctx, 31, 0x1FCF70u);
    ctx->pc = 0x1FCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF68u;
    // 0x1fcf6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCF68u, 0x1FCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF70u;
label_1fcf70:
    // 0x1fcf70: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcf74u;
}
