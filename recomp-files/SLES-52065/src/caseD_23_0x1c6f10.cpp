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

// Function: caseD_23
// Address: 0x1c6f10 - 0x1c6f3c
void caseD_23_0x1c6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_23_0x1c6f10");
#endif

    switch (ctx->pc) {
        case 0x1c6f18u: goto label_1c6f18;
        default: break;
    }

    ctx->pc = 0x1c6f10u;

    // 0x1c6f10: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C6F10u;
    SET_GPR_U32(ctx, 31, 0x1C6F18u);
    ctx->pc = 0x1C6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F10u;
    // 0x1c6f14: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C6F10u, 0x1C6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F18u;
label_1c6f18:
    // 0x1c6f18: 0x1440021a  bnez        $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x1C6F18u;
    {
        const bool branch_taken_0x1c6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F18u;
        // 0x1c6f1c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f18) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6F20u;
    // 0x1c6f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6f24: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c6f28: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c6f2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F2Cu;
        // 0x1c6f30: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C6F3Cu;
            return;
        }
    }
    ctx->pc = 0x1C6F34u;
    // 0x1c6f34: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x1C6F34u;
    {
        const bool branch_taken_0x1c6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F34u;
        // 0x1c6f38: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f34) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6F3Cu;
}
