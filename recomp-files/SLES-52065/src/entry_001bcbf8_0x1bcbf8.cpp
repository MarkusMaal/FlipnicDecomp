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

// Function: entry_001bcbf8
// Address: 0x1bcbf8 - 0x1bcc74
void entry_001bcbf8_0x1bcbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbf8_0x1bcbf8");
#endif

    switch (ctx->pc) {
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc34u: goto label_1bcc34;
        default: break;
    }

    ctx->pc = 0x1bcbf8u;

    // 0x1bcbf8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCBF8u;
    SET_GPR_U32(ctx, 31, 0x1BCC00u);
    ctx->pc = 0x1BCBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBF8u;
    // 0x1bcbfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCBF8u, 0x1BCC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC00u;
label_1bcc00:
    // 0x1bcc00: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCC00u;
    {
        const bool branch_taken_0x1bcc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC00u;
        // 0x1bcc04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc00) {
            ctx->pc = 0x1BCC78u;
            return;
        }
    }
    ctx->pc = 0x1BCC08u;
    // 0x1bcc08: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x1bcc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1bcc0c: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcc10: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcc14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bcc18: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bcc1c: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1bcc1cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bcc20: 0x0  nop
    ctx->pc = 0x1bcc20u;
    // NOP
    // 0x1bcc24: 0x0  nop
    ctx->pc = 0x1bcc24u;
    // NOP
    // 0x1bcc28: 0x2812  mflo        $a1
    ctx->pc = 0x1bcc28u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bcc2c: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC34u);
    ctx->pc = 0x1BCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC2Cu;
    // 0x1bcc30: 0x26a40064  addiu       $a0, $s5, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BCC2Cu, 0x1BCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC34u;
label_1bcc34:
    // 0x1bcc34: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1bcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcc38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcc3c: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x1bcc3cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bcc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcc44: 0x0  nop
    ctx->pc = 0x1bcc44u;
    // NOP
    // 0x1bcc48: 0x2010  mfhi        $a0
    ctx->pc = 0x1bcc48u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bcc4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bcc50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcc54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcc58: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC58u;
    {
        const bool branch_taken_0x1bcc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcc58) {
            ctx->pc = 0x1BCC74u;
            return;
        }
    }
    ctx->pc = 0x1BCC60u;
    // 0x1bcc60: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bcc64: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x1bcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1bcc68: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1bcc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1bcc6c: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x1BCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC6Cu;
    // 0x1bcc70: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BCC6Cu, 0x1BCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC74u;
}
