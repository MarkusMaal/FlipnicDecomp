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

// Function: FUN_00140150
// Address: 0x140150 - 0x140258
void FUN_00140150_0x140150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140150_0x140150");
#endif

    switch (ctx->pc) {
        case 0x140190u: goto label_140190;
        case 0x14019cu: goto label_14019c;
        default: break;
    }

    ctx->pc = 0x140150u;

    // 0x140150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x140150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x140154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14015c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140160: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x140168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14016c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140170: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x140170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140174: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x140174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x140178: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x140178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14017c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140184: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x140184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140188: 0xc0500a0  jal         func_140280
    ctx->pc = 0x140188u;
    SET_GPR_U32(ctx, 31, 0x140190u);
    ctx->pc = 0x14018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140188u;
    // 0x14018c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140280u, 0x140188u, 0x140190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140190u;
label_140190:
    // 0x140190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x140190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140194: 0xc050098  jal         func_140260
    ctx->pc = 0x140194u;
    SET_GPR_U32(ctx, 31, 0x14019Cu);
    ctx->pc = 0x140198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140194u;
    // 0x140198: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140260u, 0x140194u, 0x14019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14019Cu;
label_14019c:
    // 0x14019c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x14019cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1401a0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1401a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1401a4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1401a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1401a8: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x1401a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1401ac: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1401ACu;
    {
        const bool branch_taken_0x1401ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401ACu;
        // 0x1401b0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401ac) {
            ctx->pc = 0x1401D4u;
            goto label_1401d4;
        }
    }
    ctx->pc = 0x1401B4u;
    // 0x1401b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1401b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1401B8u;
    {
        const bool branch_taken_0x1401b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401B8u;
        // 0x1401bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401b8) {
            ctx->pc = 0x1401C8u;
            goto label_1401c8;
        }
    }
    ctx->pc = 0x1401C0u;
    // 0x1401c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1401c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1401c4: 0x0  nop
    ctx->pc = 0x1401c4u;
    // NOP
label_1401c8:
    // 0x1401c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1401cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1401CCu;
    {
        const bool branch_taken_0x1401cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401CCu;
        // 0x1401d0: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401cc) {
            ctx->pc = 0x14021Cu;
            goto label_14021c;
        }
    }
    ctx->pc = 0x1401D4u;
label_1401d4:
    // 0x1401d4: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1401d4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1401d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1401d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1401dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1401dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1401e0: 0x1812  mflo        $v1
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1401e4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1401e8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1401e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1401ec: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1401ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1401f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1401F0u;
    {
        const bool branch_taken_0x1401f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401f0) {
            ctx->pc = 0x1401FCu;
            goto label_1401fc;
        }
    }
    ctx->pc = 0x1401F8u;
    // 0x1401f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1401f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1401fc:
    // 0x1401fc: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1401fcu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x140200: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x140200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140208: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x140208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14020c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140210: 0x1010  mfhi        $v0
    ctx->pc = 0x140210u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x140214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140218: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x140218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14021c:
    // 0x14021c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x14021cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x140220: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140224: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x140224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x140228: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14022c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x14022cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x140230: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x140230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140234: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x140234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x140238: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x140238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x14023c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x14023cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x140240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14024c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14024cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140250: 0x3e00008  jr          $ra
    ctx->pc = 0x140250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140250u;
        // 0x140254: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140258u;
}
