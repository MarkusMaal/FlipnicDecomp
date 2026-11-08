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

// Function: FUN_00145980
// Address: 0x145980 - 0x145bec
void FUN_00145980_0x145980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145980_0x145980");
#endif

    switch (ctx->pc) {
        case 0x1459d0u: goto label_1459d0;
        case 0x1459dcu: goto label_1459dc;
        case 0x1459fcu: goto label_1459fc;
        case 0x145a04u: goto label_145a04;
        case 0x145a28u: goto label_145a28;
        case 0x145a3cu: goto label_145a3c;
        case 0x145a70u: goto label_145a70;
        case 0x145a94u: goto label_145a94;
        case 0x145ad0u: goto label_145ad0;
        case 0x145adcu: goto label_145adc;
        case 0x145b14u: goto label_145b14;
        case 0x145b20u: goto label_145b20;
        case 0x145b4cu: goto label_145b4c;
        case 0x145b98u: goto label_145b98;
        case 0x145bc4u: goto label_145bc4;
        default: break;
    }

    ctx->pc = 0x145980u;

    // 0x145980: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x145980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x145984: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x145984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x145988: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x145988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14598c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x145990: 0x27b60084  addiu       $s6, $sp, 0x84
    ctx->pc = 0x145990u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x145994: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x145998: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x145998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14599c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1459a0: 0x27b4008c  addiu       $s4, $sp, 0x8C
    ctx->pc = 0x1459a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1459a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1459a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1459a8: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x1459a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1459ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1459acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1459b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1459b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1459b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1459b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459b8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1459b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1459bc: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1459c0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1459c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1459c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1459c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1459c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1459cc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1459ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1459d0:
    // 0x1459d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1459d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1459d4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1459D4u;
    SET_GPR_U32(ctx, 31, 0x1459DCu);
    ctx->pc = 0x1459D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459D4u;
    // 0x1459d8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1459D4u, 0x1459DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459DCu;
label_1459dc:
    // 0x1459dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1459dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459e0: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1459E0u;
    {
        const bool branch_taken_0x1459e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1459E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459E0u;
        // 0x1459e4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459e0) {
            ctx->pc = 0x145A04u;
            goto label_145a04;
        }
    }
    ctx->pc = 0x1459E8u;
    // 0x1459e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1459e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1459ec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1459ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1459f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1459f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1459f4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1459F4u;
    SET_GPR_U32(ctx, 31, 0x1459FCu);
    ctx->pc = 0x1459F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459F4u;
    // 0x1459f8: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1459F4u, 0x1459FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459FCu;
label_1459fc:
    // 0x1459fc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1459FCu;
    SET_GPR_U32(ctx, 31, 0x145A04u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1459FCu, 0x145A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A04u;
label_145a04:
    // 0x145a04: 0x0  nop
    ctx->pc = 0x145a04u;
    // NOP
    // 0x145a08: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x145A08u;
    {
        const bool branch_taken_0x145a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145a08) {
            ctx->pc = 0x145B4Cu;
            goto label_145b4c;
        }
    }
    ctx->pc = 0x145A10u;
    // 0x145a10: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x145a14: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x145a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x145a18: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x145A18u;
    {
        const bool branch_taken_0x145a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x145A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A18u;
        // 0x145a1c: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a18) {
            ctx->pc = 0x145B4Cu;
            goto label_145b4c;
        }
    }
    ctx->pc = 0x145A20u;
    // 0x145a20: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x145A20u;
    SET_GPR_U32(ctx, 31, 0x145A28u);
    ctx->pc = 0x145A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A20u;
    // 0x145a24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x145A20u, 0x145A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A28u;
label_145a28:
    // 0x145a28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x145a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145a2c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x145a30: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x145a30u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x145a34: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x145A34u;
    SET_GPR_U32(ctx, 31, 0x145A3Cu);
    ctx->pc = 0x145A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A34u;
    // 0x145a38: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x145A34u, 0x145A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A3Cu;
label_145a3c:
    // 0x145a3c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x145a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x145a40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145a44: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145a48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145a4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x145a50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x145A50u;
    {
        const bool branch_taken_0x145a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a50) {
            ctx->pc = 0x145A78u;
            goto label_145a78;
        }
    }
    ctx->pc = 0x145A58u;
    // 0x145a58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145a5c: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x145a60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145a64: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145a68: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145A68u;
    SET_GPR_U32(ctx, 31, 0x145A70u);
    ctx->pc = 0x145A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A68u;
    // 0x145a6c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145A68u, 0x145A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A70u;
label_145a70:
    // 0x145a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145A70u;
    {
        const bool branch_taken_0x145a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a70) {
            ctx->pc = 0x145A94u;
            goto label_145a94;
        }
    }
    ctx->pc = 0x145A78u;
label_145a78:
    // 0x145a78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145a80: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x145a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x145a84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145a88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145a8c: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145A8Cu;
    SET_GPR_U32(ctx, 31, 0x145A94u);
    ctx->pc = 0x145A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A8Cu;
    // 0x145a90: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145A8Cu, 0x145A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A94u;
label_145a94:
    // 0x145a94: 0x0  nop
    ctx->pc = 0x145a94u;
    // NOP
    // 0x145a98: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x145a9c: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x145a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x145aa0: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x145aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x145aa4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x145aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x145aa8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ab0: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x145ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x145ab4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x145ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x145ab8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x145ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x145abc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x145abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145ac0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145ac8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145AC8u;
    SET_GPR_U32(ctx, 31, 0x145AD0u);
    ctx->pc = 0x145ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AC8u;
    // 0x145acc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145AC8u, 0x145AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AD0u;
label_145ad0:
    // 0x145ad0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x145ad4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145AD4u;
    SET_GPR_U32(ctx, 31, 0x145ADCu);
    ctx->pc = 0x145AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AD4u;
    // 0x145ad8: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145AD4u, 0x145ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ADCu;
label_145adc:
    // 0x145adc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x145ae0: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x145ae4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x145ae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145ae8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x145ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145aec: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x145af0: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x145af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x145af4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x145af4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x145af8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145afc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x145afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x145b00: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x145b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x145b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b08: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x145b08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x145b0c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145B0Cu;
    SET_GPR_U32(ctx, 31, 0x145B14u);
    ctx->pc = 0x145B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B0Cu;
    // 0x145b10: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145B0Cu, 0x145B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B14u;
label_145b14:
    // 0x145b14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x145b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145b18: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145B18u;
    SET_GPR_U32(ctx, 31, 0x145B20u);
    ctx->pc = 0x145B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B18u;
    // 0x145b1c: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145B18u, 0x145B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B20u;
label_145b20:
    // 0x145b20: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145b24: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x145b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145b28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x145b28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b2c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x145b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145b30: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145b34: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x145b34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x145b38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x145b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x145b40: 0x83a7013c  lb          $a3, 0x13C($sp)
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x145b44: 0xc051740  jal         func_145D00
    ctx->pc = 0x145B44u;
    SET_GPR_U32(ctx, 31, 0x145B4Cu);
    ctx->pc = 0x145B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B44u;
    // 0x145b48: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D00u, 0x145B44u, 0x145B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B4Cu;
label_145b4c:
    // 0x145b4c: 0x0  nop
    ctx->pc = 0x145b4cu;
    // NOP
    // 0x145b50: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x145b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x145b54: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x145b58: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x145b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x145b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x145b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x145b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x145b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145b64: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x145b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x145b68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x145B68u;
    {
        const bool branch_taken_0x145b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b68) {
            ctx->pc = 0x145B74u;
            goto label_145b74;
        }
    }
    ctx->pc = 0x145B70u;
    // 0x145b70: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_145b74:
    // 0x145b74: 0x0  nop
    ctx->pc = 0x145b74u;
    // NOP
    // 0x145b78: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x145b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145b80: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x145b84: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x145b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x145b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145b8c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x145b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x145b90: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x145B90u;
    SET_GPR_U32(ctx, 31, 0x145B98u);
    ctx->pc = 0x145B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B90u;
    // 0x145b94: 0xafa00138  sw          $zero, 0x138($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x145B90u, 0x145B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B98u;
label_145b98:
    // 0x145b98: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x145b9c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x145ba0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BA0u;
    {
        const bool branch_taken_0x145ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ba0) {
            ctx->pc = 0x145BB0u;
            goto label_145bb0;
        }
    }
    ctx->pc = 0x145BA8u;
    // 0x145ba8: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x145BA8u;
    {
        const bool branch_taken_0x145ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BA8u;
        // 0x145bac: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ba8) {
            ctx->pc = 0x1459D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1459d0;
        }
    }
    ctx->pc = 0x145BB0u;
label_145bb0:
    // 0x145bb0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145bb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BB4u;
    {
        const bool branch_taken_0x145bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bb4) {
            ctx->pc = 0x145BC4u;
            goto label_145bc4;
        }
    }
    ctx->pc = 0x145BBCu;
    // 0x145bbc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145BBCu;
    SET_GPR_U32(ctx, 31, 0x145BC4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145BBCu, 0x145BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BC4u;
label_145bc4:
    // 0x145bc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x145bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145bc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x145bc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145bcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x145bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145bd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145be4: 0x3e00008  jr          $ra
    ctx->pc = 0x145BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BE4u;
        // 0x145be8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BECu;
}
