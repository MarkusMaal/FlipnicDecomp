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

// Function: FUN_00150e00
// Address: 0x150e00 - 0x150f08
void FUN_00150e00_0x150e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150e00_0x150e00");
#endif

    switch (ctx->pc) {
        case 0x150e40u: goto label_150e40;
        case 0x150e4cu: goto label_150e4c;
        default: break;
    }

    ctx->pc = 0x150e00u;

    // 0x150e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x150e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x150e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150e10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150e18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e1c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x150e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150e20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x150e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e24: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150e28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x150e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150e34: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150e38: 0xc0500a0  jal         func_140280
    ctx->pc = 0x150E38u;
    SET_GPR_U32(ctx, 31, 0x150E40u);
    ctx->pc = 0x150E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E38u;
    // 0x150e3c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140280u, 0x150E38u, 0x150E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E40u;
label_150e40:
    // 0x150e40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150e44: 0xc050098  jal         func_140260
    ctx->pc = 0x150E44u;
    SET_GPR_U32(ctx, 31, 0x150E4Cu);
    ctx->pc = 0x150E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E44u;
    // 0x150e48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140260u, 0x150E44u, 0x150E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E4Cu;
label_150e4c:
    // 0x150e4c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150e50: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x150e54: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x150e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x150e58: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x150e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x150e5c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x150E5Cu;
    {
        const bool branch_taken_0x150e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E5Cu;
        // 0x150e60: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e5c) {
            ctx->pc = 0x150E84u;
            goto label_150e84;
        }
    }
    ctx->pc = 0x150E64u;
    // 0x150e64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E68u;
    {
        const bool branch_taken_0x150e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E68u;
        // 0x150e6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e68) {
            ctx->pc = 0x150E78u;
            goto label_150e78;
        }
    }
    ctx->pc = 0x150E70u;
    // 0x150e70: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150e74: 0x0  nop
    ctx->pc = 0x150e74u;
    // NOP
label_150e78:
    // 0x150e78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x150e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x150e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150ECCu;
            goto label_150ecc;
        }
    }
    ctx->pc = 0x150E84u;
label_150e84:
    // 0x150e84: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x150e84u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x150e88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150e8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150e90: 0x1812  mflo        $v1
    ctx->pc = 0x150e90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x150e94: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150e98: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150e9c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x150ea0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150EACu;
            goto label_150eac;
        }
    }
    ctx->pc = 0x150EA8u;
    // 0x150ea8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_150eac:
    // 0x150eac: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x150eacu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x150eb0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x150eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150eb8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150ebc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150ec0: 0x1010  mfhi        $v0
    ctx->pc = 0x150ec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x150ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150ec8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_150ecc:
    // 0x150ecc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x150eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x150ed0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x150ed4: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x150ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x150ed8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x150ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x150edc: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x150edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x150ee0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x150ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ee4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x150ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x150ee8: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x150ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x150eec: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x150eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x150ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x150ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150f00: 0x3e00008  jr          $ra
    ctx->pc = 0x150F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F00u;
        // 0x150f04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F08u;
}
