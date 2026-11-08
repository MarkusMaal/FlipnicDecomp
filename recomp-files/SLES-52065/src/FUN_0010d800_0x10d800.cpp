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

// Function: FUN_0010d800
// Address: 0x10d800 - 0x10d9a8
void FUN_0010d800_0x10d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d800_0x10d800");
#endif

    switch (ctx->pc) {
        case 0x10d800u: goto label_10d800;
        case 0x10d804u: goto label_10d804;
        case 0x10d808u: goto label_10d808;
        case 0x10d80cu: goto label_10d80c;
        case 0x10d810u: goto label_10d810;
        case 0x10d814u: goto label_10d814;
        case 0x10d818u: goto label_10d818;
        case 0x10d81cu: goto label_10d81c;
        case 0x10d820u: goto label_10d820;
        case 0x10d824u: goto label_10d824;
        case 0x10d828u: goto label_10d828;
        case 0x10d82cu: goto label_10d82c;
        case 0x10d830u: goto label_10d830;
        case 0x10d834u: goto label_10d834;
        case 0x10d838u: goto label_10d838;
        case 0x10d83cu: goto label_10d83c;
        case 0x10d840u: goto label_10d840;
        case 0x10d844u: goto label_10d844;
        case 0x10d848u: goto label_10d848;
        case 0x10d84cu: goto label_10d84c;
        case 0x10d850u: goto label_10d850;
        case 0x10d854u: goto label_10d854;
        case 0x10d858u: goto label_10d858;
        case 0x10d85cu: goto label_10d85c;
        case 0x10d860u: goto label_10d860;
        case 0x10d864u: goto label_10d864;
        case 0x10d868u: goto label_10d868;
        case 0x10d86cu: goto label_10d86c;
        case 0x10d870u: goto label_10d870;
        case 0x10d874u: goto label_10d874;
        case 0x10d878u: goto label_10d878;
        case 0x10d87cu: goto label_10d87c;
        case 0x10d880u: goto label_10d880;
        case 0x10d884u: goto label_10d884;
        case 0x10d888u: goto label_10d888;
        case 0x10d88cu: goto label_10d88c;
        case 0x10d890u: goto label_10d890;
        case 0x10d894u: goto label_10d894;
        case 0x10d898u: goto label_10d898;
        case 0x10d89cu: goto label_10d89c;
        case 0x10d8a0u: goto label_10d8a0;
        case 0x10d8a4u: goto label_10d8a4;
        case 0x10d8a8u: goto label_10d8a8;
        case 0x10d8acu: goto label_10d8ac;
        case 0x10d8b0u: goto label_10d8b0;
        case 0x10d8b4u: goto label_10d8b4;
        case 0x10d8b8u: goto label_10d8b8;
        case 0x10d8bcu: goto label_10d8bc;
        case 0x10d8c0u: goto label_10d8c0;
        case 0x10d8c4u: goto label_10d8c4;
        case 0x10d8c8u: goto label_10d8c8;
        case 0x10d8ccu: goto label_10d8cc;
        case 0x10d8d0u: goto label_10d8d0;
        case 0x10d8d4u: goto label_10d8d4;
        case 0x10d8d8u: goto label_10d8d8;
        case 0x10d8dcu: goto label_10d8dc;
        case 0x10d8e0u: goto label_10d8e0;
        case 0x10d8e4u: goto label_10d8e4;
        case 0x10d8e8u: goto label_10d8e8;
        case 0x10d8ecu: goto label_10d8ec;
        case 0x10d8f0u: goto label_10d8f0;
        case 0x10d8f4u: goto label_10d8f4;
        case 0x10d8f8u: goto label_10d8f8;
        case 0x10d8fcu: goto label_10d8fc;
        case 0x10d900u: goto label_10d900;
        case 0x10d904u: goto label_10d904;
        case 0x10d908u: goto label_10d908;
        case 0x10d90cu: goto label_10d90c;
        case 0x10d910u: goto label_10d910;
        case 0x10d914u: goto label_10d914;
        case 0x10d918u: goto label_10d918;
        case 0x10d91cu: goto label_10d91c;
        case 0x10d920u: goto label_10d920;
        case 0x10d924u: goto label_10d924;
        case 0x10d928u: goto label_10d928;
        case 0x10d92cu: goto label_10d92c;
        case 0x10d930u: goto label_10d930;
        case 0x10d934u: goto label_10d934;
        case 0x10d938u: goto label_10d938;
        case 0x10d93cu: goto label_10d93c;
        case 0x10d940u: goto label_10d940;
        case 0x10d944u: goto label_10d944;
        case 0x10d948u: goto label_10d948;
        case 0x10d94cu: goto label_10d94c;
        case 0x10d950u: goto label_10d950;
        case 0x10d954u: goto label_10d954;
        case 0x10d958u: goto label_10d958;
        case 0x10d95cu: goto label_10d95c;
        case 0x10d960u: goto label_10d960;
        case 0x10d964u: goto label_10d964;
        case 0x10d968u: goto label_10d968;
        case 0x10d96cu: goto label_10d96c;
        case 0x10d970u: goto label_10d970;
        case 0x10d974u: goto label_10d974;
        case 0x10d978u: goto label_10d978;
        case 0x10d97cu: goto label_10d97c;
        case 0x10d980u: goto label_10d980;
        case 0x10d984u: goto label_10d984;
        case 0x10d988u: goto label_10d988;
        case 0x10d98cu: goto label_10d98c;
        case 0x10d990u: goto label_10d990;
        case 0x10d994u: goto label_10d994;
        case 0x10d998u: goto label_10d998;
        case 0x10d99cu: goto label_10d99c;
        case 0x10d9a0u: goto label_10d9a0;
        case 0x10d9a4u: goto label_10d9a4;
        default: break;
    }

    ctx->pc = 0x10d800u;

label_10d800:
    // 0x10d800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10d804:
    // 0x10d804: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10d808:
    // 0x10d808: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10d808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10d80c:
    // 0x10d80c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10d810:
    // 0x10d810: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10d810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10d814:
    // 0x10d814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10d818:
    // 0x10d818: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10d818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10d81c:
    // 0x10d81c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10d820:
    // 0x10d820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10d824:
    // 0x10d824: 0xc059990  jal         func_166640
label_10d828:
    if (ctx->pc == 0x10D828u) {
        ctx->pc = 0x10D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D824u;
        // 0x10d828: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D82Cu;
        goto label_10d82c;
    }
    ctx->pc = 0x10D824u;
    SET_GPR_U32(ctx, 31, 0x10D82Cu);
    ctx->pc = 0x10D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D824u;
    // 0x10d828: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x10D824u, 0x10D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D82Cu;
label_10d82c:
    // 0x10d82c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d830:
    // 0x10d830: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x10d830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_10d834:
    // 0x10d834: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_10d838:
    if (ctx->pc == 0x10D838u) {
        ctx->pc = 0x10D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D834u;
        // 0x10d838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D83Cu;
        goto label_10d83c;
    }
    ctx->pc = 0x10D834u;
    {
        const bool branch_taken_0x10d834 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D834u;
        // 0x10d838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d834) {
            ctx->pc = 0x10D8ACu;
            goto label_10d8ac;
        }
    }
    ctx->pc = 0x10D83Cu;
label_10d83c:
    // 0x10d83c: 0x8ea22308  lw          $v0, 0x2308($s5)
    ctx->pc = 0x10d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
label_10d840:
    // 0x10d840: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10d844:
    // 0x10d844: 0xaea22308  sw          $v0, 0x2308($s5)
    ctx->pc = 0x10d844u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8968), GPR_U32(ctx, 2));
label_10d848:
    // 0x10d848: 0x8ea22308  lw          $v0, 0x2308($s5)
    ctx->pc = 0x10d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
label_10d84c:
    // 0x10d84c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_10d850:
    if (ctx->pc == 0x10D850u) {
        ctx->pc = 0x10D854u;
        goto label_10d854;
    }
    ctx->pc = 0x10D84Cu;
    {
        const bool branch_taken_0x10d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d84c) {
            ctx->pc = 0x10D8A8u;
            goto label_10d8a8;
        }
    }
    ctx->pc = 0x10D854u;
label_10d854:
    // 0x10d854: 0x8eb90008  lw          $t9, 0x8($s5)
    ctx->pc = 0x10d854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_10d858:
    // 0x10d858: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d85c:
    // 0x10d85c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10d85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10d860:
    // 0x10d860: 0x320f809  jalr        $t9
label_10d864:
    if (ctx->pc == 0x10D864u) {
        ctx->pc = 0x10D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D860u;
        // 0x10d864: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D868u;
        goto label_10d868;
    }
    ctx->pc = 0x10D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D868u);
        ctx->pc = 0x10D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D860u;
        // 0x10d864: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D860u, 0x10D868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D868u;
label_10d868:
    // 0x10d868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d86c:
    // 0x10d86c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d870:
    // 0x10d870: 0xc042570  jal         func_1095C0
label_10d874:
    if (ctx->pc == 0x10D874u) {
        ctx->pc = 0x10D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D870u;
        // 0x10d874: 0xa2a501d3  sb          $a1, 0x1D3($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 467), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D878u;
        goto label_10d878;
    }
    ctx->pc = 0x10D870u;
    SET_GPR_U32(ctx, 31, 0x10D878u);
    ctx->pc = 0x10D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D870u;
    // 0x10d874: 0xa2a501d3  sb          $a1, 0x1D3($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10D870u, 0x10D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D878u;
label_10d878:
    // 0x10d878: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10d87c:
    // 0x10d87c: 0xc046458  jal         func_119160
label_10d880:
    if (ctx->pc == 0x10D880u) {
        ctx->pc = 0x10D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D87Cu;
        // 0x10d880: 0x2484e358  addiu       $a0, $a0, -0x1CA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D884u;
        goto label_10d884;
    }
    ctx->pc = 0x10D87Cu;
    SET_GPR_U32(ctx, 31, 0x10D884u);
    ctx->pc = 0x10D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D87Cu;
    // 0x10d880: 0x2484e358  addiu       $a0, $a0, -0x1CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10D87Cu, 0x10D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D884u;
label_10d884:
    // 0x10d884: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10d884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10d888:
    // 0x10d888: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x10d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_10d88c:
    // 0x10d88c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10d890:
    // 0x10d890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d894:
    // 0x10d894: 0xc0465f0  jal         func_1197C0
label_10d898:
    if (ctx->pc == 0x10D898u) {
        ctx->pc = 0x10D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D894u;
        // 0x10d898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D89Cu;
        goto label_10d89c;
    }
    ctx->pc = 0x10D894u;
    SET_GPR_U32(ctx, 31, 0x10D89Cu);
    ctx->pc = 0x10D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D894u;
    // 0x10d898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10D894u, 0x10D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D89Cu;
label_10d89c:
    // 0x10d89c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d8a0:
    // 0x10d8a0: 0xc042118  jal         func_108460
label_10d8a4:
    if (ctx->pc == 0x10D8A4u) {
        ctx->pc = 0x10D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8A0u;
        // 0x10d8a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D8A8u;
        goto label_10d8a8;
    }
    ctx->pc = 0x10D8A0u;
    SET_GPR_U32(ctx, 31, 0x10D8A8u);
    ctx->pc = 0x10D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8A0u;
    // 0x10d8a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10D8A0u, 0x10D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8A8u;
label_10d8a8:
    // 0x10d8a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d8ac:
    // 0x10d8ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10d8acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d8b0:
    // 0x10d8b0: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x10d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_10d8b4:
    // 0x10d8b4: 0x24510280  addiu       $s1, $v0, 0x280
    ctx->pc = 0x10d8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_10d8b8:
    // 0x10d8b8: 0x8c420650  lw          $v0, 0x650($v0)
    ctx->pc = 0x10d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_10d8bc:
    // 0x10d8bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_10d8c0:
    if (ctx->pc == 0x10D8C0u) {
        ctx->pc = 0x10D8C4u;
        goto label_10d8c4;
    }
    ctx->pc = 0x10D8BCu;
    {
        const bool branch_taken_0x10d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d8bc) {
            ctx->pc = 0x10D960u;
            goto label_10d960;
        }
    }
    ctx->pc = 0x10D8C4u;
label_10d8c4:
    // 0x10d8c4: 0x8eb90008  lw          $t9, 0x8($s5)
    ctx->pc = 0x10d8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_10d8c8:
    // 0x10d8c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d8cc:
    // 0x10d8cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10d8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10d8d0:
    // 0x10d8d0: 0x320f809  jalr        $t9
label_10d8d4:
    if (ctx->pc == 0x10D8D4u) {
        ctx->pc = 0x10D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D0u;
        // 0x10d8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D8D8u;
        goto label_10d8d8;
    }
    ctx->pc = 0x10D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D8D8u);
        ctx->pc = 0x10D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D0u;
        // 0x10d8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8D0u, 0x10D8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D8D8u;
label_10d8d8:
    // 0x10d8d8: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x10d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10d8dc:
    // 0x10d8dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10d8e0:
    // 0x10d8e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10d8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10d8e4:
    // 0x10d8e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10d8e8:
    // 0x10d8e8: 0x26850300  addiu       $a1, $s4, 0x300
    ctx->pc = 0x10d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
label_10d8ec:
    // 0x10d8ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10d8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d8f0:
    // 0x10d8f0: 0x26270300  addiu       $a3, $s1, 0x300
    ctx->pc = 0x10d8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_10d8f4:
    // 0x10d8f4: 0x26880290  addiu       $t0, $s4, 0x290
    ctx->pc = 0x10d8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
label_10d8f8:
    // 0x10d8f8: 0xc055160  jal         func_154580
label_10d8fc:
    if (ctx->pc == 0x10D8FCu) {
        ctx->pc = 0x10D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8F8u;
        // 0x10d8fc: 0x26290290  addiu       $t1, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D900u;
        goto label_10d900;
    }
    ctx->pc = 0x10D8F8u;
    SET_GPR_U32(ctx, 31, 0x10D900u);
    ctx->pc = 0x10D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8F8u;
    // 0x10d8fc: 0x26290290  addiu       $t1, $s1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154580u, 0x10D8F8u, 0x10D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D900u;
label_10d900:
    // 0x10d900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10d900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d904:
    // 0x10d904: 0x0  nop
    ctx->pc = 0x10d904u;
    // NOP
label_10d908:
    // 0x10d908: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d90c:
    // 0x10d90c: 0x0  nop
    ctx->pc = 0x10d90cu;
    // NOP
label_10d910:
    // 0x10d910: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_10d914:
    if (ctx->pc == 0x10D914u) {
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D918u;
        goto label_10d918;
    }
    ctx->pc = 0x10D910u;
    {
        const bool branch_taken_0x10d910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d910) {
            ctx->pc = 0x10D948u;
            goto label_10d948;
        }
    }
    ctx->pc = 0x10D918u;
label_10d918:
    // 0x10d918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10d91c:
    // 0x10d91c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10d920:
    // 0x10d920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10d920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d924:
    // 0x10d924: 0xc056194  jal         func_158650
label_10d928:
    if (ctx->pc == 0x10D928u) {
        ctx->pc = 0x10D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D924u;
        // 0x10d928: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D92Cu;
        goto label_10d92c;
    }
    ctx->pc = 0x10D924u;
    SET_GPR_U32(ctx, 31, 0x10D92Cu);
    ctx->pc = 0x10D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D924u;
    // 0x10d928: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10D924u, 0x10D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D92Cu;
label_10d92c:
    // 0x10d92c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10d930:
    // 0x10d930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10d930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d934:
    // 0x10d934: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10d934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10d938:
    // 0x10d938: 0xc056194  jal         func_158650
label_10d93c:
    if (ctx->pc == 0x10D93Cu) {
        ctx->pc = 0x10D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D938u;
        // 0x10d93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D940u;
        goto label_10d940;
    }
    ctx->pc = 0x10D938u;
    SET_GPR_U32(ctx, 31, 0x10D940u);
    ctx->pc = 0x10D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D938u;
    // 0x10d93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10D938u, 0x10D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D940u;
label_10d940:
    // 0x10d940: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10d944:
    // 0x10d944: 0xae2203d0  sw          $v0, 0x3D0($s1)
    ctx->pc = 0x10d944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 2));
label_10d948:
    // 0x10d948: 0x8eb90008  lw          $t9, 0x8($s5)
    ctx->pc = 0x10d948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_10d94c:
    // 0x10d94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d950:
    // 0x10d950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d954:
    // 0x10d954: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10d954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10d958:
    // 0x10d958: 0x320f809  jalr        $t9
label_10d95c:
    if (ctx->pc == 0x10D95Cu) {
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D960u;
        goto label_10d960;
    }
    ctx->pc = 0x10D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D960u);
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D958u, 0x10D960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D960u;
label_10d960:
    // 0x10d960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10d964:
    // 0x10d964: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x10d964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_10d968:
    // 0x10d968: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_10d96c:
    if (ctx->pc == 0x10D96Cu) {
        ctx->pc = 0x10D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D968u;
        // 0x10d96c: 0x26730410  addiu       $s3, $s3, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D970u;
        goto label_10d970;
    }
    ctx->pc = 0x10D968u;
    {
        const bool branch_taken_0x10d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D968u;
        // 0x10d96c: 0x26730410  addiu       $s3, $s3, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d968) {
            ctx->pc = 0x10D8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d8b0;
        }
    }
    ctx->pc = 0x10D970u;
label_10d970:
    // 0x10d970: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x10d970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_10d974:
    // 0x10d974: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_10d978:
    if (ctx->pc == 0x10D978u) {
        ctx->pc = 0x10D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D974u;
        // 0x10d978: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D97Cu;
        goto label_10d97c;
    }
    ctx->pc = 0x10D974u;
    {
        const bool branch_taken_0x10d974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D974u;
        // 0x10d978: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d974) {
            ctx->pc = 0x10D984u;
            goto label_10d984;
        }
    }
    ctx->pc = 0x10D97Cu;
label_10d97c:
    // 0x10d97c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d980:
    // 0x10d980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10d980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d984:
    // 0x10d984: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10d984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10d988:
    // 0x10d988: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10d988u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10d98c:
    // 0x10d98c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10d98cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10d990:
    // 0x10d990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10d990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10d994:
    // 0x10d994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10d994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10d998:
    // 0x10d998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10d99c:
    // 0x10d99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10d99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10d9a0:
    // 0x10d9a0: 0x3e00008  jr          $ra
label_10d9a4:
    if (ctx->pc == 0x10D9A4u) {
        ctx->pc = 0x10D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9A0u;
        // 0x10d9a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D9A8u;
        goto label_fallthrough_0x10d9a0;
    }
    ctx->pc = 0x10D9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9A0u;
        // 0x10d9a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10d9a0:
    ctx->pc = 0x10D9A8u;
}
