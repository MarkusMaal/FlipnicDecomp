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

// Function: FUN_00150f10
// Address: 0x150f10 - 0x151018
void FUN_00150f10_0x150f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150f10_0x150f10");
#endif

    switch (ctx->pc) {
        case 0x150f50u: goto label_150f50;
        case 0x150f5cu: goto label_150f5c;
        default: break;
    }

    ctx->pc = 0x150f10u;

    // 0x150f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150f14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x150f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x150f18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150f20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150f28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f2c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x150f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150f30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x150f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f34: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x150f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150f38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150f44: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x150f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150f48: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x150F48u;
    SET_GPR_U32(ctx, 31, 0x150F50u);
    ctx->pc = 0x150F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F48u;
    // 0x150f4c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x150F48u, 0x150F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F50u;
label_150f50:
    // 0x150f50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x150f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150f54: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x150F54u;
    SET_GPR_U32(ctx, 31, 0x150F5Cu);
    ctx->pc = 0x150F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F54u;
    // 0x150f58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x150F54u, 0x150F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F5Cu;
label_150f5c:
    // 0x150f5c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150f60: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x150f64: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x150f68: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x150f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x150f6c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x150F6Cu;
    {
        const bool branch_taken_0x150f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F6Cu;
        // 0x150f70: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f6c) {
            ctx->pc = 0x150F94u;
            goto label_150f94;
        }
    }
    ctx->pc = 0x150F74u;
    // 0x150f74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x150f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150F78u;
    {
        const bool branch_taken_0x150f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F78u;
        // 0x150f7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f78) {
            ctx->pc = 0x150F88u;
            goto label_150f88;
        }
    }
    ctx->pc = 0x150F80u;
    // 0x150f80: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150f84: 0x0  nop
    ctx->pc = 0x150f84u;
    // NOP
label_150f88:
    // 0x150f88: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x150f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x150f8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x150F8Cu;
    {
        const bool branch_taken_0x150f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F8Cu;
        // 0x150f90: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f8c) {
            ctx->pc = 0x150FDCu;
            goto label_150fdc;
        }
    }
    ctx->pc = 0x150F94u;
label_150f94:
    // 0x150f94: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x150f94u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x150f98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x150f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150f9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150fa0: 0x1812  mflo        $v1
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x150fa4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x150fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150fa8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150fac: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x150fb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150FB0u;
    {
        const bool branch_taken_0x150fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150fb0) {
            ctx->pc = 0x150FBCu;
            goto label_150fbc;
        }
    }
    ctx->pc = 0x150FB8u;
    // 0x150fb8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_150fbc:
    // 0x150fbc: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x150fbcu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x150fc0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x150fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150fc8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150fcc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150fd0: 0x1010  mfhi        $v0
    ctx->pc = 0x150fd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x150fd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150fd8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x150fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_150fdc:
    // 0x150fdc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x150fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x150fe0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x150fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x150fe4: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x150fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x150fe8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x150fec: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x150fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x150ff0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x150ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ff4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x150ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x150ff8: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x150ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x150ffc: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x150ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x151000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15100c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15100cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151010: 0x3e00008  jr          $ra
    ctx->pc = 0x151010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151010u;
        // 0x151014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151018u;
}
