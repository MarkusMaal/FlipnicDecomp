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

// Function: FUN_001bba60
// Address: 0x1bba60 - 0x1bbbfc
void FUN_001bba60_0x1bba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bba60_0x1bba60");
#endif

    switch (ctx->pc) {
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbd0u: goto label_1bbbd0;
        default: break;
    }

    ctx->pc = 0x1bba60u;

    // 0x1bba60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bba64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1bba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1bba68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bba6c: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x1bba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x1bba70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bba74: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x1bba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1bba78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bba7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1bba7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bba84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bba88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bba8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bba8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bba94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bba94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bba9c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x1bba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1bbaa0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bbaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F4C0u));
    // 0x1bbaa4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1bbaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbaa8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1bbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bbaac: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x1bbaacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bbab0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1bbab0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbab4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1bbab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bbab8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBAB8u;
    SET_GPR_U32(ctx, 31, 0x1BBAC0u);
    ctx->pc = 0x1BBABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAB8u;
    // 0x1bbabc: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBAB8u, 0x1BBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAC0u;
label_1bbac0:
    // 0x1bbac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bbac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbac4: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBAC4u;
    {
        const bool branch_taken_0x1bbac4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAC4u;
        // 0x1bbac8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbac4) {
            ctx->pc = 0x1BBAE8u;
            goto label_1bbae8;
        }
    }
    ctx->pc = 0x1BBACCu;
    // 0x1bbacc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbad0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bbad4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbad8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBAD8u;
    SET_GPR_U32(ctx, 31, 0x1BBAE0u);
    ctx->pc = 0x1BBADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAD8u;
    // 0x1bbadc: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBAD8u, 0x1BBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAE0u;
label_1bbae0:
    // 0x1bbae0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBAE0u;
    SET_GPR_U32(ctx, 31, 0x1BBAE8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBAE0u, 0x1BBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAE8u;
label_1bbae8:
    // 0x1bbae8: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1bbaec: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1bbaf0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bbaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbaf4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bbaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbafc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1bbafcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbb00: 0xafb40098  sw          $s4, 0x98($sp)
    ctx->pc = 0x1bbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 20));
    // 0x1bbb04: 0xc06ef4c  jal         func_1BBD30
    ctx->pc = 0x1BBB04u;
    SET_GPR_U32(ctx, 31, 0x1BBB0Cu);
    ctx->pc = 0x1BBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB04u;
    // 0x1bbb08: 0xafb50088  sw          $s5, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD30u, 0x1BBB04u, 0x1BBB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB0Cu;
label_1bbb0c:
    // 0x1bbb0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbb10: 0x24540008  addiu       $s4, $v0, 0x8
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bbb14: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBB14u;
    {
        const bool branch_taken_0x1bbb14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb14) {
            ctx->pc = 0x1BBB78u;
            goto label_1bbb78;
        }
    }
    ctx->pc = 0x1BBB1Cu;
    // 0x1bbb1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbb20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bbb24: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbb28: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bbb2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBB2Cu;
    {
        const bool branch_taken_0x1bbb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB2Cu;
        // 0x1bbb30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb2c) {
            ctx->pc = 0x1BBB44u;
            goto label_1bbb44;
        }
    }
    ctx->pc = 0x1BBB34u;
    // 0x1bbb34: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1bbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bbb38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbb3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BBB3Cu;
    {
        const bool branch_taken_0x1bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB3Cu;
        // 0x1bbb40: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb3c) {
            ctx->pc = 0x1BBB74u;
            goto label_1bbb74;
        }
    }
    ctx->pc = 0x1BBB44u;
label_1bbb44:
    // 0x1bbb44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb48: 0xc06ef38  jal         func_1BBCE0
    ctx->pc = 0x1BBB48u;
    SET_GPR_U32(ctx, 31, 0x1BBB50u);
    ctx->pc = 0x1BBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB48u;
    // 0x1bbb4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCE0u, 0x1BBB48u, 0x1BBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB50u;
label_1bbb50:
    // 0x1bbb50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bbb58: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1BBB58u;
    SET_GPR_U32(ctx, 31, 0x1BBB60u);
    ctx->pc = 0x1BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB58u;
    // 0x1bbb5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1BBB58u, 0x1BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB60u;
label_1bbb60:
    // 0x1bbb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBB60u;
    {
        const bool branch_taken_0x1bbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB60u;
        // 0x1bbb64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb60) {
            ctx->pc = 0x1BBB70u;
            goto label_1bbb70;
        }
    }
    ctx->pc = 0x1BBB68u;
    // 0x1bbb68: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BBB68u;
    SET_GPR_U32(ctx, 31, 0x1BBB70u);
    ctx->pc = 0x1BBB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB68u;
    // 0x1bbb6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BBB68u, 0x1BBB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB70u;
label_1bbb70:
    // 0x1bbb70: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1bbb70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb74:
    // 0x1bbb74: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x1bbb74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
label_1bbb78:
    // 0x1bbb78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbb7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bbb80: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1bbb84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbb88: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1bbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1bbb8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbb90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bbb94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1bbb98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1bbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1bbb9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbba4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bbba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1bbba8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1bbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1bbbac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbbb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBBB0u;
    {
        const bool branch_taken_0x1bbbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBB0u;
        // 0x1bbbb4: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbb0) {
            ctx->pc = 0x1BBBD0u;
            goto label_1bbbd0;
        }
    }
    ctx->pc = 0x1BBBB8u;
    // 0x1bbbb8: 0xc06ef04  jal         func_1BBC10
    ctx->pc = 0x1BBBB8u;
    SET_GPR_U32(ctx, 31, 0x1BBBC0u);
    ctx->pc = 0x1BBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC10u, 0x1BBBB8u, 0x1BBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBC0u;
label_1bbbc0:
    // 0x1bbbc0: 0xc06ef00  jal         func_1BBC00
    ctx->pc = 0x1BBBC0u;
    SET_GPR_U32(ctx, 31, 0x1BBBC8u);
    ctx->pc = 0x1BBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBC0u;
    // 0x1bbbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC00u, 0x1BBBC0u, 0x1BBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBC8u;
label_1bbbc8:
    // 0x1bbbc8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBBC8u;
    SET_GPR_U32(ctx, 31, 0x1BBBD0u);
    ctx->pc = 0x1BBBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBC8u;
    // 0x1bbbcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBBC8u, 0x1BBBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBD0u;
label_1bbbd0:
    // 0x1bbbd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bbbd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bbbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bbbd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bbbdc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bbbdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bbbe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bbbe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbbe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbbe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbbe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBF4u;
        // 0x1bbbf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBBFCu;
}
