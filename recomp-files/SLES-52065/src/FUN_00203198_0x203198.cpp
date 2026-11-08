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

// Function: FUN_00203198
// Address: 0x203198 - 0x2033d0
void FUN_00203198_0x203198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203198_0x203198");
#endif

    switch (ctx->pc) {
        case 0x2031e8u: goto label_2031e8;
        case 0x2032a0u: goto label_2032a0;
        case 0x2032bcu: goto label_2032bc;
        case 0x2032d0u: goto label_2032d0;
        case 0x203310u: goto label_203310;
        default: break;
    }

    ctx->pc = 0x203198u;

    // 0x203198: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x203198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20319c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2031a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2031a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2031a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2031a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2031a8: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
    // 0x2031ac: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2031acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2031b0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2031b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2031b4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2031b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2031b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2031bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2031bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031c0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2031c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2031c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2031c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2031c8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2031c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2031cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2031ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2031d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2031d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2031d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2031d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2031d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2031d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2031dc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2031dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2031e0: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2031e4: 0x0  nop
    ctx->pc = 0x2031e4u;
    // NOP
label_2031e8:
    // 0x2031e8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2031e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2031ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2031f0: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2031f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2031f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2031f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2031f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2031fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2031FCu;
    {
        const bool branch_taken_0x2031fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2031fc) {
            ctx->pc = 0x2031E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2031e8;
        }
    }
    ctx->pc = 0x203204u;
    // 0x203204: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203208: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203208u;
        // 0x20320c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203208) {
            ctx->pc = 0x20321Cu;
            goto label_20321c;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203214u;
    {
        const bool branch_taken_0x203214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203214u;
        // 0x203218: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203214) {
            ctx->pc = 0x203228u;
            goto label_203228;
        }
    }
    ctx->pc = 0x20321Cu;
label_20321c:
    // 0x20321c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20321Cu;
    {
        const bool branch_taken_0x20321c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20321c) {
            ctx->pc = 0x20322Cu;
            goto label_20322c;
        }
    }
    ctx->pc = 0x203224u;
    // 0x203224: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_203228:
    // 0x203228: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20322c:
    // 0x20322c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20322Cu;
    {
        const bool branch_taken_0x20322c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x203230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20322Cu;
        // 0x203230: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20322c) {
            ctx->pc = 0x20323Cu;
            goto label_20323c;
        }
    }
    ctx->pc = 0x203234u;
    // 0x203234: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203234u;
    {
        const bool branch_taken_0x203234 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x203234) {
            ctx->pc = 0x203268u;
            goto label_203268;
        }
    }
    ctx->pc = 0x20323Cu;
label_20323c:
    // 0x20323c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x203240: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203240u;
    {
        const bool branch_taken_0x203240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x203244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203240u;
        // 0x203244: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203240) {
            ctx->pc = 0x203268u;
            goto label_203268;
        }
    }
    ctx->pc = 0x203248u;
    // 0x203248: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x203248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20324c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20324Cu;
    {
        const bool branch_taken_0x20324c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20324Cu;
        // 0x203250: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20324c) {
            ctx->pc = 0x20325Cu;
            goto label_20325c;
        }
    }
    ctx->pc = 0x203254u;
    // 0x203254: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203254u;
    {
        const bool branch_taken_0x203254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x203254) {
            ctx->pc = 0x203268u;
            goto label_203268;
        }
    }
    ctx->pc = 0x20325Cu;
label_20325c:
    // 0x20325c: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x203260: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203264: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_203268:
    // 0x203268: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x203268u;
    {
        const bool branch_taken_0x203268 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x20326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203268u;
        // 0x20326c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203268) {
            ctx->pc = 0x20327Cu;
            goto label_20327c;
        }
    }
    ctx->pc = 0x203270u;
    // 0x203270: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203274: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x203274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x203278: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x203278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_20327c:
    // 0x20327c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x203280: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x203284: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203288: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x203288u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x20328c: 0x5ea00b  movn        $s4, $v0, $fp
    ctx->pc = 0x20328cu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x203290: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x203290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203298: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x203298u;
    SET_GPR_U32(ctx, 31, 0x2032A0u);
    ctx->pc = 0x20329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203298u;
    // 0x20329c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x203298u, 0x2032A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032A0u;
label_2032a0:
    // 0x2032a0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2032a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2032a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2032a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032ac: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2032acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2032b0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x2032b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2032b4: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x2032B4u;
    SET_GPR_U32(ctx, 31, 0x2032BCu);
    ctx->pc = 0x2032B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032B4u;
    // 0x2032b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x2032B4u, 0x2032BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032BCu;
label_2032bc:
    // 0x2032bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x2032c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2032c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032c4: 0x24704dd1  addiu       $s0, $v1, 0x4DD1
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19921));
    // 0x2032c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2032C8u;
    {
        const bool branch_taken_0x2032c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032C8u;
        // 0x2032cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c8) {
            ctx->pc = 0x20331Cu;
            goto label_20331c;
        }
    }
    ctx->pc = 0x2032D0u;
label_2032d0:
    // 0x2032d0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2032d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2032d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2032D4u;
    {
        const bool branch_taken_0x2032d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032d4) {
            ctx->pc = 0x203350u;
            goto label_203350;
        }
    }
    ctx->pc = 0x2032DCu;
    // 0x2032dc: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2032DCu;
    {
        const bool branch_taken_0x2032dc = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2032E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032DCu;
        // 0x2032e0: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032dc) {
            ctx->pc = 0x203300u;
            goto label_203300;
        }
    }
    ctx->pc = 0x2032E4u;
    // 0x2032e4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2032E4u;
    {
        const bool branch_taken_0x2032e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2032e4) {
            ctx->pc = 0x2032E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2032E4u;
            // 0x2032e8: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203314u;
            goto label_203314;
        }
    }
    ctx->pc = 0x2032ECu;
    // 0x2032ec: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2032ECu;
    {
        const bool branch_taken_0x2032ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x2032F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032ECu;
        // 0x2032f0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032ec) {
            ctx->pc = 0x203308u;
            goto label_203308;
        }
    }
    ctx->pc = 0x2032F4u;
    // 0x2032f4: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x2032f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2032f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2032F8u;
    {
        const bool branch_taken_0x2032f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032f8) {
            ctx->pc = 0x203308u;
            goto label_203308;
        }
    }
    ctx->pc = 0x203300u;
label_203300:
    // 0x203300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203300u;
    {
        const bool branch_taken_0x203300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203300u;
        // 0x203304: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203300) {
            ctx->pc = 0x203314u;
            goto label_203314;
        }
    }
    ctx->pc = 0x203308u;
label_203308:
    // 0x203308: 0xc081c20  jal         func_207080
    ctx->pc = 0x203308u;
    SET_GPR_U32(ctx, 31, 0x203310u);
    ctx->pc = 0x20330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203308u;
    // 0x20330c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x203308u, 0x203310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203310u;
label_203310:
    // 0x203310: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_203314:
    // 0x203314: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203314u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203318: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20331c:
    // 0x20331c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x20331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x203320: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x203320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203324: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x203328: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203328u;
    {
        const bool branch_taken_0x203328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203328u;
        // 0x20332c: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203328) {
            ctx->pc = 0x203338u;
            goto label_203338;
        }
    }
    ctx->pc = 0x203330u;
    // 0x203330: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x203330u;
    {
        const bool branch_taken_0x203330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203330) {
            ctx->pc = 0x2032D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2032d0;
        }
    }
    ctx->pc = 0x203338u;
label_203338:
    // 0x203338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203338u;
    {
        const bool branch_taken_0x203338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203338u;
        // 0x20333c: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203338) {
            ctx->pc = 0x203350u;
            goto label_203350;
        }
    }
    ctx->pc = 0x203340u;
    // 0x203340: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x203340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x203344: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x203348: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x203348u;
    {
        const bool branch_taken_0x203348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203348u;
        // 0x20334c: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203348) {
            ctx->pc = 0x2032D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2032d0;
        }
    }
    ctx->pc = 0x203350u;
label_203350:
    // 0x203350: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x203350u;
    {
        const bool branch_taken_0x203350 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x203354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203350u;
        // 0x203354: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203350) {
            ctx->pc = 0x20337Cu;
            goto label_20337c;
        }
    }
    ctx->pc = 0x203358u;
    // 0x203358: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x203358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20335c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x203360: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x203360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203364: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x203364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x203368: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x203368u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x20336c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x203370: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203374u;
    {
        const bool branch_taken_0x203374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203374u;
        // 0x203378: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203374) {
            ctx->pc = 0x203380u;
            goto label_203380;
        }
    }
    ctx->pc = 0x20337Cu;
label_20337c:
    // 0x20337c: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x20337cu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_203380:
    // 0x203380: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203384: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203384u;
    {
        const bool branch_taken_0x203384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203384u;
        // 0x203388: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203384) {
            ctx->pc = 0x20339Cu;
            goto label_20339c;
        }
    }
    ctx->pc = 0x20338Cu;
    // 0x20338c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x203390: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x203390u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x203394: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203398: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x203398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20339c:
    // 0x20339c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20339cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2033a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2033a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033a4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2033a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2033a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2033a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2033ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2033b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2033b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2033b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2033b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2033b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2033bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2033bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2033c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2033c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2033c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2033c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2033c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2033C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2033CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C8u;
        // 0x2033cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2033C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2033D0u;
}
