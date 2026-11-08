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

// Function: FUN_00203408
// Address: 0x203408 - 0x203624
void FUN_00203408_0x203408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203408_0x203408");
#endif

    switch (ctx->pc) {
        case 0x203458u: goto label_203458;
        case 0x203508u: goto label_203508;
        case 0x20351cu: goto label_20351c;
        case 0x203538u: goto label_203538;
        case 0x203578u: goto label_203578;
        default: break;
    }

    ctx->pc = 0x203408u;

    // 0x203408: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20340c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x203410: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x203410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x203414: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x203414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x203418: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x203418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
    // 0x20341c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x20341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x203420: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x203420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x203424: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x203424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203428: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x203428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20342c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20342cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203430: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x203430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x203434: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x203434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x203438: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x203438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x20343c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x20343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x203440: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x203440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x203444: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x203444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x203448: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x203448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20344c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x20344cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x203450: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x203450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x203454: 0x0  nop
    ctx->pc = 0x203454u;
    // NOP
label_203458:
    // 0x203458: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20345c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20345cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x203460: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x203464: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x203464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x203468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20346c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20346Cu;
    {
        const bool branch_taken_0x20346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20346c) {
            ctx->pc = 0x203458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203458;
        }
    }
    ctx->pc = 0x203474u;
    // 0x203474: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203478: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203478u;
    {
        const bool branch_taken_0x203478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203478u;
        // 0x20347c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203478) {
            ctx->pc = 0x203490u;
            goto label_203490;
        }
    }
    ctx->pc = 0x203480u;
    // 0x203480: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203488: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203488u;
    {
        const bool branch_taken_0x203488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203488u;
        // 0x20348c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203488) {
            ctx->pc = 0x20349Cu;
            goto label_20349c;
        }
    }
    ctx->pc = 0x203490u;
label_203490:
    // 0x203490: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203490u;
    {
        const bool branch_taken_0x203490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x203490) {
            ctx->pc = 0x2034A0u;
            goto label_2034a0;
        }
    }
    ctx->pc = 0x203498u;
    // 0x203498: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203498u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_20349c:
    // 0x20349c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2034a0:
    // 0x2034a0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x2034B0u;
            goto label_2034b0;
        }
    }
    ctx->pc = 0x2034A8u;
    // 0x2034a8: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2034DCu;
            goto label_2034dc;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2034b4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2034B4u;
    {
        const bool branch_taken_0x2034b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034B4u;
        // 0x2034b8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034b4) {
            ctx->pc = 0x2034DCu;
            goto label_2034dc;
        }
    }
    ctx->pc = 0x2034BCu;
    // 0x2034bc: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2034bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2034c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034C0u;
    {
        const bool branch_taken_0x2034c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2034C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C0u;
        // 0x2034c4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034c0) {
            ctx->pc = 0x2034D0u;
            goto label_2034d0;
        }
    }
    ctx->pc = 0x2034C8u;
    // 0x2034c8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2034C8u;
    {
        const bool branch_taken_0x2034c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2034c8) {
            ctx->pc = 0x2034DCu;
            goto label_2034dc;
        }
    }
    ctx->pc = 0x2034D0u;
label_2034d0:
    // 0x2034d0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2034d4: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2034d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2034d8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2034d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2034dc:
    // 0x2034dc: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2034DCu;
    {
        const bool branch_taken_0x2034dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2034E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034DCu;
        // 0x2034e0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034dc) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x2034E4u;
    // 0x2034e4: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2034e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2034ec: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2034ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2034f0: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2034f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2034f4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2034f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2034f8:
    // 0x2034f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2034fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2034fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203500: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x203500u;
    SET_GPR_U32(ctx, 31, 0x203508u);
    ctx->pc = 0x203504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203500u;
    // 0x203504: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x203500u, 0x203508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203508u;
label_203508:
    // 0x203508: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20350c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20350cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203510: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x203510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203514: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 31, 0x20351Cu);
    ctx->pc = 0x203518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203514u;
    // 0x203518: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x203514u, 0x20351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20351Cu;
label_20351c:
    // 0x20351c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x20351cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203520: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x203520u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x203524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203528: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20352c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x24574dd1  addiu       $s7, $v0, 0x4DD1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x203584u;
            goto label_203584;
        }
    }
    ctx->pc = 0x203534u;
    // 0x203534: 0x0  nop
    ctx->pc = 0x203534u;
    // NOP
label_203538:
    // 0x203538: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x203538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20353c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20353Cu;
    {
        const bool branch_taken_0x20353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20353c) {
            ctx->pc = 0x2035B8u;
            goto label_2035b8;
        }
    }
    ctx->pc = 0x203544u;
    // 0x203544: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x203544u;
    {
        const bool branch_taken_0x203544 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203544) {
            ctx->pc = 0x203568u;
            goto label_203568;
        }
    }
    ctx->pc = 0x20354Cu;
    // 0x20354c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20354Cu;
    {
        const bool branch_taken_0x20354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20354c) {
            ctx->pc = 0x203550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20354Cu;
            // 0x203550: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20357Cu;
            goto label_20357c;
        }
    }
    ctx->pc = 0x203554u;
    // 0x203554: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x203554u;
    {
        const bool branch_taken_0x203554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203554) {
            ctx->pc = 0x203570u;
            goto label_203570;
        }
    }
    ctx->pc = 0x20355Cu;
    // 0x20355c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x20355cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x203560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203560u;
    {
        const bool branch_taken_0x203560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203560) {
            ctx->pc = 0x203570u;
            goto label_203570;
        }
    }
    ctx->pc = 0x203568u;
label_203568:
    // 0x203568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203568u;
    {
        const bool branch_taken_0x203568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203568u;
        // 0x20356c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203568) {
            ctx->pc = 0x20357Cu;
            goto label_20357c;
        }
    }
    ctx->pc = 0x203570u;
label_203570:
    // 0x203570: 0xc081c20  jal         func_207080
    ctx->pc = 0x203570u;
    SET_GPR_U32(ctx, 31, 0x203578u);
    ctx->pc = 0x203574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203570u;
    // 0x203574: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x203570u, 0x203578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203578u;
label_203578:
    // 0x203578: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x203578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_20357c:
    // 0x20357c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x20357cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203580: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_203584:
    // 0x203584: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x203588: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x203588u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20358c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x20358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x203590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203590u;
    {
        const bool branch_taken_0x203590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203590u;
        // 0x203594: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203590) {
            ctx->pc = 0x2035A0u;
            goto label_2035a0;
        }
    }
    ctx->pc = 0x203598u;
    // 0x203598: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x203598u;
    {
        const bool branch_taken_0x203598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203598u;
        // 0x20359c: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203598) {
            ctx->pc = 0x203538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203538;
        }
    }
    ctx->pc = 0x2035A0u;
label_2035a0:
    // 0x2035a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2035A0u;
    {
        const bool branch_taken_0x2035a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A0u;
        // 0x2035a4: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035a0) {
            ctx->pc = 0x2035B8u;
            goto label_2035b8;
        }
    }
    ctx->pc = 0x2035A8u;
    // 0x2035a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2035ac: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x2035b0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2035B0u;
    {
        const bool branch_taken_0x2035b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B0u;
        // 0x2035b4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b0) {
            ctx->pc = 0x203538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203538;
        }
    }
    ctx->pc = 0x2035B8u;
label_2035b8:
    // 0x2035b8: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2035B8u;
    {
        const bool branch_taken_0x2035b8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2035BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B8u;
        // 0x2035bc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b8) {
            ctx->pc = 0x2035D4u;
            goto label_2035d4;
        }
    }
    ctx->pc = 0x2035C0u;
    // 0x2035c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2035c4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2035c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2035c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2035cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2035CCu;
    {
        const bool branch_taken_0x2035cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035CCu;
        // 0x2035d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035cc) {
            ctx->pc = 0x2035DCu;
            goto label_2035dc;
        }
    }
    ctx->pc = 0x2035D4u;
label_2035d4:
    // 0x2035d4: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x2035d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x2035d8: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2035d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2035dc:
    // 0x2035dc: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035DCu;
        // 0x2035e0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2035E4u;
    // 0x2035e4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2035e8: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x2035e8u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2035ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2035f0:
    // 0x2035f0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2035f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2035f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2035f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2035f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2035fc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2035fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203600: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x203600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203604: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x203604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203608: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x203608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20360c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20360cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203610: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x203610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203614: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x203614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203618: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x203618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20361c: 0x3e00008  jr          $ra
    ctx->pc = 0x20361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20361Cu;
        // 0x203620: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203624u;
}
