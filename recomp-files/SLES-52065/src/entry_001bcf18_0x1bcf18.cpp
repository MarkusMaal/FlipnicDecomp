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

// Function: entry_001bcf18
// Address: 0x1bcf18 - 0x1bcf40
void entry_001bcf18_0x1bcf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf18_0x1bcf18");
#endif

    switch (ctx->pc) {
        case 0x1bcf20u: goto label_1bcf20;
        default: break;
    }

    ctx->pc = 0x1bcf18u;

    // 0x1bcf18: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCF18u;
    SET_GPR_U32(ctx, 31, 0x1BCF20u);
    ctx->pc = 0x1BCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF18u;
    // 0x1bcf1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCF18u, 0x1BCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF20u;
label_1bcf20:
    // 0x1bcf20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCF20u;
    {
        const bool branch_taken_0x1bcf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF20u;
        // 0x1bcf24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf20) {
            ctx->pc = 0x1BCF44u;
            return;
        }
    }
    ctx->pc = 0x1BCF28u;
    // 0x1bcf28: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcf2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcf2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bcf30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCF30u;
    {
        const bool branch_taken_0x1bcf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF30u;
        // 0x1bcf34: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf30) {
            ctx->pc = 0x1BCF40u;
            return;
        }
    }
    ctx->pc = 0x1BCF38u;
    // 0x1bcf38: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCF38u;
    SET_GPR_U32(ctx, 31, 0x1BCF40u);
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCF38u, 0x1BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF40u;
}
