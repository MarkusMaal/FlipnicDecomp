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

// Function: FUN_001fe8e8
// Address: 0x1fe8e8 - 0x1fea38
void FUN_001fe8e8_0x1fe8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe8e8_0x1fe8e8");
#endif

    switch (ctx->pc) {
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fea0cu: goto label_1fea0c;
        default: break;
    }

    ctx->pc = 0x1fe8e8u;

    // 0x1fe8e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fe8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1fe8ec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1fe8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1fe8f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fe8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1fe8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8f8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1fe8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1fe8fc: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x1fe8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x1fe900: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe904: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fe904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fe908: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE908u;
    {
        const bool branch_taken_0x1fe908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE908u;
        // 0x1fe90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe908) {
            ctx->pc = 0x1FE924u;
            goto label_1fe924;
        }
    }
    ctx->pc = 0x1FE910u;
    // 0x1fe910: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x1fe910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1fe914: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1fe914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1fe918: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1fe918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1fe91c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1FE91Cu;
    {
        const bool branch_taken_0x1fe91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE91Cu;
        // 0x1fe920: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe91c) {
            ctx->pc = 0x1FEA20u;
            goto label_1fea20;
        }
    }
    ctx->pc = 0x1FE924u;
label_1fe924:
    // 0x1fe924: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1fe928: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE928u;
    {
        const bool branch_taken_0x1fe928 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE928u;
        // 0x1fe92c: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe928) {
            ctx->pc = 0x1FE94Cu;
            goto label_1fe94c;
        }
    }
    ctx->pc = 0x1FE930u;
    // 0x1fe930: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe934: 0xc07f872  jal         func_1FE1C8
    ctx->pc = 0x1FE934u;
    SET_GPR_U32(ctx, 31, 0x1FE93Cu);
    ctx->pc = 0x1FE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE934u;
    // 0x1fe938: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FE934u, 0x1FE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE93Cu;
label_1fe93c:
    // 0x1fe93c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE93Cu;
    {
        const bool branch_taken_0x1fe93c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE93Cu;
        // 0x1fe940: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe93c) {
            ctx->pc = 0x1FE95Cu;
            goto label_1fe95c;
        }
    }
    ctx->pc = 0x1FE944u;
    // 0x1fe944: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe948: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x1fe948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_1fe94c:
    // 0x1fe94c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe950: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe954: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE954u;
    {
        const bool branch_taken_0x1fe954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE954u;
        // 0x1fe958: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe954) {
            ctx->pc = 0x1FE9A4u;
            goto label_1fe9a4;
        }
    }
    ctx->pc = 0x1FE95Cu;
label_1fe95c:
    // 0x1fe95c: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x1fe95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fe960: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fe960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fe964: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x1fe964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1fe968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe96c: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x1fe96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x1fe970: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE970u;
    {
        const bool branch_taken_0x1fe970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE970u;
        // 0x1fe974: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe970) {
            ctx->pc = 0x1FE998u;
            goto label_1fe998;
        }
    }
    ctx->pc = 0x1FE978u;
    // 0x1fe978: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fe97c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fe980: 0x24421908  addiu       $v0, $v0, 0x1908
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6408));
    // 0x1fe984: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE984u;
    {
        const bool branch_taken_0x1fe984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE984u;
        // 0x1fe988: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe984) {
            ctx->pc = 0x1FE99Cu;
            goto label_1fe99c;
        }
    }
    ctx->pc = 0x1FE98Cu;
    // 0x1fe98c: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x1fe98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x1fe990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE990u;
    {
        const bool branch_taken_0x1fe990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE990u;
        // 0x1fe994: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe990) {
            ctx->pc = 0x1FE9A0u;
            goto label_1fe9a0;
        }
    }
    ctx->pc = 0x1FE998u;
label_1fe998:
    // 0x1fe998: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1fe998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe99c:
    // 0x1fe99c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1fe99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1fe9a0:
    // 0x1fe9a0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fe9a4:
    // 0x1fe9a4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe9a8: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FE9A8u;
    SET_GPR_U32(ctx, 31, 0x1FE9B0u);
    ctx->pc = 0x1FE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9A8u;
    // 0x1fe9ac: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FE9A8u, 0x1FE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9B0u;
label_1fe9b0:
    // 0x1fe9b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9b4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE9B4u;
    {
        const bool branch_taken_0x1fe9b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B4u;
        // 0x1fe9b8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9b4) {
            ctx->pc = 0x1FE9DCu;
            goto label_1fe9dc;
        }
    }
    ctx->pc = 0x1FE9BCu;
    // 0x1fe9bc: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x1fe9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1fe9c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe9c4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1fe9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1fe9c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fe9cc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1fe9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1fe9d0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe9d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE9D4u;
    {
        const bool branch_taken_0x1fe9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d4) {
            ctx->pc = 0x1FEA20u;
            goto label_1fea20;
        }
    }
    ctx->pc = 0x1FE9DCu;
label_1fe9dc:
    // 0x1fe9dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fe9e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe9e4: 0x2463d6a0  addiu       $v1, $v1, -0x2960
    ctx->pc = 0x1fe9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956704));
    // 0x1fe9e8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1fe9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1fe9ec: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1fe9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1fe9f0: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1fe9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1fe9f4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe9f8: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1fe9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x1fe9fc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE9FCu;
    {
        const bool branch_taken_0x1fe9fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9FCu;
        // 0x1fea00: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9fc) {
            ctx->pc = 0x1FEA20u;
            goto label_1fea20;
        }
    }
    ctx->pc = 0x1FEA04u;
    // 0x1fea04: 0xc07af74  jal         func_1EBDD0
    ctx->pc = 0x1FEA04u;
    SET_GPR_U32(ctx, 31, 0x1FEA0Cu);
    ctx->pc = 0x1FEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA04u;
    // 0x1fea08: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDD0u, 0x1FEA04u, 0x1FEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA0Cu;
label_1fea0c:
    // 0x1fea0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEA0Cu;
    {
        const bool branch_taken_0x1fea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA0Cu;
        // 0x1fea10: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea0c) {
            ctx->pc = 0x1FEA24u;
            goto label_1fea24;
        }
    }
    ctx->pc = 0x1FEA14u;
    // 0x1fea14: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1fea14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fea18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fea1c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fea1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fea20:
    // 0x1fea20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fea24:
    // 0x1fea24: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1fea24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fea28: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x1fea28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fea2c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1fea2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fea30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA30u;
        // 0x1fea34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA38u;
}
