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

// Function: entry_0011ad40
// Address: 0x11ad40 - 0x11ad78
void entry_0011ad40_0x11ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad40_0x11ad40");
#endif

    switch (ctx->pc) {
        case 0x11ad50u: goto label_11ad50;
        default: break;
    }

    ctx->pc = 0x11ad40u;

    // 0x11ad40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ad40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad48: 0xc046d68  jal         func_11B5A0
    ctx->pc = 0x11AD48u;
    SET_GPR_U32(ctx, 31, 0x11AD50u);
    ctx->pc = 0x11AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD48u;
    // 0x11ad4c: 0x260603c4  addiu       $a2, $s0, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B5A0u, 0x11AD48u, 0x11AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD50u;
label_11ad50:
    // 0x11ad50: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x11ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ad54: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11ad58: 0xa06403c4  sb          $a0, 0x3C4($v1)
    ctx->pc = 0x11ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 964), (uint8_t)GPR_U32(ctx, 4));
    // 0x11ad5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad60: 0xa06003c5  sb          $zero, 0x3C5($v1)
    ctx->pc = 0x11ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 965), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ad64: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x11ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x11ad68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD68u;
    {
        const bool branch_taken_0x11ad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD68u;
        // 0x11ad6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad68) {
            ctx->pc = 0x11AD78u;
            return;
        }
    }
    ctx->pc = 0x11AD70u;
    // 0x11ad70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11AD70u;
    {
        const bool branch_taken_0x11ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD70u;
        // 0x11ad74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad70) {
            ctx->pc = 0x11ADB0u;
            return;
        }
    }
    ctx->pc = 0x11AD78u;
}
