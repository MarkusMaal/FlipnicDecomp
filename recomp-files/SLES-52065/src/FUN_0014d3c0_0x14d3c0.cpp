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

// Function: FUN_0014d3c0
// Address: 0x14d3c0 - 0x14d810
void FUN_0014d3c0_0x14d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d3c0_0x14d3c0");
#endif

    switch (ctx->pc) {
        case 0x14d440u: goto label_14d440;
        case 0x14d448u: goto label_14d448;
        case 0x14d4b4u: goto label_14d4b4;
        case 0x14d4c4u: goto label_14d4c4;
        case 0x14d4f4u: goto label_14d4f4;
        case 0x14d504u: goto label_14d504;
        case 0x14d544u: goto label_14d544;
        case 0x14d554u: goto label_14d554;
        case 0x14d5b8u: goto label_14d5b8;
        case 0x14d5ccu: goto label_14d5cc;
        case 0x14d5d8u: goto label_14d5d8;
        case 0x14d5f0u: goto label_14d5f0;
        case 0x14d5fcu: goto label_14d5fc;
        case 0x14d654u: goto label_14d654;
        case 0x14d698u: goto label_14d698;
        case 0x14d6b8u: goto label_14d6b8;
        case 0x14d6c0u: goto label_14d6c0;
        case 0x14d6ecu: goto label_14d6ec;
        case 0x14d6fcu: goto label_14d6fc;
        case 0x14d728u: goto label_14d728;
        case 0x14d738u: goto label_14d738;
        case 0x14d75cu: goto label_14d75c;
        case 0x14d76cu: goto label_14d76c;
        case 0x14d7a4u: goto label_14d7a4;
        case 0x14d7ccu: goto label_14d7cc;
        case 0x14d7e0u: goto label_14d7e0;
        default: break;
    }

    ctx->pc = 0x14d3c0u;

    // 0x14d3c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14d3c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14d3c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14d3cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14d3d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14d3d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d3d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d3dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14d3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d3e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14d3e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d3ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14d3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d3f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14d3f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f8: 0x126000f9  beqz        $s3, . + 4 + (0xF9 << 2)
    ctx->pc = 0x14D3F8u;
    {
        const bool branch_taken_0x14d3f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3F8u;
        // 0x14d3fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3f8) {
            ctx->pc = 0x14D7E0u;
            goto label_14d7e0;
        }
    }
    ctx->pc = 0x14D400u;
    // 0x14d400: 0x3c031555  lui         $v1, 0x1555
    ctx->pc = 0x14d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5461 << 16));
    // 0x14d404: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x14d404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x14d408: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x14d408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d40c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D40Cu;
    {
        const bool branch_taken_0x14d40c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d40c) {
            ctx->pc = 0x14D428u;
            goto label_14d428;
        }
    }
    ctx->pc = 0x14D414u;
    // 0x14d414: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d418: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x14d418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14d41c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d41cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d420: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D420u;
    {
        const bool branch_taken_0x14d420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d420) {
            ctx->pc = 0x14D448u;
            goto label_14d448;
        }
    }
    ctx->pc = 0x14D428u;
label_14d428:
    // 0x14d428: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14d428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14d42c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14d430: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14d434: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14d434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d438: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14D438u;
    SET_GPR_U32(ctx, 31, 0x14D440u);
    ctx->pc = 0x14D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D438u;
    // 0x14d43c: 0x24a5f2a0  addiu       $a1, $a1, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14D438u, 0x14D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D440u;
label_14d440:
    // 0x14d440: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14D440u;
    SET_GPR_U32(ctx, 31, 0x14D448u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14D440u, 0x14D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D448u;
label_14d448:
    // 0x14d448: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d44c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d450: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14d454: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d458: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x14D458u;
    {
        const bool branch_taken_0x14d458 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d458) {
            ctx->pc = 0x14D614u;
            goto label_14d614;
        }
    }
    ctx->pc = 0x14D460u;
    // 0x14d460: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d464: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14d464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d468: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x14d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14d46c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d470: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14d474: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14d474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14d478: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d47c: 0x2d42023  subu        $a0, $s6, $s4
    ctx->pc = 0x14d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x14d480: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14d480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d484: 0x0  nop
    ctx->pc = 0x14d484u;
    // NOP
    // 0x14d488: 0x0  nop
    ctx->pc = 0x14d488u;
    // NOP
    // 0x14d48c: 0x1810  mfhi        $v1
    ctx->pc = 0x14d48cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14d490: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x14d490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14d494: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14d494u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14d498: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d49c: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14d49cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d4a0: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D4A0u;
    {
        const bool branch_taken_0x14d4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4A0u;
        // 0x14d4a4: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4a0) {
            ctx->pc = 0x14D52Cu;
            goto label_14d52c;
        }
    }
    ctx->pc = 0x14D4A8u;
    // 0x14d4a8: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14d4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d4ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D4ACu;
    {
        const bool branch_taken_0x14d4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ACu;
        // 0x14d4b0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4ac) {
            ctx->pc = 0x14D4E4u;
            goto label_14d4e4;
        }
    }
    ctx->pc = 0x14D4B4u;
label_14d4b4:
    // 0x14d4b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D4B4u;
    {
        const bool branch_taken_0x14d4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4B4u;
        // 0x14d4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4b4) {
            ctx->pc = 0x14D4C4u;
            goto label_14d4c4;
        }
    }
    ctx->pc = 0x14D4BCu;
    // 0x14d4bc: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D4BCu;
    SET_GPR_U32(ctx, 31, 0x14D4C4u);
    ctx->pc = 0x14D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4BCu;
    // 0x14d4c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D4BCu, 0x14D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4C4u;
label_14d4c4:
    // 0x14d4c4: 0x0  nop
    ctx->pc = 0x14d4c4u;
    // NOP
    // 0x14d4c8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d4cc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d4ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d4d0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d4d4: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14d4d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d4d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d4dc: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D4DCu;
    {
        const bool branch_taken_0x14d4dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4DCu;
        // 0x14d4e0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4dc) {
            ctx->pc = 0x14D4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d4b4;
        }
    }
    ctx->pc = 0x14D4E4u;
label_14d4e4:
    // 0x14d4e4: 0x0  nop
    ctx->pc = 0x14d4e4u;
    // NOP
    // 0x14d4e8: 0x296082b  sltu        $at, $s4, $s6
    ctx->pc = 0x14d4e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d4ec: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x14D4ECu;
    {
        const bool branch_taken_0x14d4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ECu;
        // 0x14d4f0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4ec) {
            ctx->pc = 0x14D5E4u;
            goto label_14d5e4;
        }
    }
    ctx->pc = 0x14D4F4u;
label_14d4f4:
    // 0x14d4f4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D4F4u;
    {
        const bool branch_taken_0x14d4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4F4u;
        // 0x14d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f4) {
            ctx->pc = 0x14D504u;
            goto label_14d504;
        }
    }
    ctx->pc = 0x14D4FCu;
    // 0x14d4fc: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D4FCu;
    SET_GPR_U32(ctx, 31, 0x14D504u);
    ctx->pc = 0x14D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4FCu;
    // 0x14d500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D4FCu, 0x14D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D504u;
label_14d504:
    // 0x14d504: 0x0  nop
    ctx->pc = 0x14d504u;
    // NOP
    // 0x14d508: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d50c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d510: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d514: 0x236182b  sltu        $v1, $s1, $s6
    ctx->pc = 0x14d514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14d51c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D51Cu;
    {
        const bool branch_taken_0x14d51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D51Cu;
        // 0x14d520: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d51c) {
            ctx->pc = 0x14D4F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d4f4;
        }
    }
    ctx->pc = 0x14D524u;
    // 0x14d524: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14D524u;
    {
        const bool branch_taken_0x14d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d524) {
            ctx->pc = 0x14D5E4u;
            goto label_14d5e4;
        }
    }
    ctx->pc = 0x14D52Cu;
label_14d52c:
    // 0x14d52c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14d530: 0x3f080  sll         $fp, $v1, 2
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d534: 0x2de8023  subu        $s0, $s6, $fp
    ctx->pc = 0x14d534u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x14d538: 0x216082b  sltu        $at, $s0, $s6
    ctx->pc = 0x14d538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d53c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D53Cu;
    {
        const bool branch_taken_0x14d53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D53Cu;
        // 0x14d540: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d53c) {
            ctx->pc = 0x14D574u;
            goto label_14d574;
        }
    }
    ctx->pc = 0x14D544u;
label_14d544:
    // 0x14d544: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D544u;
    {
        const bool branch_taken_0x14d544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D544u;
        // 0x14d548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d544) {
            ctx->pc = 0x14D554u;
            goto label_14d554;
        }
    }
    ctx->pc = 0x14D54Cu;
    // 0x14d54c: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D54Cu;
    SET_GPR_U32(ctx, 31, 0x14D554u);
    ctx->pc = 0x14D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D54Cu;
    // 0x14d550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D54Cu, 0x14D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D554u;
label_14d554:
    // 0x14d554: 0x0  nop
    ctx->pc = 0x14d554u;
    // NOP
    // 0x14d558: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d55c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d560: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d564: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x14d564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d568: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14d56c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D56Cu;
    {
        const bool branch_taken_0x14d56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D56Cu;
        // 0x14d570: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d56c) {
            ctx->pc = 0x14D544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D574u;
label_14d574:
    // 0x14d574: 0x0  nop
    ctx->pc = 0x14d574u;
    // NOP
    // 0x14d578: 0x2f32023  subu        $a0, $s7, $s3
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x14d57c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14d580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d584: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14d584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d588: 0x2c41823  subu        $v1, $s6, $a0
    ctx->pc = 0x14d588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x14d58c: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14d58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d590: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D590u;
    {
        const bool branch_taken_0x14d590 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D590u;
        // 0x14d594: 0x2848021  addu        $s0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d590) {
            ctx->pc = 0x14D5ACu;
            goto label_14d5ac;
        }
    }
    ctx->pc = 0x14D598u;
    // 0x14d598: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x14d598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d59c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D59Cu;
    {
        const bool branch_taken_0x14d59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d59c) {
            ctx->pc = 0x14D5A8u;
            goto label_14d5a8;
        }
    }
    ctx->pc = 0x14D5A4u;
    // 0x14d5a4: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x14d5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_14d5a8:
    // 0x14d5a8: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x14d5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_14d5ac:
    // 0x14d5ac: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14d5acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d5b0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14D5B0u;
    {
        const bool branch_taken_0x14d5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5b0) {
            ctx->pc = 0x14D5E4u;
            goto label_14d5e4;
        }
    }
    ctx->pc = 0x14D5B8u;
label_14d5b8:
    // 0x14d5b8: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x14d5bc: 0x26d6fff4  addiu       $s6, $s6, -0xC
    ctx->pc = 0x14d5bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967284));
    // 0x14d5c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5c4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D5C4u;
    SET_GPR_U32(ctx, 31, 0x14D5CCu);
    ctx->pc = 0x14D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5C4u;
    // 0x14d5c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D5C4u, 0x14D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5CCu;
label_14d5cc:
    // 0x14d5cc: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14d5d0: 0xc0534ec  jal         func_14D3B0
    ctx->pc = 0x14D5D0u;
    SET_GPR_U32(ctx, 31, 0x14D5D8u);
    ctx->pc = 0x14D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5D0u;
    // 0x14d5d4: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D3B0u, 0x14D5D0u, 0x14D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5D8u;
label_14d5d8:
    // 0x14d5d8: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14d5d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d5dc: 0x1420fff6  bnez        $at, . + 4 + (-0xA << 2)
    ctx->pc = 0x14D5DCu;
    {
        const bool branch_taken_0x14d5dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d5dc) {
            ctx->pc = 0x14D5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d5b8;
        }
    }
    ctx->pc = 0x14D5E4u;
label_14d5e4:
    // 0x14d5e4: 0x0  nop
    ctx->pc = 0x14d5e4u;
    // NOP
    // 0x14d5e8: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
    ctx->pc = 0x14D5E8u;
    {
        const bool branch_taken_0x14d5e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5e8) {
            ctx->pc = 0x14D7E0u;
            goto label_14d7e0;
        }
    }
    ctx->pc = 0x14D5F0u;
label_14d5f0:
    // 0x14d5f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5f4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D5F4u;
    SET_GPR_U32(ctx, 31, 0x14D5FCu);
    ctx->pc = 0x14D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5F4u;
    // 0x14d5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D5F4u, 0x14D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5FCu;
label_14d5fc:
    // 0x14d5fc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d600: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x14d604: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d5f0;
        }
    }
    ctx->pc = 0x14D60Cu;
    // 0x14d60c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x14D60Cu;
    {
        const bool branch_taken_0x14d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D60Cu;
        // 0x14d610: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d60c) {
            ctx->pc = 0x14D7E4u;
            goto label_14d7e4;
        }
    }
    ctx->pc = 0x14D614u;
label_14d614:
    // 0x14d614: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14d618: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x14d618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x14d61c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14d620: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14d624: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x14d624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x14d628: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d62c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d630: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D630u;
    {
        const bool branch_taken_0x14d630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D630u;
        // 0x14d634: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d630) {
            ctx->pc = 0x14D640u;
            goto label_14d640;
        }
    }
    ctx->pc = 0x14D638u;
    // 0x14d638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D638u;
    {
        const bool branch_taken_0x14d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D638u;
        // 0x14d63c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d638) {
            ctx->pc = 0x14D648u;
            goto label_14d648;
        }
    }
    ctx->pc = 0x14D640u;
label_14d640:
    // 0x14d640: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14d640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d644: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14d644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14d648:
    // 0x14d648: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14D648u;
    {
        const bool branch_taken_0x14d648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D648u;
        // 0x14d64c: 0x3c021555  lui         $v0, 0x1555 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d648) {
            ctx->pc = 0x14D684u;
            goto label_14d684;
        }
    }
    ctx->pc = 0x14D650u;
    // 0x14d650: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
label_14d654:
    // 0x14d654: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x14d654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x14d658: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14d658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14d65c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D65Cu;
    {
        const bool branch_taken_0x14d65c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d65c) {
            ctx->pc = 0x14D66Cu;
            goto label_14d66c;
        }
    }
    ctx->pc = 0x14D664u;
    // 0x14d664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D664u;
    {
        const bool branch_taken_0x14d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D664u;
        // 0x14d668: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d664) {
            ctx->pc = 0x14D674u;
            goto label_14d674;
        }
    }
    ctx->pc = 0x14D66Cu;
label_14d66c:
    // 0x14d66c: 0x0  nop
    ctx->pc = 0x14d66cu;
    // NOP
    // 0x14d670: 0x34505555  ori         $s0, $v0, 0x5555
    ctx->pc = 0x14d670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_14d674:
    // 0x14d674: 0x0  nop
    ctx->pc = 0x14d674u;
    // NOP
    // 0x14d678: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14d678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d67c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D67Cu;
    {
        const bool branch_taken_0x14d67c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D67Cu;
        // 0x14d680: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d67c) {
            ctx->pc = 0x14D654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d654;
        }
    }
    ctx->pc = 0x14D684u;
label_14d684:
    // 0x14d684: 0x0  nop
    ctx->pc = 0x14d684u;
    // NOP
    // 0x14d688: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d68c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d690: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14D690u;
    SET_GPR_U32(ctx, 31, 0x14D698u);
    ctx->pc = 0x14D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D690u;
    // 0x14d694: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14D690u, 0x14D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D698u;
label_14d698:
    // 0x14d698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d69c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D69Cu;
    {
        const bool branch_taken_0x14d69c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D69Cu;
        // 0x14d6a0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d69c) {
            ctx->pc = 0x14D6C0u;
            goto label_14d6c0;
        }
    }
    ctx->pc = 0x14D6A4u;
    // 0x14d6a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14d6a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14d6ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d6b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14D6B0u;
    SET_GPR_U32(ctx, 31, 0x14D6B8u);
    ctx->pc = 0x14D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6B0u;
    // 0x14d6b4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14D6B0u, 0x14D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6B8u;
label_14d6b8:
    // 0x14d6b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14D6B8u;
    SET_GPR_U32(ctx, 31, 0x14D6C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14D6B8u, 0x14D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6C0u;
label_14d6c0:
    // 0x14d6c0: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x14d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x14d6c4: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x14d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
    // 0x14d6c8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d6cc: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x14d6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d6d0: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d6d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d6dc: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14d6e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d6e4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D6E4u;
    {
        const bool branch_taken_0x14d6e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6E4u;
        // 0x14d6e8: 0x222b821  addu        $s7, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6e4) {
            ctx->pc = 0x14D71Cu;
            goto label_14d71c;
        }
    }
    ctx->pc = 0x14D6ECu;
label_14d6ec:
    // 0x14d6ec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D6ECu;
    {
        const bool branch_taken_0x14d6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6ECu;
        // 0x14d6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6ec) {
            ctx->pc = 0x14D6FCu;
            goto label_14d6fc;
        }
    }
    ctx->pc = 0x14D6F4u;
    // 0x14d6f4: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D6F4u;
    SET_GPR_U32(ctx, 31, 0x14D6FCu);
    ctx->pc = 0x14D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6F4u;
    // 0x14d6f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D6F4u, 0x14D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6FCu;
label_14d6fc:
    // 0x14d6fc: 0x0  nop
    ctx->pc = 0x14d6fcu;
    // NOP
    // 0x14d700: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d704: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d708: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d70c: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x14d70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14d710: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d714: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D714u;
    {
        const bool branch_taken_0x14d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D714u;
        // 0x14d718: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d714) {
            ctx->pc = 0x14D6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d6ec;
        }
    }
    ctx->pc = 0x14D71Cu;
label_14d71c:
    // 0x14d71c: 0x0  nop
    ctx->pc = 0x14d71cu;
    // NOP
    // 0x14d720: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x14D720u;
    {
        const bool branch_taken_0x14d720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d720) {
            ctx->pc = 0x14D750u;
            goto label_14d750;
        }
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D728u;
        // 0x14d72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D738u;
            goto label_14d738;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D730u;
    SET_GPR_U32(ctx, 31, 0x14D738u);
    ctx->pc = 0x14D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D730u;
    // 0x14d734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D730u, 0x14D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D738u;
label_14d738:
    // 0x14d738: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d73c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d740: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d748: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14D748u;
    {
        const bool branch_taken_0x14d748 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D748u;
        // 0x14d74c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d748) {
            ctx->pc = 0x14D728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d728;
        }
    }
    ctx->pc = 0x14D750u;
label_14d750:
    // 0x14d750: 0x237082b  sltu        $at, $s1, $s7
    ctx->pc = 0x14d750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14d754: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D754u;
    {
        const bool branch_taken_0x14d754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d754) {
            ctx->pc = 0x14D78Cu;
            goto label_14d78c;
        }
    }
    ctx->pc = 0x14D75Cu;
label_14d75c:
    // 0x14d75c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D75Cu;
    {
        const bool branch_taken_0x14d75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D75Cu;
        // 0x14d760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d75c) {
            ctx->pc = 0x14D76Cu;
            goto label_14d76c;
        }
    }
    ctx->pc = 0x14D764u;
    // 0x14d764: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D764u;
    SET_GPR_U32(ctx, 31, 0x14D76Cu);
    ctx->pc = 0x14D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D764u;
    // 0x14d768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D764u, 0x14D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D76Cu;
label_14d76c:
    // 0x14d76c: 0x0  nop
    ctx->pc = 0x14d76cu;
    // NOP
    // 0x14d770: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d774: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d778: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d77c: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14d780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d784: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D784u;
    {
        const bool branch_taken_0x14d784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D784u;
        // 0x14d788: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d784) {
            ctx->pc = 0x14D75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d75c;
        }
    }
    ctx->pc = 0x14D78Cu;
label_14d78c:
    // 0x14d78c: 0x0  nop
    ctx->pc = 0x14d78cu;
    // NOP
    // 0x14d790: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14d790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14d794: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x14D794u;
    {
        const bool branch_taken_0x14d794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D794u;
        // 0x14d798: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d794) {
            ctx->pc = 0x14D7C4u;
            goto label_14d7c4;
        }
    }
    ctx->pc = 0x14D79Cu;
    // 0x14d79c: 0xc053604  jal         func_14D810
    ctx->pc = 0x14D79Cu;
    SET_GPR_U32(ctx, 31, 0x14D7A4u);
    ctx->pc = 0x14D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D810u, 0x14D79Cu, 0x14D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7A4u;
label_14d7a4:
    // 0x14d7a4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d7a8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d7ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x14d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14d7b0: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x14d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x14d7b4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d7b8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d7bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x14d7c0: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x14d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_14d7c4:
    // 0x14d7c4: 0xc05379c  jal         func_14DE70
    ctx->pc = 0x14D7C4u;
    SET_GPR_U32(ctx, 31, 0x14D7CCu);
    ctx->pc = 0x14D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7C4u;
    // 0x14d7c8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE70u, 0x14D7C4u, 0x14D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7CCu;
label_14d7cc:
    // 0x14d7cc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d7d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D7D0u;
    {
        const bool branch_taken_0x14d7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7d0) {
            ctx->pc = 0x14D7E0u;
            goto label_14d7e0;
        }
    }
    ctx->pc = 0x14D7D8u;
    // 0x14d7d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14D7D8u;
    SET_GPR_U32(ctx, 31, 0x14D7E0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14D7D8u, 0x14D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7E0u;
label_14d7e0:
    // 0x14d7e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14d7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_14d7e4:
    // 0x14d7e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14d7e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14d7e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14d7e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14d7ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14d7ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d7f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d7f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d808: 0x3e00008  jr          $ra
    ctx->pc = 0x14D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D808u;
        // 0x14d80c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D810u;
}
