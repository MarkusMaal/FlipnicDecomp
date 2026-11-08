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

// Function: entry_0014e6c4
// Address: 0x14e6c4 - 0x14e704
void entry_0014e6c4_0x14e6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e6c4_0x14e6c4");
#endif

    switch (ctx->pc) {
        case 0x14e6dcu: goto label_14e6dc;
        default: break;
    }

    ctx->pc = 0x14e6c4u;

    // 0x14e6c4: 0x0  nop
    ctx->pc = 0x14e6c4u;
    // NOP
    // 0x14e6c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14e6cc: 0x1095000d  beq         $a0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x14E6CCu;
    {
        const bool branch_taken_0x14e6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6CCu;
        // 0x14e6d0: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6cc) {
            ctx->pc = 0x14E704u;
            return;
        }
    }
    ctx->pc = 0x14E6D4u;
    // 0x14e6d4: 0xc0539ec  jal         func_14E7B0
    ctx->pc = 0x14E6D4u;
    SET_GPR_U32(ctx, 31, 0x14E6DCu);
    ctx->pc = 0x14E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6D4u;
    // 0x14e6d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7B0u, 0x14E6D4u, 0x14E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6DCu;
label_14e6dc:
    // 0x14e6dc: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e6e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e6e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e6e8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14e6ec: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x14e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x14e6f0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e6f4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e6f8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14e6fc: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x14e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x14e700: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x14e704u;
}
