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

// Function: FUN_0011bfa0
// Address: 0x11bfa0 - 0x11c164
void FUN_0011bfa0_0x11bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bfa0_0x11bfa0");
#endif

    switch (ctx->pc) {
        case 0x11bff8u: goto label_11bff8;
        case 0x11c008u: goto label_11c008;
        case 0x11c09cu: goto label_11c09c;
        case 0x11c0c8u: goto label_11c0c8;
        case 0x11c108u: goto label_11c108;
        case 0x11c140u: goto label_11c140;
        case 0x11c14cu: goto label_11c14c;
        default: break;
    }

    ctx->pc = 0x11bfa0u;

    // 0x11bfa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11bfa4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x11bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x11bfa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11bfac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11bfb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11bfb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11bfb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11bfbc: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x11bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x11bfc0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x11bfc4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x11bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x11bfc8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11bfcc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bfd0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x11bfd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11bfd4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x11bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11bfd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11bfdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11bfe0: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x11bfe4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11bfe8: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x11bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x11bfec: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x11bfecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11bff0: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BFF0u;
    SET_GPR_U32(ctx, 31, 0x11BFF8u);
    ctx->pc = 0x11BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFF0u;
    // 0x11bff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BFF0u, 0x11BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFF8u;
label_11bff8:
    // 0x11bff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bffc: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x11bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x11c000: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11C000u;
    SET_GPR_U32(ctx, 31, 0x11C008u);
    ctx->pc = 0x11C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C000u;
    // 0x11c004: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11C000u, 0x11C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C008u;
label_11c008:
    // 0x11c008: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x11c008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x11c00c: 0x8e50004c  lw          $s0, 0x4C($s2)
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x11c010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c014: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C014u;
    {
        const bool branch_taken_0x11c014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c014) {
            ctx->pc = 0x11C038u;
            goto label_11c038;
        }
    }
    ctx->pc = 0x11C01Cu;
    // 0x11c01c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c020: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c024: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11c024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c028: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C028u;
    {
        const bool branch_taken_0x11c028 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C028u;
        // 0x11c02c: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c028) {
            ctx->pc = 0x11C038u;
            goto label_11c038;
        }
    }
    ctx->pc = 0x11C030u;
    // 0x11c030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c034: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x11c034u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_11c038:
    // 0x11c038: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11c03c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c040: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C040u;
    {
        const bool branch_taken_0x11c040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c040) {
            ctx->pc = 0x11C064u;
            goto label_11c064;
        }
    }
    ctx->pc = 0x11C048u;
    // 0x11c048: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x11c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c04c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C054u;
    {
        const bool branch_taken_0x11c054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C054u;
        // 0x11c058: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c054) {
            ctx->pc = 0x11C064u;
            goto label_11c064;
        }
    }
    ctx->pc = 0x11C05Cu;
    // 0x11c05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c060: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_11c064:
    // 0x11c064: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11c068: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11C0D0u;
            goto label_11c0d0;
        }
    }
    ctx->pc = 0x11C070u;
    // 0x11c070: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c074: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11c07c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c080: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x11c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x11c084: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c088: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x11c08c: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c090: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c094: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C094u;
    SET_GPR_U32(ctx, 31, 0x11C09Cu);
    ctx->pc = 0x11C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C094u;
    // 0x11c098: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C094u, 0x11C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C09Cu;
label_11c09c:
    // 0x11c09c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c0a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11c0a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0ac: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x11c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x11c0b0: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x11c0b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11c0b4: 0x8e4500e0  lw          $a1, 0xE0($s2)
    ctx->pc = 0x11c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x11c0b8: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c0bc: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c0c0: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C0C0u;
    SET_GPR_U32(ctx, 31, 0x11C0C8u);
    ctx->pc = 0x11C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0C0u;
    // 0x11c0c4: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C0C0u, 0x11C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0C8u;
label_11c0c8:
    // 0x11c0c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11C0C8u;
    {
        const bool branch_taken_0x11c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0C8u;
        // 0x11c0cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0c8) {
            ctx->pc = 0x11C144u;
            goto label_11c144;
        }
    }
    ctx->pc = 0x11C0D0u;
label_11c0d0:
    // 0x11c0d0: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c0d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c0d8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x11c0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c0e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11c0ec: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x11c0f0: 0x2503003f  addiu       $v1, $t0, 0x3F
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x11c0f4: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x11c0f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11c0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11c0fc: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c100: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C100u;
    SET_GPR_U32(ctx, 31, 0x11C108u);
    ctx->pc = 0x11C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C100u;
    // 0x11c104: 0x25982  srl         $t3, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C100u, 0x11C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C108u;
label_11c108:
    // 0x11c108: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c10c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c110: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x11c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x11c114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c11cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c120: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11c124: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x11c128: 0x2503003f  addiu       $v1, $t0, 0x3F
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x11c12c: 0x8e4500e0  lw          $a1, 0xE0($s2)
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x11c130: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11c134: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c138: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C138u;
    SET_GPR_U32(ctx, 31, 0x11C140u);
    ctx->pc = 0x11C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C138u;
    // 0x11c13c: 0x25982  srl         $t3, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C138u, 0x11C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C140u;
label_11c140:
    // 0x11c140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c144:
    // 0x11c144: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11C144u;
    SET_GPR_U32(ctx, 31, 0x11C14Cu);
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11C144u, 0x11C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C14Cu;
label_11c14c:
    // 0x11c14c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c150: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11c150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c154: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C15Cu;
        // 0x11c160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C164u;
}
