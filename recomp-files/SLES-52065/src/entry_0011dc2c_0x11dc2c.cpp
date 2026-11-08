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

// Function: entry_0011dc2c
// Address: 0x11dc2c - 0x11dc74
void entry_0011dc2c_0x11dc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc2c_0x11dc2c");
#endif

    switch (ctx->pc) {
        case 0x11dc5cu: goto label_11dc5c;
        default: break;
    }

    ctx->pc = 0x11dc2cu;

    // 0x11dc2c: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x11dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11dc30: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x11dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x11dc34: 0xae51004c  sw          $s1, 0x4C($s2)
    ctx->pc = 0x11dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 17));
    // 0x11dc38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11dc3c: 0xae560050  sw          $s6, 0x50($s2)
    ctx->pc = 0x11dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 22));
    // 0x11dc40: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x11dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x11dc44: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x11dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    // 0x11dc48: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x11dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x11dc4c: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x11dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x11dc50: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x11dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x11dc54: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11DC54u;
    SET_GPR_U32(ctx, 31, 0x11DC5Cu);
    ctx->pc = 0x11DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC54u;
    // 0x11dc58: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11DC54u, 0x11DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC5Cu;
label_11dc5c:
    // 0x11dc5c: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x11dc60: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x11dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x11dc64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DC64u;
    {
        const bool branch_taken_0x11dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC64u;
        // 0x11dc68: 0xae720100  sw          $s2, 0x100($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc64) {
            ctx->pc = 0x11DC74u;
            return;
        }
    }
    ctx->pc = 0x11DC6Cu;
    // 0x11dc6c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11DC6Cu;
    SET_GPR_U32(ctx, 31, 0x11DC74u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11DC6Cu, 0x11DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC74u;
}
