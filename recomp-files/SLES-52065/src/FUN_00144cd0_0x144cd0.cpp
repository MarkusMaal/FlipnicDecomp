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

// Function: FUN_00144cd0
// Address: 0x144cd0 - 0x144d70
void FUN_00144cd0_0x144cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144cd0_0x144cd0");
#endif

    switch (ctx->pc) {
        case 0x144cfcu: goto label_144cfc;
        case 0x144d2cu: goto label_144d2c;
        case 0x144d58u: goto label_144d58;
        default: break;
    }

    ctx->pc = 0x144cd0u;

    // 0x144cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce8: 0x8c8401a4  lw          $a0, 0x1A4($a0)
    ctx->pc = 0x144ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x144cec: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x144CECu;
    {
        const bool branch_taken_0x144cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CECu;
        // 0x144cf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cec) {
            ctx->pc = 0x144D58u;
            goto label_144d58;
        }
    }
    ctx->pc = 0x144CF4u;
    // 0x144cf4: 0xc05135c  jal         func_144D70
    ctx->pc = 0x144CF4u;
    SET_GPR_U32(ctx, 31, 0x144CFCu);
    ctx->pc = 0x144D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D70u, 0x144CF4u, 0x144CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CFCu;
label_144cfc:
    // 0x144cfc: 0x8e3101a4  lw          $s1, 0x1A4($s1)
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x144d00: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x144d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x144d04: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x144d08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144d0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x144d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x144d10: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144d14: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x144d14u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x144d18: 0x0  nop
    ctx->pc = 0x144d18u;
    // NOP
    // 0x144d1c: 0x0  nop
    ctx->pc = 0x144d1cu;
    // NOP
    // 0x144d20: 0x2812  mflo        $a1
    ctx->pc = 0x144d20u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x144d24: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144D24u;
    SET_GPR_U32(ctx, 31, 0x144D2Cu);
    ctx->pc = 0x144D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D24u;
    // 0x144d28: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144D24u, 0x144D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D2Cu;
label_144d2c:
    // 0x144d2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x144d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144d34: 0x243001b  divu        $zero, $s2, $v1
    ctx->pc = 0x144d34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x144d38: 0x0  nop
    ctx->pc = 0x144d38u;
    // NOP
    // 0x144d3c: 0x0  nop
    ctx->pc = 0x144d3cu;
    // NOP
    // 0x144d40: 0x1810  mfhi        $v1
    ctx->pc = 0x144d40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x144d44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144d4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144d50: 0xc04d030  jal         func_1340C0
    ctx->pc = 0x144D50u;
    SET_GPR_U32(ctx, 31, 0x144D58u);
    ctx->pc = 0x144D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D50u;
    // 0x144d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340C0u, 0x144D50u, 0x144D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D58u;
label_144d58:
    // 0x144d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d68: 0x3e00008  jr          $ra
    ctx->pc = 0x144D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D68u;
        // 0x144d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144D70u;
}
