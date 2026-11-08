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

// Function: entry_001ddf10
// Address: 0x1ddf10 - 0x1ddf78
void entry_001ddf10_0x1ddf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf10_0x1ddf10");
#endif

    switch (ctx->pc) {
        case 0x1ddf48u: goto label_1ddf48;
        default: break;
    }

    ctx->pc = 0x1ddf10u;

    // 0x1ddf10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ddf14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ddf18: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DDF18u;
    {
        const bool branch_taken_0x1ddf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf18) {
            ctx->pc = 0x1DDF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF18u;
            // 0x1ddf1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            return;
        }
    }
    ctx->pc = 0x1DDF20u;
    // 0x1ddf20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ddf24: 0x54540018  bnel        $v0, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF24u;
            // 0x1ddf28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            return;
        }
    }
    ctx->pc = 0x1DDF2Cu;
    // 0x1ddf2c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ddf30: 0x54530015  bnel        $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDF30u;
    {
        const bool branch_taken_0x1ddf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ddf30) {
            ctx->pc = 0x1DDF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF30u;
            // 0x1ddf34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            return;
        }
    }
    ctx->pc = 0x1DDF38u;
    // 0x1ddf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf40: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1DDF40u;
    SET_GPR_U32(ctx, 31, 0x1DDF48u);
    ctx->pc = 0x1DDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF40u;
    // 0x1ddf44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1DDF40u, 0x1DDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF48u;
label_1ddf48:
    // 0x1ddf48: 0x2123004  sllv        $a2, $s2, $s0
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x1ddf4c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1ddf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddf50: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1ddf50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf54: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddf54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddf58: 0x2604ffe8  addiu       $a0, $s0, -0x18
    ctx->pc = 0x1ddf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1ddf5c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1ddf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1ddf60: 0x922804  sllv        $a1, $s2, $a0
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x1ddf64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDF64u;
    {
        const bool branch_taken_0x1ddf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF64u;
        // 0x1ddf68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf64) {
            ctx->pc = 0x1DDF78u;
            return;
        }
    }
    ctx->pc = 0x1DDF6Cu;
    // 0x1ddf6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDF6Cu;
    {
        const bool branch_taken_0x1ddf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF6Cu;
        // 0x1ddf70: 0x861025  or          $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf6c) {
            ctx->pc = 0x1DDF7Cu;
            return;
        }
    }
    ctx->pc = 0x1DDF74u;
    // 0x1ddf74: 0x0  nop
    ctx->pc = 0x1ddf74u;
    // NOP
    ctx->pc = 0x1ddf78u;
}
