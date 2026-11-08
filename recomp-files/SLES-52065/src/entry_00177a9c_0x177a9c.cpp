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

// Function: entry_00177a9c
// Address: 0x177a9c - 0x177acc
void entry_00177a9c_0x177a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a9c_0x177a9c");
#endif

    switch (ctx->pc) {
        case 0x177aa4u: goto label_177aa4;
        default: break;
    }

    ctx->pc = 0x177a9cu;

    // 0x177a9c: 0xc05c550  jal         func_171540
    ctx->pc = 0x177A9Cu;
    SET_GPR_U32(ctx, 31, 0x177AA4u);
    ctx->pc = 0x177AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A9Cu;
    // 0x177aa0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x177A9Cu, 0x177AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AA4u;
label_177aa4:
    // 0x177aa4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x177aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177aac: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x177AACu;
    {
        const bool branch_taken_0x177aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AACu;
        // 0x177ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177aac) {
            ctx->pc = 0x177B10u;
            return;
        }
    }
    ctx->pc = 0x177AB4u;
    // 0x177ab4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x177AB4u;
    {
        const bool branch_taken_0x177ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177ab4) {
            ctx->pc = 0x177AE8u;
            return;
        }
    }
    ctx->pc = 0x177ABCu;
    // 0x177abc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177ABCu;
    {
        const bool branch_taken_0x177abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177abc) {
            ctx->pc = 0x177ACCu;
            return;
        }
    }
    ctx->pc = 0x177AC4u;
    // 0x177ac4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x177AC4u;
    {
        const bool branch_taken_0x177ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ac4) {
            ctx->pc = 0x177B30u;
            return;
        }
    }
    ctx->pc = 0x177ACCu;
}
