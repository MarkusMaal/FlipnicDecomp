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

// Function: FUN_001402a0
// Address: 0x1402a0 - 0x1403a8
void FUN_001402a0_0x1402a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001402a0_0x1402a0");
#endif

    switch (ctx->pc) {
        case 0x1402e0u: goto label_1402e0;
        case 0x1402ecu: goto label_1402ec;
        default: break;
    }

    ctx->pc = 0x1402a0u;

    // 0x1402a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1402a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1402a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1402a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1402a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1402a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1402ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1402acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1402b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1402b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1402b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1402b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1402b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402bc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1402c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1402c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402c4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1402c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1402c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1402c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1402cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1402ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1402d4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1402d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1402d8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1402D8u;
    SET_GPR_U32(ctx, 31, 0x1402E0u);
    ctx->pc = 0x1402DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402D8u;
    // 0x1402dc: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1402D8u, 0x1402E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402E0u;
label_1402e0:
    // 0x1402e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1402e4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1402E4u;
    SET_GPR_U32(ctx, 31, 0x1402ECu);
    ctx->pc = 0x1402E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402E4u;
    // 0x1402e8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1402E4u, 0x1402ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402ECu;
label_1402ec:
    // 0x1402ec: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1402f0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1402f4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1402f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1402f8: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x1402f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1402fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1402FCu;
    {
        const bool branch_taken_0x1402fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402FCu;
        // 0x140300: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402fc) {
            ctx->pc = 0x140324u;
            goto label_140324;
        }
    }
    ctx->pc = 0x140304u;
    // 0x140304: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x140308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140308u;
    {
        const bool branch_taken_0x140308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140308u;
        // 0x14030c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140308) {
            ctx->pc = 0x140318u;
            goto label_140318;
        }
    }
    ctx->pc = 0x140310u;
    // 0x140310: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x140310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140314: 0x0  nop
    ctx->pc = 0x140314u;
    // NOP
label_140318:
    // 0x140318: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14031c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14031Cu;
    {
        const bool branch_taken_0x14031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14031Cu;
        // 0x140320: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14031c) {
            ctx->pc = 0x14036Cu;
            goto label_14036c;
        }
    }
    ctx->pc = 0x140324u;
label_140324:
    // 0x140324: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x140324u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x140328: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x140328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14032c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140330: 0x1812  mflo        $v1
    ctx->pc = 0x140330u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x140334: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x140338: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x140338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14033c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x14033cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140340: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140340u;
    {
        const bool branch_taken_0x140340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140340) {
            ctx->pc = 0x14034Cu;
            goto label_14034c;
        }
    }
    ctx->pc = 0x140348u;
    // 0x140348: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14034c:
    // 0x14034c: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x14034cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x140350: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140358: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14035c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140360: 0x1010  mfhi        $v0
    ctx->pc = 0x140360u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x140364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140368: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x140368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14036c:
    // 0x14036c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x14036cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x140370: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140374: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x140374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x140378: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14037c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x14037cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x140380: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x140380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140384: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x140384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x140388: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x140388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x14038c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x14038cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x140390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1403a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1403A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1403A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403A0u;
        // 0x1403a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1403A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1403A8u;
}
