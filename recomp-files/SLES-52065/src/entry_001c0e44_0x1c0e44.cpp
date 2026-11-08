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

// Function: entry_001c0e44
// Address: 0x1c0e44 - 0x1c0e94
void entry_001c0e44_0x1c0e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0e44_0x1c0e44");
#endif

    switch (ctx->pc) {
        case 0x1c0e54u: goto label_1c0e54;
        default: break;
    }

    ctx->pc = 0x1c0e44u;

    // 0x1c0e44: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c0e48: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x1c0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1c0e4c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C0E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E54u);
    ctx->pc = 0x1C0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E4Cu;
    // 0x1c0e50: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C0E4Cu, 0x1C0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E54u;
label_1c0e54:
    // 0x1c0e54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0e58: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c0e5c: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1c0e60: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c0e60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0e68: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1c0e6c: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1C0E6Cu;
    {
        const bool branch_taken_0x1c0e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E6Cu;
        // 0x1c0e70: 0x5f0c0  sll         $fp, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e6c) {
            ctx->pc = 0x1C10C8u;
            return;
        }
    }
    ctx->pc = 0x1C0E74u;
    // 0x1c0e74: 0x7e1023  subu        $v0, $v1, $fp
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1c0e78: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c0e7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0e80: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1c0e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c0e84: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0E84u;
    {
        const bool branch_taken_0x1c0e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E84u;
        // 0x1c0e88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e84) {
            ctx->pc = 0x1C0E94u;
            return;
        }
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0e90: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x1c0e94u;
}
