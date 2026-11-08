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

// Function: FUN_0010f7b0
// Address: 0x10f7b0 - 0x10f8ec
void FUN_0010f7b0_0x10f7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f7b0_0x10f7b0");
#endif

    switch (ctx->pc) {
        case 0x10f7b0u: goto label_10f7b0;
        case 0x10f7b4u: goto label_10f7b4;
        case 0x10f7b8u: goto label_10f7b8;
        case 0x10f7bcu: goto label_10f7bc;
        case 0x10f7c0u: goto label_10f7c0;
        case 0x10f7c4u: goto label_10f7c4;
        case 0x10f7c8u: goto label_10f7c8;
        case 0x10f7ccu: goto label_10f7cc;
        case 0x10f7d0u: goto label_10f7d0;
        case 0x10f7d4u: goto label_10f7d4;
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7dcu: goto label_10f7dc;
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7e4u: goto label_10f7e4;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f7ecu: goto label_10f7ec;
        case 0x10f7f0u: goto label_10f7f0;
        case 0x10f7f4u: goto label_10f7f4;
        case 0x10f7f8u: goto label_10f7f8;
        case 0x10f7fcu: goto label_10f7fc;
        case 0x10f800u: goto label_10f800;
        case 0x10f804u: goto label_10f804;
        case 0x10f808u: goto label_10f808;
        case 0x10f80cu: goto label_10f80c;
        case 0x10f810u: goto label_10f810;
        case 0x10f814u: goto label_10f814;
        case 0x10f818u: goto label_10f818;
        case 0x10f81cu: goto label_10f81c;
        case 0x10f820u: goto label_10f820;
        case 0x10f824u: goto label_10f824;
        case 0x10f828u: goto label_10f828;
        case 0x10f82cu: goto label_10f82c;
        case 0x10f830u: goto label_10f830;
        case 0x10f834u: goto label_10f834;
        case 0x10f838u: goto label_10f838;
        case 0x10f83cu: goto label_10f83c;
        case 0x10f840u: goto label_10f840;
        case 0x10f844u: goto label_10f844;
        case 0x10f848u: goto label_10f848;
        case 0x10f84cu: goto label_10f84c;
        case 0x10f850u: goto label_10f850;
        case 0x10f854u: goto label_10f854;
        case 0x10f858u: goto label_10f858;
        case 0x10f85cu: goto label_10f85c;
        case 0x10f860u: goto label_10f860;
        case 0x10f864u: goto label_10f864;
        case 0x10f868u: goto label_10f868;
        case 0x10f86cu: goto label_10f86c;
        case 0x10f870u: goto label_10f870;
        case 0x10f874u: goto label_10f874;
        case 0x10f878u: goto label_10f878;
        case 0x10f87cu: goto label_10f87c;
        case 0x10f880u: goto label_10f880;
        case 0x10f884u: goto label_10f884;
        case 0x10f888u: goto label_10f888;
        case 0x10f88cu: goto label_10f88c;
        case 0x10f890u: goto label_10f890;
        case 0x10f894u: goto label_10f894;
        case 0x10f898u: goto label_10f898;
        case 0x10f89cu: goto label_10f89c;
        case 0x10f8a0u: goto label_10f8a0;
        case 0x10f8a4u: goto label_10f8a4;
        case 0x10f8a8u: goto label_10f8a8;
        case 0x10f8acu: goto label_10f8ac;
        case 0x10f8b0u: goto label_10f8b0;
        case 0x10f8b4u: goto label_10f8b4;
        case 0x10f8b8u: goto label_10f8b8;
        case 0x10f8bcu: goto label_10f8bc;
        case 0x10f8c0u: goto label_10f8c0;
        case 0x10f8c4u: goto label_10f8c4;
        case 0x10f8c8u: goto label_10f8c8;
        case 0x10f8ccu: goto label_10f8cc;
        case 0x10f8d0u: goto label_10f8d0;
        case 0x10f8d4u: goto label_10f8d4;
        case 0x10f8d8u: goto label_10f8d8;
        case 0x10f8dcu: goto label_10f8dc;
        case 0x10f8e0u: goto label_10f8e0;
        case 0x10f8e4u: goto label_10f8e4;
        case 0x10f8e8u: goto label_10f8e8;
        default: break;
    }

    ctx->pc = 0x10f7b0u;

label_10f7b0:
    // 0x10f7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10f7b4:
    // 0x10f7b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10f7b8:
    // 0x10f7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10f7bc:
    // 0x10f7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10f7c0:
    // 0x10f7c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10f7c4:
    // 0x10f7c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f7c8:
    // 0x10f7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10f7cc:
    // 0x10f7cc: 0x90830220  lbu         $v1, 0x220($a0)
    ctx->pc = 0x10f7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_10f7d0:
    // 0x10f7d0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_10f7d4:
    if (ctx->pc == 0x10F7D4u) {
        ctx->pc = 0x10F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D0u;
        // 0x10f7d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7D8u;
        goto label_10f7d8;
    }
    ctx->pc = 0x10F7D0u;
    {
        const bool branch_taken_0x10f7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D0u;
        // 0x10f7d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7d0) {
            ctx->pc = 0x10F8D0u;
            goto label_10f8d0;
        }
    }
    ctx->pc = 0x10F7D8u;
label_10f7d8:
    // 0x10f7d8: 0x92430224  lbu         $v1, 0x224($s2)
    ctx->pc = 0x10f7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
label_10f7dc:
    // 0x10f7dc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_10f7e0:
    // 0x10f7e0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_10f7e4:
    if (ctx->pc == 0x10F7E4u) {
        ctx->pc = 0x10F7E8u;
        goto label_10f7e8;
    }
    ctx->pc = 0x10F7E0u;
    {
        const bool branch_taken_0x10f7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f7e0) {
            ctx->pc = 0x10F8D0u;
            goto label_10f8d0;
        }
    }
    ctx->pc = 0x10F7E8u;
label_10f7e8:
    // 0x10f7e8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10f7ec:
    // 0x10f7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7f0:
    // 0x10f7f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f7f4:
    // 0x10f7f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10f7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10f7f8:
    // 0x10f7f8: 0x320f809  jalr        $t9
label_10f7fc:
    if (ctx->pc == 0x10F7FCu) {
        ctx->pc = 0x10F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7F8u;
        // 0x10f7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F800u;
        goto label_10f800;
    }
    ctx->pc = 0x10F7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F800u);
        ctx->pc = 0x10F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7F8u;
        // 0x10f7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7F8u, 0x10F800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F800u;
label_10f800:
    // 0x10f800: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f804:
    // 0x10f804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f808:
    // 0x10f808: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x10f808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10f80c:
    // 0x10f80c: 0x320f809  jalr        $t9
label_10f810:
    if (ctx->pc == 0x10F810u) {
        ctx->pc = 0x10F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F80Cu;
        // 0x10f810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F814u;
        goto label_10f814;
    }
    ctx->pc = 0x10F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F814u);
        ctx->pc = 0x10F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F80Cu;
        // 0x10f810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F80Cu, 0x10F814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F814u;
label_10f814:
    // 0x10f814: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x10f814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10f818:
    // 0x10f818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f81c:
    // 0x10f81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f820:
    // 0x10f820: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10f820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10f824:
    // 0x10f824: 0x320f809  jalr        $t9
label_10f828:
    if (ctx->pc == 0x10F828u) {
        ctx->pc = 0x10F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F824u;
        // 0x10f828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F82Cu;
        goto label_10f82c;
    }
    ctx->pc = 0x10F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F82Cu);
        ctx->pc = 0x10F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F824u;
        // 0x10f828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F824u, 0x10F82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F82Cu;
label_10f82c:
    // 0x10f82c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f830:
    // 0x10f830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f834:
    // 0x10f834: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10f838:
    // 0x10f838: 0x320f809  jalr        $t9
label_10f83c:
    if (ctx->pc == 0x10F83Cu) {
        ctx->pc = 0x10F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F838u;
        // 0x10f83c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F840u;
        goto label_10f840;
    }
    ctx->pc = 0x10F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F840u);
        ctx->pc = 0x10F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F838u;
        // 0x10f83c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F838u, 0x10F840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F840u;
label_10f840:
    // 0x10f840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f844:
    // 0x10f844: 0x92440224  lbu         $a0, 0x224($s2)
    ctx->pc = 0x10f844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
label_10f848:
    // 0x10f848: 0x92420225  lbu         $v0, 0x225($s2)
    ctx->pc = 0x10f848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 549)));
label_10f84c:
    // 0x10f84c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10f850:
    // 0x10f850: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x10f850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_10f854:
    // 0x10f854: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x10f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
label_10f858:
    // 0x10f858: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_10f85c:
    // 0x10f85c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10f860:
    if (ctx->pc == 0x10F860u) {
        ctx->pc = 0x10F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F85Cu;
        // 0x10f860: 0x649823  subu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F864u;
        goto label_10f864;
    }
    ctx->pc = 0x10F85Cu;
    {
        const bool branch_taken_0x10f85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F85Cu;
        // 0x10f860: 0x649823  subu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f85c) {
            ctx->pc = 0x10F898u;
            goto label_10f898;
        }
    }
    ctx->pc = 0x10F864u;
label_10f864:
    // 0x10f864: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f868:
    // 0x10f868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f86c:
    // 0x10f86c: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f870:
    // 0x10f870: 0x320f809  jalr        $t9
label_10f874:
    if (ctx->pc == 0x10F874u) {
        ctx->pc = 0x10F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F870u;
        // 0x10f874: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F878u;
        goto label_10f878;
    }
    ctx->pc = 0x10F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F878u);
        ctx->pc = 0x10F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F870u;
        // 0x10f874: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F870u, 0x10F878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F878u;
label_10f878:
    // 0x10f878: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f87c:
    // 0x10f87c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_10f880:
    // 0x10f880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f884:
    // 0x10f884: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f888:
    // 0x10f888: 0x320f809  jalr        $t9
label_10f88c:
    if (ctx->pc == 0x10F88Cu) {
        ctx->pc = 0x10F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F888u;
        // 0x10f88c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F890u;
        goto label_10f890;
    }
    ctx->pc = 0x10F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F890u);
        ctx->pc = 0x10F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F888u;
        // 0x10f88c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F888u, 0x10F890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F890u;
label_10f890:
    // 0x10f890: 0x1000000f  b           . + 4 + (0xF << 2)
label_10f894:
    if (ctx->pc == 0x10F894u) {
        ctx->pc = 0x10F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F890u;
        // 0x10f894: 0xae400228  sw          $zero, 0x228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F898u;
        goto label_10f898;
    }
    ctx->pc = 0x10F890u;
    {
        const bool branch_taken_0x10f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F890u;
        // 0x10f894: 0xae400228  sw          $zero, 0x228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f890) {
            ctx->pc = 0x10F8D0u;
            goto label_10f8d0;
        }
    }
    ctx->pc = 0x10F898u;
label_10f898:
    // 0x10f898: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f89c:
    // 0x10f89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f8a0:
    // 0x10f8a0: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f8a4:
    // 0x10f8a4: 0x320f809  jalr        $t9
label_10f8a8:
    if (ctx->pc == 0x10F8A8u) {
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A4u;
        // 0x10f8a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8ACu;
        goto label_10f8ac;
    }
    ctx->pc = 0x10F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F8ACu);
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A4u;
        // 0x10f8a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8A4u, 0x10F8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F8ACu;
label_10f8ac:
    // 0x10f8ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f8b0:
    // 0x10f8b0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10f8b4:
    // 0x10f8b4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_10f8b8:
    // 0x10f8b8: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x10f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_10f8bc:
    // 0x10f8bc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10f8c0:
    // 0x10f8c0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f8c4:
    // 0x10f8c4: 0x320f809  jalr        $t9
label_10f8c8:
    if (ctx->pc == 0x10F8C8u) {
        ctx->pc = 0x10F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C4u;
        // 0x10f8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8CCu;
        goto label_10f8cc;
    }
    ctx->pc = 0x10F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F8CCu);
        ctx->pc = 0x10F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C4u;
        // 0x10f8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8C4u, 0x10F8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F8CCu;
label_10f8cc:
    // 0x10f8cc: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x10f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
label_10f8d0:
    // 0x10f8d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f8d4:
    // 0x10f8d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10f8d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f8d8:
    // 0x10f8d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10f8dc:
    // 0x10f8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f8e0:
    // 0x10f8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10f8e4:
    // 0x10f8e4: 0x3e00008  jr          $ra
label_10f8e8:
    if (ctx->pc == 0x10F8E8u) {
        ctx->pc = 0x10F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E4u;
        // 0x10f8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8ECu;
        goto label_fallthrough_0x10f8e4;
    }
    ctx->pc = 0x10F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E4u;
        // 0x10f8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f8e4:
    ctx->pc = 0x10F8ECu;
}
