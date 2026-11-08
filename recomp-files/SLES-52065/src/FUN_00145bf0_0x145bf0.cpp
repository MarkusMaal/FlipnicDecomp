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

// Function: FUN_00145bf0
// Address: 0x145bf0 - 0x145cf8
void FUN_00145bf0_0x145bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145bf0_0x145bf0");
#endif

    switch (ctx->pc) {
        case 0x145c30u: goto label_145c30;
        case 0x145c3cu: goto label_145c3c;
        default: break;
    }

    ctx->pc = 0x145bf0u;

    // 0x145bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x145bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x145c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x145c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c0c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x145c10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x145c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c14: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x145c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x145c18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x145c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145c24: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x145c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145c28: 0xc0500a0  jal         func_140280
    ctx->pc = 0x145C28u;
    SET_GPR_U32(ctx, 31, 0x145C30u);
    ctx->pc = 0x145C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C28u;
    // 0x145c2c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140280u, 0x145C28u, 0x145C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C30u;
label_145c30:
    // 0x145c30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c34: 0xc050098  jal         func_140260
    ctx->pc = 0x145C34u;
    SET_GPR_U32(ctx, 31, 0x145C3Cu);
    ctx->pc = 0x145C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C34u;
    // 0x145c38: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140260u, 0x145C34u, 0x145C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C3Cu;
label_145c3c:
    // 0x145c3c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145c40: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x145c44: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x145c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x145c48: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x145c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x145c4c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x145C4Cu;
    {
        const bool branch_taken_0x145c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C4Cu;
        // 0x145c50: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c4c) {
            ctx->pc = 0x145C74u;
            goto label_145c74;
        }
    }
    ctx->pc = 0x145C54u;
    // 0x145c54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x145c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145c58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145C58u;
    {
        const bool branch_taken_0x145c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C58u;
        // 0x145c5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c58) {
            ctx->pc = 0x145C68u;
            goto label_145c68;
        }
    }
    ctx->pc = 0x145C60u;
    // 0x145c60: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145c64: 0x0  nop
    ctx->pc = 0x145c64u;
    // NOP
label_145c68:
    // 0x145c68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x145c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x145c6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x145C6Cu;
    {
        const bool branch_taken_0x145c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C6Cu;
        // 0x145c70: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c6c) {
            ctx->pc = 0x145CBCu;
            goto label_145cbc;
        }
    }
    ctx->pc = 0x145C74u;
label_145c74:
    // 0x145c74: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x145c74u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x145c78: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x145c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x145c7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145c80: 0x1812  mflo        $v1
    ctx->pc = 0x145c80u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x145c84: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x145c88: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145c8c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x145c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x145c90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x145C90u;
    {
        const bool branch_taken_0x145c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145c90) {
            ctx->pc = 0x145C9Cu;
            goto label_145c9c;
        }
    }
    ctx->pc = 0x145C98u;
    // 0x145c98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x145c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_145c9c:
    // 0x145c9c: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x145c9cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x145ca0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x145ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x145ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145ca8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x145ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145cac: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x145cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145cb0: 0x1010  mfhi        $v0
    ctx->pc = 0x145cb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x145cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145cb8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x145cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_145cbc:
    // 0x145cbc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x145cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x145cc0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x145cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x145cc4: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x145cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x145cc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x145cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x145ccc: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x145cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x145cd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x145cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145cd4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x145cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x145cd8: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x145cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x145cdc: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x145cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x145ce0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x145CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF0u;
        // 0x145cf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145CF8u;
}
