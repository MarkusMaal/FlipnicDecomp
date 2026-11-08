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

// Function: entry_0016dd40
// Address: 0x16dd40 - 0x16dd68
void entry_0016dd40_0x16dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd40_0x16dd40");
#endif

    switch (ctx->pc) {
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd60u: goto label_16dd60;
        default: break;
    }

    ctx->pc = 0x16dd40u;

    // 0x16dd40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dd44: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DD44u;
    {
        const bool branch_taken_0x16dd44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD44u;
        // 0x16dd48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd44) {
            ctx->pc = 0x16DD6Cu;
            return;
        }
    }
    ctx->pc = 0x16DD4Cu;
    // 0x16dd4c: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x16DD4Cu;
    SET_GPR_U32(ctx, 31, 0x16DD54u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x16DD4Cu, 0x16DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD54u;
label_16dd54:
    // 0x16dd54: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16dd58: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x16DD58u;
    SET_GPR_U32(ctx, 31, 0x16DD60u);
    ctx->pc = 0x16DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD58u;
    // 0x16dd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x16DD58u, 0x16DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16dd64: 0xae620224  sw          $v0, 0x224($s3)
    ctx->pc = 0x16dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x16dd68u;
}
