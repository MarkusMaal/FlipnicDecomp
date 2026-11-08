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

// Function: FUN_0011b860
// Address: 0x11b860 - 0x11bac0
void FUN_0011b860_0x11b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b860_0x11b860");
#endif

    switch (ctx->pc) {
        case 0x11b8a8u: goto label_11b8a8;
        case 0x11b8b8u: goto label_11b8b8;
        case 0x11b908u: goto label_11b908;
        case 0x11b928u: goto label_11b928;
        case 0x11b938u: goto label_11b938;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b970u: goto label_11b970;
        case 0x11b984u: goto label_11b984;
        case 0x11b990u: goto label_11b990;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9c8u: goto label_11b9c8;
        case 0x11b9d8u: goto label_11b9d8;
        case 0x11ba0cu: goto label_11ba0c;
        case 0x11ba20u: goto label_11ba20;
        case 0x11ba30u: goto label_11ba30;
        case 0x11ba48u: goto label_11ba48;
        default: break;
    }

    ctx->pc = 0x11b860u;

    // 0x11b860: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11b864: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11b868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x11b86c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11b870: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x11b870u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b874: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11b874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11b878: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x11b878u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b87c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11b880: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x11b880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11b888: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11b888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b88c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11b890: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b8a0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x11b8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b8a4: 0x0  nop
    ctx->pc = 0x11b8a4u;
    // NOP
label_11b8a8:
    // 0x11b8a8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B8A8u;
    {
        const bool branch_taken_0x11b8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8A8u;
        // 0x11b8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8a8) {
            ctx->pc = 0x11B8F0u;
            goto label_11b8f0;
        }
    }
    ctx->pc = 0x11B8B0u;
    // 0x11b8b0: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B8B0u;
    SET_GPR_U32(ctx, 31, 0x11B8B8u);
    ctx->pc = 0x11B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8B0u;
    // 0x11b8b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B8B0u, 0x11B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8B8u;
label_11b8b8:
    // 0x11b8b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B8B8u;
    {
        const bool branch_taken_0x11b8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b8b8) {
            ctx->pc = 0x11B8E8u;
            goto label_11b8e8;
        }
    }
    ctx->pc = 0x11B8C0u;
    // 0x11b8c0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8C0u;
    {
        const bool branch_taken_0x11b8c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C0u;
        // 0x11b8c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c0) {
            ctx->pc = 0x11B8D0u;
            goto label_11b8d0;
        }
    }
    ctx->pc = 0x11B8C8u;
    // 0x11b8c8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x11B8C8u;
    {
        const bool branch_taken_0x11b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C8u;
        // 0x11b8cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c8) {
            ctx->pc = 0x11BA94u;
            goto label_11ba94;
        }
    }
    ctx->pc = 0x11B8D0u;
label_11b8d0:
    // 0x11b8d0: 0x8ea30538  lw          $v1, 0x538($s5)
    ctx->pc = 0x11b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11b8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b8d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B8D8u;
    {
        const bool branch_taken_0x11b8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D8u;
        // 0x11b8dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d8) {
            ctx->pc = 0x11B8F0u;
            goto label_11b8f0;
        }
    }
    ctx->pc = 0x11B8E0u;
    // 0x11b8e0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11BA90u;
            goto label_11ba90;
        }
    }
    ctx->pc = 0x11B8E8u;
label_11b8e8:
    // 0x11b8e8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x8e52003c  lw          $s2, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b8a8;
        }
    }
    ctx->pc = 0x11B8F0u;
label_11b8f0:
    // 0x11b8f0: 0x8ea20538  lw          $v0, 0x538($s5)
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11b8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b8f8: 0x14450035  bne         $v0, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x11B8F8u;
    {
        const bool branch_taken_0x11b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F8u;
        // 0x11b8fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f8) {
            ctx->pc = 0x11B9D0u;
            goto label_11b9d0;
        }
    }
    ctx->pc = 0x11B900u;
    // 0x11b900: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11B900u;
    SET_GPR_U32(ctx, 31, 0x11B908u);
    ctx->pc = 0x11B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B900u;
    // 0x11b904: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11B900u, 0x11B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b90c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B90Cu;
    {
        const bool branch_taken_0x11b90c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B90Cu;
        // 0x11b910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b90c) {
            ctx->pc = 0x11B91Cu;
            goto label_11b91c;
        }
    }
    ctx->pc = 0x11B914u;
    // 0x11b914: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11BA90u;
            goto label_11ba90;
        }
    }
    ctx->pc = 0x11B91Cu;
label_11b91c:
    // 0x11b91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b920: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11B920u;
    SET_GPR_U32(ctx, 31, 0x11B928u);
    ctx->pc = 0x11B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B920u;
    // 0x11b924: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11B920u, 0x11B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B928u;
label_11b928:
    // 0x11b928: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x11B928u;
    {
        const bool branch_taken_0x11b928 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B928u;
        // 0x11b92c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b928) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B930u;
    // 0x11b930: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11B930u;
    SET_GPR_U32(ctx, 31, 0x11B938u);
    ctx->pc = 0x11B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B930u;
    // 0x11b934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11B930u, 0x11B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B938u;
label_11b938:
    // 0x11b938: 0x262307ff  addiu       $v1, $s1, 0x7FF
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2047));
    // 0x11b93c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B93Cu;
    {
        const bool branch_taken_0x11b93c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B93Cu;
        // 0x11b940: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b93c) {
            ctx->pc = 0x11B94Cu;
            goto label_11b94c;
        }
    }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11b948: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_11b94c:
    // 0x11b94c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11b950: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11b954: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B954u;
    // 0x11b958: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11B954u, 0x11B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b960:
    // 0x11b960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b968: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11B968u;
    SET_GPR_U32(ctx, 31, 0x11B970u);
    ctx->pc = 0x11B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B968u;
    // 0x11b96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11B968u, 0x11B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B970u;
label_11b970:
    // 0x11b970: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x11b974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b97c: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11B97Cu;
    SET_GPR_U32(ctx, 31, 0x11B984u);
    ctx->pc = 0x11B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B97Cu;
    // 0x11b980: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11B97Cu, 0x11B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B984u;
label_11b984:
    // 0x11b984: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x11b984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b988: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x11B988u;
    {
        const bool branch_taken_0x11b988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b988) {
            ctx->pc = 0x11B9BCu;
            goto label_11b9bc;
        }
    }
    ctx->pc = 0x11B990u;
label_11b990:
    // 0x11b990: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B990u;
    {
        const bool branch_taken_0x11b990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11b990) {
            ctx->pc = 0x11B9A0u;
            goto label_11b9a0;
        }
    }
    ctx->pc = 0x11B998u;
    // 0x11b998: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11b99c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11b9a0:
    // 0x11b9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a8: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11B9A8u;
    SET_GPR_U32(ctx, 31, 0x11B9B0u);
    ctx->pc = 0x11B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9A8u;
    // 0x11b9ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11B9A8u, 0x11B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B0u;
label_11b9b0:
    // 0x11b9b0: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x11b9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b9b4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x11B9B4u;
    {
        const bool branch_taken_0x11b9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9b4) {
            ctx->pc = 0x11B990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b990;
        }
    }
    ctx->pc = 0x11B9BCu;
label_11b9bc:
    // 0x11b9bc: 0x0  nop
    ctx->pc = 0x11b9bcu;
    // NOP
    // 0x11b9c0: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11B9C0u;
    SET_GPR_U32(ctx, 31, 0x11B9C8u);
    ctx->pc = 0x11B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9C0u;
    // 0x11b9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11B9C0u, 0x11B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C8u;
label_11b9c8:
    // 0x11b9c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B9C8u;
    {
        const bool branch_taken_0x11b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9c8) {
            ctx->pc = 0x11B9ECu;
            goto label_11b9ec;
        }
    }
    ctx->pc = 0x11B9D0u;
label_11b9d0:
    // 0x11b9d0: 0xc046f0c  jal         func_11BC30
    ctx->pc = 0x11B9D0u;
    SET_GPR_U32(ctx, 31, 0x11B9D8u);
    ctx->pc = 0x11B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9D0u;
    // 0x11b9d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC30u, 0x11B9D0u, 0x11B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9D8u;
label_11b9d8:
    // 0x11b9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9dc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B9DCu;
    {
        const bool branch_taken_0x11b9dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9dc) {
            ctx->pc = 0x11B9ECu;
            goto label_11b9ec;
        }
    }
    ctx->pc = 0x11B9E4u;
    // 0x11b9e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11B9E4u;
    {
        const bool branch_taken_0x11b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9E4u;
        // 0x11b9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9e4) {
            ctx->pc = 0x11BA90u;
            goto label_11ba90;
        }
    }
    ctx->pc = 0x11B9ECu;
label_11b9ec:
    // 0x11b9ec: 0x16c00028  bnez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BA90u;
            goto label_11ba90;
        }
    }
    ctx->pc = 0x11B9F4u;
    // 0x11b9f4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11b9f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba00: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x11ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x11ba04: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BA04u;
    SET_GPR_U32(ctx, 31, 0x11BA0Cu);
    ctx->pc = 0x11BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA04u;
    // 0x11ba08: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BA04u, 0x11BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA0Cu;
label_11ba0c:
    // 0x11ba0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11ba0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x11ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11ba18: 0xc046cd4  jal         func_11B350
    ctx->pc = 0x11BA18u;
    SET_GPR_U32(ctx, 31, 0x11BA20u);
    ctx->pc = 0x11BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA18u;
    // 0x11ba1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B350u, 0x11BA18u, 0x11BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA20u;
label_11ba20:
    // 0x11ba20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba24: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11ba28: 0xc046d68  jal         func_11B5A0
    ctx->pc = 0x11BA28u;
    SET_GPR_U32(ctx, 31, 0x11BA30u);
    ctx->pc = 0x11BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA28u;
    // 0x11ba2c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B5A0u, 0x11BA28u, 0x11BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA30u;
label_11ba30:
    // 0x11ba30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba34: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x11ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x11ba38: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x11ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x11ba3c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ba40: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BA40u;
    SET_GPR_U32(ctx, 31, 0x11BA48u);
    ctx->pc = 0x11BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA40u;
    // 0x11ba44: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BA40u, 0x11BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0x83a300e0  lb          $v1, 0xE0($sp)
    ctx->pc = 0x11ba48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11ba4c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11ba50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BA80u;
            goto label_11ba80;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x83a300e1  lb          $v1, 0xE1($sp)
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 225)));
    // 0x11ba5c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x11ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11ba60: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA60u;
    {
        const bool branch_taken_0x11ba60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ba60) {
            ctx->pc = 0x11BA7Cu;
            goto label_11ba7c;
        }
    }
    ctx->pc = 0x11BA68u;
    // 0x11ba68: 0x83a300e2  lb          $v1, 0xE2($sp)
    ctx->pc = 0x11ba68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 226)));
    // 0x11ba6c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11ba70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11BA70u;
    {
        const bool branch_taken_0x11ba70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ba70) {
            ctx->pc = 0x11BA7Cu;
            goto label_11ba7c;
        }
    }
    ctx->pc = 0x11BA78u;
    // 0x11ba78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11ba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ba7c:
    // 0x11ba7c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11ba80:
    // 0x11ba80: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ba84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11ba88: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x11ba88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ba8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11ba8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11ba90:
    // 0x11ba90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11ba94:
    // 0x11ba94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11ba94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ba98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11ba98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ba9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11ba9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11baa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11baa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11baa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11baa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11baa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11baa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11baac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11baacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11bab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x11BAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB8u;
        // 0x11babc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BAC0u;
}
