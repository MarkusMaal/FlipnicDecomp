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

// Function: FUN_001fff38
// Address: 0x1fff38 - 0x200164
void FUN_001fff38_0x1fff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fff38_0x1fff38");
#endif

    switch (ctx->pc) {
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x200018u: goto label_200018;
        case 0x200038u: goto label_200038;
        case 0x2000b8u: goto label_2000b8;
        case 0x200120u: goto label_200120;
        default: break;
    }

    ctx->pc = 0x1fff38u;

    // 0x1fff38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fff3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fff40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fff44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fff44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fff4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fff4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff50: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1fff54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fff58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1fff5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fff60: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fff64: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fff68: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1fff68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1fff6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFF6Cu;
    {
        const bool branch_taken_0x1fff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF6Cu;
        // 0x1fff70: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff6c) {
            ctx->pc = 0x1FFF84u;
            goto label_1fff84;
        }
    }
    ctx->pc = 0x1FFF74u;
    // 0x1fff74: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1fff74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff78: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x1fff78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff7c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1fff7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fff80: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fff84:
    // 0x1fff84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fff88: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1fff8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fff90: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x1fff90u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fff94: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFF94u;
    SET_GPR_U32(ctx, 31, 0x1FFF9Cu);
    ctx->pc = 0x1FFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF94u;
    // 0x1fff98: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFF94u, 0x1FFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF9Cu;
label_1fff9c:
    // 0x1fff9c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x1fff9cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffa0: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1fffa4: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x1fffa8: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x1fffac: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x1fffacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fffb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFFB0u;
    {
        const bool branch_taken_0x1fffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFB0u;
        // 0x1fffb4: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffb0) {
            ctx->pc = 0x1FFFECu;
            goto label_1fffec;
        }
    }
    ctx->pc = 0x1FFFB8u;
    // 0x1fffb8: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fffbc: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1fffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fffc0: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1fffc4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1fffc8:
    // 0x1fffc8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1fffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1fffcc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1fffd0: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x1fffd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fffd4: 0x0  nop
    ctx->pc = 0x1fffd4u;
    // NOP
    // 0x1fffd8: 0x0  nop
    ctx->pc = 0x1fffd8u;
    // NOP
    // 0x1fffdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFFDCu;
    {
        const bool branch_taken_0x1fffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffdc) {
            ctx->pc = 0x1FFFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fffc8;
        }
    }
    ctx->pc = 0x1FFFE4u;
    // 0x1fffe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFFE4u;
    {
        const bool branch_taken_0x1fffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE4u;
        // 0x1fffe8: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe4) {
            ctx->pc = 0x200000u;
            goto label_200000;
        }
    }
    ctx->pc = 0x1FFFECu;
label_1fffec:
    // 0x1fffec: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1ffff0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ffff4: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1ffff8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1ffff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ffffc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1ffffcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200000:
    // 0x200000: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x200004: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x200008: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x200008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20000c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x20000Cu;
    {
        const bool branch_taken_0x20000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20000c) {
            ctx->pc = 0x20011Cu;
            goto label_20011c;
        }
    }
    ctx->pc = 0x200014u;
    // 0x200014: 0x0  nop
    ctx->pc = 0x200014u;
    // NOP
label_200018:
    // 0x200018: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20001c: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x20001cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x200020: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x200020u;
    {
        const bool branch_taken_0x200020 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x200024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200020u;
        // 0x200024: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200020) {
            ctx->pc = 0x200094u;
            goto label_200094;
        }
    }
    ctx->pc = 0x200028u;
    // 0x200028: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x200028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20002c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20002cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200030: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x200030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200034: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_200038:
    // 0x200038: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20003c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200040: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x200044: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x200044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x200048: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x200048u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20004c: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x20004cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200050: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x200054: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x200054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200058: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x200058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x20005c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x20005cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x200060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x200064: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x200068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20006c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x200070: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x200070u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200074: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x200078: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x200078u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x20007c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x200080: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x200080u;
    {
        const bool branch_taken_0x200080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x200084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200080u;
        // 0x200084: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200080) {
            ctx->pc = 0x200038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200038;
        }
    }
    ctx->pc = 0x200088u;
    // 0x200088: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x200088u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x20008c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20008Cu;
    {
        const bool branch_taken_0x20008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20008Cu;
        // 0x200090: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20008c) {
            ctx->pc = 0x20009Cu;
            goto label_20009c;
        }
    }
    ctx->pc = 0x200094u;
label_200094:
    // 0x200094: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200098: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_20009c:
    // 0x20009c: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x20009cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2000a0: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2000A0u;
    {
        const bool branch_taken_0x2000a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000A0u;
        // 0x2000a4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000a0) {
            ctx->pc = 0x20010Cu;
            goto label_20010c;
        }
    }
    ctx->pc = 0x2000A8u;
    // 0x2000a8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2000a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000ac: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2000acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2000b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2000b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000b4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2000b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2000b8:
    // 0x2000b8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2000bc: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2000c0: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x2000c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2000c4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2000c8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2000cc: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x2000ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2000d0: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2000d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2000d4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2000d8: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x2000d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2000dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2000e0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2000e4: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x2000e4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2000e8: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2000ec: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2000ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2000f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2000f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2000f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2000f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2000fc: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x200100: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x200100u;
    {
        const bool branch_taken_0x200100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x200104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200100u;
        // 0x200104: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200100) {
            ctx->pc = 0x2000B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2000b8;
        }
    }
    ctx->pc = 0x200108u;
    // 0x200108: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x200108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_20010c:
    // 0x20010c: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x20010cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200110: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x200110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x200114: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x200114u;
    {
        const bool branch_taken_0x200114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200114u;
        // 0x200118: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200114) {
            ctx->pc = 0x200018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200018;
        }
    }
    ctx->pc = 0x20011Cu;
label_20011c:
    // 0x20011c: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x20011cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_200120:
    // 0x200120: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x200120u;
    {
        const bool branch_taken_0x200120 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x200120) {
            ctx->pc = 0x200124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200120u;
            // 0x200124: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20013Cu;
            goto label_20013c;
        }
    }
    ctx->pc = 0x200128u;
    // 0x200128: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x200128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x20012c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200130: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200130u;
    {
        const bool branch_taken_0x200130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200130) {
            ctx->pc = 0x200134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200130u;
            // 0x200134: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200120;
        }
    }
    ctx->pc = 0x200138u;
    // 0x200138: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x200138u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_20013c:
    // 0x20013c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x20013cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200140: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x200140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200144: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x200144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200148: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x200148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20014c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20014cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200150: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x200150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200154: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x200154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20015c: 0x3e00008  jr          $ra
    ctx->pc = 0x20015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20015Cu;
        // 0x200160: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200164u;
}
