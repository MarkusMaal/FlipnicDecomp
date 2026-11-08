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

// Function: FUN_001509b0
// Address: 0x1509b0 - 0x150b54
void FUN_001509b0_0x1509b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001509b0_0x1509b0");
#endif

    switch (ctx->pc) {
        case 0x1509ecu: goto label_1509ec;
        case 0x1509fcu: goto label_1509fc;
        case 0x150a0cu: goto label_150a0c;
        case 0x150a40u: goto label_150a40;
        case 0x150a64u: goto label_150a64;
        case 0x150aecu: goto label_150aec;
        case 0x150af8u: goto label_150af8;
        case 0x150b08u: goto label_150b08;
        case 0x150b10u: goto label_150b10;
        default: break;
    }

    ctx->pc = 0x1509b0u;

    // 0x1509b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1509b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1509b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1509b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1509b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1509bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1509bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1509c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1509c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1509c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1509c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1509c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1509c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1509cc: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1509CCu;
    {
        const bool branch_taken_0x1509cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509CCu;
        // 0x1509d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509cc) {
            ctx->pc = 0x150B38u;
            goto label_150b38;
        }
    }
    ctx->pc = 0x1509D4u;
    // 0x1509d4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1509d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1509d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1509dc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1509e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1509e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509e4: 0xc0543c4  jal         func_150F10
    ctx->pc = 0x1509E4u;
    SET_GPR_U32(ctx, 31, 0x1509ECu);
    ctx->pc = 0x1509E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509E4u;
    // 0x1509e8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F10u, 0x1509E4u, 0x1509ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509ECu;
label_1509ec:
    // 0x1509ec: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1509f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1509f4: 0xc0543c4  jal         func_150F10
    ctx->pc = 0x1509F4u;
    SET_GPR_U32(ctx, 31, 0x1509FCu);
    ctx->pc = 0x1509F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509F4u;
    // 0x1509f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F10u, 0x1509F4u, 0x1509FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509FCu;
label_1509fc:
    // 0x1509fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1509fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a00: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x150a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150a04: 0xc054408  jal         func_151020
    ctx->pc = 0x150A04u;
    SET_GPR_U32(ctx, 31, 0x150A0Cu);
    ctx->pc = 0x150A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A04u;
    // 0x150a08: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151020u, 0x150A04u, 0x150A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A0Cu;
label_150a0c:
    // 0x150a0c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150a10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x150a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150a14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x150a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x150a18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x150a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150a1c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x150a1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x150a20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x150A20u;
    {
        const bool branch_taken_0x150a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x150a20) {
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x150A28u;
    // 0x150a28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150a2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150a30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150a34: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150a38: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x150A38u;
    SET_GPR_U32(ctx, 31, 0x150A40u);
    ctx->pc = 0x150A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A38u;
    // 0x150a3c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x150A38u, 0x150A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A40u;
label_150a40:
    // 0x150a40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x150A40u;
    {
        const bool branch_taken_0x150a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A40u;
        // 0x150a44: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a40) {
            ctx->pc = 0x150A68u;
            goto label_150a68;
        }
    }
    ctx->pc = 0x150A48u;
label_150a48:
    // 0x150a48: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150a4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x150a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150a50: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150a54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150a58: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150a5c: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x150A5Cu;
    SET_GPR_U32(ctx, 31, 0x150A64u);
    ctx->pc = 0x150A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A5Cu;
    // 0x150a60: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x150A5Cu, 0x150A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A64u;
label_150a64:
    // 0x150a64: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_150a68:
    // 0x150a68: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x150a6c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x150a70: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x150a74: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x150a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x150a78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x150a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x150a7c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x150a80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x150a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x150a84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150a88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x150a8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x150a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x150a90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150a94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150a98: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150a9c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150A9Cu;
    {
        const bool branch_taken_0x150a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A9Cu;
        // 0x150aa0: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a9c) {
            ctx->pc = 0x150ABCu;
            goto label_150abc;
        }
    }
    ctx->pc = 0x150AA4u;
    // 0x150aa4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x150aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150aa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150aac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150ab0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150ab8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x150ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_150abc:
    // 0x150abc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x150ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150ac4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150acc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x150ad0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x150ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x150ad4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150ad8: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x150adc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150ae4: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x150AE4u;
    SET_GPR_U32(ctx, 31, 0x150AECu);
    ctx->pc = 0x150AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AE4u;
    // 0x150ae8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x150AE4u, 0x150AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AECu;
label_150aec:
    // 0x150aec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150af0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x150AF0u;
    SET_GPR_U32(ctx, 31, 0x150AF8u);
    ctx->pc = 0x150AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AF0u;
    // 0x150af4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x150AF0u, 0x150AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AF8u;
label_150af8:
    // 0x150af8: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x150afc: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x150b00: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x150B00u;
    {
        const bool branch_taken_0x150b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x150B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B00u;
        // 0x150b04: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b00) {
            ctx->pc = 0x150B38u;
            goto label_150b38;
        }
    }
    ctx->pc = 0x150B08u;
label_150b08:
    // 0x150b08: 0xc0401a4  jal         func_100690
    ctx->pc = 0x150B08u;
    SET_GPR_U32(ctx, 31, 0x150B10u);
    ctx->pc = 0x150B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B08u;
    // 0x150b0c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x150B08u, 0x150B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B10u;
label_150b10:
    // 0x150b10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x150b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150b14: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x150b18: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x150b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150b1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150b20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150b24: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x150B24u;
    {
        const bool branch_taken_0x150b24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x150B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B24u;
        // 0x150b28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b24) {
            ctx->pc = 0x150B30u;
            goto label_150b30;
        }
    }
    ctx->pc = 0x150B2Cu;
    // 0x150b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x150b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150b30:
    // 0x150b30: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x150B30u;
    {
        const bool branch_taken_0x150b30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x150b30) {
            ctx->pc = 0x150B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150b08;
        }
    }
    ctx->pc = 0x150B38u;
label_150b38:
    // 0x150b38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x150B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B4Cu;
        // 0x150b50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B54u;
}
