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

// Function: FUN_0014b480
// Address: 0x14b480 - 0x14b6e4
void FUN_0014b480_0x14b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b480_0x14b480");
#endif

    switch (ctx->pc) {
        case 0x14b4c4u: goto label_14b4c4;
        case 0x14b4d0u: goto label_14b4d0;
        case 0x14b4f0u: goto label_14b4f0;
        case 0x14b4f8u: goto label_14b4f8;
        case 0x14b518u: goto label_14b518;
        case 0x14b52cu: goto label_14b52c;
        case 0x14b560u: goto label_14b560;
        case 0x14b584u: goto label_14b584;
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5ccu: goto label_14b5cc;
        case 0x14b604u: goto label_14b604;
        case 0x14b610u: goto label_14b610;
        case 0x14b63cu: goto label_14b63c;
        case 0x14b64cu: goto label_14b64c;
        default: break;
    }

    ctx->pc = 0x14b480u;

    // 0x14b480: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x14b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x14b484: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14b488: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14b48c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14b490: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b494: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b498: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14b498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b49c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b4a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14b4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b4a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14b4a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b4b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b4b4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x14b4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4b8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14b4bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4c0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14b4c4:
    // 0x14b4c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b4c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14B4C8u;
    SET_GPR_U32(ctx, 31, 0x14B4D0u);
    ctx->pc = 0x14B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4C8u;
    // 0x14b4cc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14B4C8u, 0x14B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4D0u;
label_14b4d0:
    // 0x14b4d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14b4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4d4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B4D4u;
    {
        const bool branch_taken_0x14b4d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4D4u;
        // 0x14b4d8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4d4) {
            ctx->pc = 0x14B4F8u;
            goto label_14b4f8;
        }
    }
    ctx->pc = 0x14B4DCu;
    // 0x14b4dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14b4e0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14b4e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b4e8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14B4E8u;
    SET_GPR_U32(ctx, 31, 0x14B4F0u);
    ctx->pc = 0x14B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4E8u;
    // 0x14b4ec: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14B4E8u, 0x14B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4F0u;
label_14b4f0:
    // 0x14b4f0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14B4F0u;
    SET_GPR_U32(ctx, 31, 0x14B4F8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14B4F0u, 0x14B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4F8u;
label_14b4f8:
    // 0x14b4f8: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B4F8u;
    {
        const bool branch_taken_0x14b4f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4F8u;
        // 0x14b4fc: 0xafb20128  sw          $s2, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4f8) {
            ctx->pc = 0x14B63Cu;
            goto label_14b63c;
        }
    }
    ctx->pc = 0x14B500u;
    // 0x14b500: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b504: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14b508: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x14B508u;
    {
        const bool branch_taken_0x14b508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b508) {
            ctx->pc = 0x14B63Cu;
            goto label_14b63c;
        }
    }
    ctx->pc = 0x14B510u;
    // 0x14b510: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x14B510u;
    SET_GPR_U32(ctx, 31, 0x14B518u);
    ctx->pc = 0x14B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B510u;
    // 0x14b514: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x14B510u, 0x14B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B518u;
label_14b518:
    // 0x14b518: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b51c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b520: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x14b520u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14b524: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B524u;
    SET_GPR_U32(ctx, 31, 0x14B52Cu);
    ctx->pc = 0x14B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B524u;
    // 0x14b528: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B524u, 0x14B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B52Cu;
label_14b52c:
    // 0x14b52c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14b530: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x14b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b534: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b538: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14b53c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14b53cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b540: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B540u;
    {
        const bool branch_taken_0x14b540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b540) {
            ctx->pc = 0x14B568u;
            goto label_14b568;
        }
    }
    ctx->pc = 0x14B548u;
    // 0x14b548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b54c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14b550: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b554: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b558: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x14B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B558u;
    // 0x14b55c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B560u;
    {
        const bool branch_taken_0x14b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b560) {
            ctx->pc = 0x14B584u;
            goto label_14b584;
        }
    }
    ctx->pc = 0x14B568u;
label_14b568:
    // 0x14b568: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b56c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b570: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14b574: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b578: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b57c: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B57Cu;
    SET_GPR_U32(ctx, 31, 0x14B584u);
    ctx->pc = 0x14B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B57Cu;
    // 0x14b580: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B57Cu, 0x14B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B584u;
label_14b584:
    // 0x14b584: 0x0  nop
    ctx->pc = 0x14b584u;
    // NOP
    // 0x14b588: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x14b588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x14b58c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x14b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x14b590: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x14b594: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14b598: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b59c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a0: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x14b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x14b5a4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x14b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x14b5a8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x14b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x14b5ac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b5b0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b5b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b5b8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B5B8u;
    SET_GPR_U32(ctx, 31, 0x14B5C0u);
    ctx->pc = 0x14B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5B8u;
    // 0x14b5bc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B5B8u, 0x14B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5C0u;
label_14b5c0:
    // 0x14b5c0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x14b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b5c4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B5C4u;
    SET_GPR_U32(ctx, 31, 0x14B5CCu);
    ctx->pc = 0x14B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5C4u;
    // 0x14b5c8: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B5C4u, 0x14B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5CCu;
label_14b5cc:
    // 0x14b5cc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b5d0: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14b5d4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14b5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b5d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b5dc: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14b5e0: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14b5e4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14b5e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b5ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x14b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x14b5f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14b5f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b5f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b5f8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14b5fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B5FCu;
    SET_GPR_U32(ctx, 31, 0x14B604u);
    ctx->pc = 0x14B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5FCu;
    // 0x14b600: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B5FCu, 0x14B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B604u;
label_14b604:
    // 0x14b604: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b608: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B608u;
    SET_GPR_U32(ctx, 31, 0x14B610u);
    ctx->pc = 0x14B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B608u;
    // 0x14b60c: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B608u, 0x14B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B610u;
label_14b610:
    // 0x14b610: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b614: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14b618: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14b618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b61c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x14b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b620: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b624: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14b624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14b628: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14b628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b62c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14b630: 0x83a7012c  lb          $a3, 0x12C($sp)
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x14b634: 0xc052e54  jal         func_14B950
    ctx->pc = 0x14B634u;
    SET_GPR_U32(ctx, 31, 0x14B63Cu);
    ctx->pc = 0x14B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B634u;
    // 0x14b638: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B950u, 0x14B634u, 0x14B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B63Cu;
label_14b63c:
    // 0x14b63c: 0x0  nop
    ctx->pc = 0x14b63cu;
    // NOP
    // 0x14b640: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b644: 0xc052ed8  jal         func_14BB60
    ctx->pc = 0x14B644u;
    SET_GPR_U32(ctx, 31, 0x14B64Cu);
    ctx->pc = 0x14B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B644u;
    // 0x14b648: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB60u, 0x14B644u, 0x14B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B64Cu;
label_14b64c:
    // 0x14b64c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b654: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14b654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14b658: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14b65c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b664: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x14b664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x14b668: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b66c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x14b66cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14b670: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x14B670u;
    {
        const bool branch_taken_0x14b670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b670) {
            ctx->pc = 0x14B6B0u;
            goto label_14b6b0;
        }
    }
    ctx->pc = 0x14B678u;
    // 0x14b678: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14b67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B67Cu;
    {
        const bool branch_taken_0x14b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b67c) {
            ctx->pc = 0x14B694u;
            goto label_14b694;
        }
    }
    ctx->pc = 0x14B684u;
    // 0x14b684: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14b688: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14b68c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B68Cu;
    {
        const bool branch_taken_0x14b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B68Cu;
        // 0x14b690: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b68c) {
            ctx->pc = 0x14B6B8u;
            goto label_14b6b8;
        }
    }
    ctx->pc = 0x14B694u;
label_14b694:
    // 0x14b694: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b69c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x14b69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14b6a0: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x14b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14b6a4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14b6a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B6A8u;
    {
        const bool branch_taken_0x14b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6A8u;
        // 0x14b6ac: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6a8) {
            ctx->pc = 0x14B6B8u;
            goto label_14b6b8;
        }
    }
    ctx->pc = 0x14B6B0u;
label_14b6b0:
    // 0x14b6b0: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x14B6B0u;
    {
        const bool branch_taken_0x14b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6B0u;
        // 0x14b6b4: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6b0) {
            ctx->pc = 0x14B4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b4c4;
        }
    }
    ctx->pc = 0x14B6B8u;
label_14b6b8:
    // 0x14b6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14b6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b6c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14b6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b6c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14b6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b6c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6DCu;
        // 0x14b6e0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6E4u;
}
