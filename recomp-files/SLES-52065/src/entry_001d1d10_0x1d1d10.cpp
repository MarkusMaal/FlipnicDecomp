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

// Function: entry_001d1d10
// Address: 0x1d1d10 - 0x1d1d5c
void entry_001d1d10_0x1d1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1d10_0x1d1d10");
#endif

    switch (ctx->pc) {
        case 0x1d1d20u: goto label_1d1d20;
        default: break;
    }

    ctx->pc = 0x1d1d10u;

    // 0x1d1d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d14: 0x8c25fd80  lw          $a1, -0x280($at)
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FD80u));
    // 0x1d1d18: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D1D18u;
    SET_GPR_U32(ctx, 31, 0x1D1D20u);
    ctx->pc = 0x1D1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D18u;
    // 0x1d1d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D1D18u, 0x1D1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D20u;
label_1d1d20:
    // 0x1d1d20: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D1D20u;
    {
        const bool branch_taken_0x1d1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d20) {
            ctx->pc = 0x1D1DD8u;
            return;
        }
    }
    ctx->pc = 0x1D1D28u;
    // 0x1d1d28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1d38: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d1d3c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d1d40: 0x8c24fd80  lw          $a0, -0x280($at)
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966656)));
    // 0x1d1d44: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1D44u;
    {
        const bool branch_taken_0x1d1d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1d44) {
            ctx->pc = 0x1D1DACu;
            return;
        }
    }
    ctx->pc = 0x1D1D4Cu;
    // 0x1d1d4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1D4Cu;
    {
        const bool branch_taken_0x1d1d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d4c) {
            ctx->pc = 0x1D1D5Cu;
            return;
        }
    }
    ctx->pc = 0x1D1D54u;
    // 0x1d1d54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D1D54u;
    {
        const bool branch_taken_0x1d1d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D54u;
        // 0x1d1d58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d54) {
            ctx->pc = 0x1D1DDCu;
            return;
        }
    }
    ctx->pc = 0x1D1D5Cu;
}
