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

// Function: FUN_001fea68
// Address: 0x1fea68 - 0x1fec38
void FUN_001fea68_0x1fea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fea68_0x1fea68");
#endif

    switch (ctx->pc) {
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feaecu: goto label_1feaec;
        case 0x1feb08u: goto label_1feb08;
        case 0x1feb18u: goto label_1feb18;
        case 0x1feb90u: goto label_1feb90;
        case 0x1fec08u: goto label_1fec08;
        case 0x1fec10u: goto label_1fec10;
        default: break;
    }

    ctx->pc = 0x1fea68u;

    // 0x1fea68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fea6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fea70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fea70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1fea78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fea7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fea7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fea84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fea84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1fea8c: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x1fea8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fea90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fea94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEA94u;
    {
        const bool branch_taken_0x1fea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA94u;
        // 0x1fea98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea94) {
            ctx->pc = 0x1FEAACu;
            goto label_1feaac;
        }
    }
    ctx->pc = 0x1FEA9Cu;
    // 0x1fea9c: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FEA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEAA4u);
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FEA9Cu, 0x1FEAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAA4u;
label_1feaa4:
    // 0x1feaa4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1FEAA4u;
    {
        const bool branch_taken_0x1feaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAA4u;
        // 0x1feaa8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaa4) {
            ctx->pc = 0x1FEC18u;
            goto label_1fec18;
        }
    }
    ctx->pc = 0x1FEAACu;
label_1feaac:
    // 0x1feaac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1feab0: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x1feab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x1feab4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1feab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1feab8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1feab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1feabc: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x1feabcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1feac0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAC0u;
    {
        const bool branch_taken_0x1feac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAC0u;
        // 0x1feac4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feac0) {
            ctx->pc = 0x1FEAD8u;
            goto label_1fead8;
        }
    }
    ctx->pc = 0x1FEAC8u;
    // 0x1feac8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1feac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feacc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1feaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fead0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEAD0u;
    {
        const bool branch_taken_0x1fead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAD0u;
        // 0x1fead4: 0xa2a024  and         $s4, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fead0) {
            ctx->pc = 0x1FEADCu;
            goto label_1feadc;
        }
    }
    ctx->pc = 0x1FEAD8u;
label_1fead8:
    // 0x1fead8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1fead8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1feadc:
    // 0x1feadc: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1feae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1feae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feae4: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FEAE4u;
    SET_GPR_U32(ctx, 31, 0x1FEAECu);
    ctx->pc = 0x1FEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAE4u;
    // 0x1feae8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FEAE4u, 0x1FEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAECu;
label_1feaec:
    // 0x1feaec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1feaecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feaf0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEAF0u;
    {
        const bool branch_taken_0x1feaf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF0u;
        // 0x1feaf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaf0) {
            ctx->pc = 0x1FEB00u;
            goto label_1feb00;
        }
    }
    ctx->pc = 0x1FEAF8u;
    // 0x1feaf8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1FEAF8u;
    {
        const bool branch_taken_0x1feaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF8u;
        // 0x1feafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaf8) {
            ctx->pc = 0x1FEC14u;
            goto label_1fec14;
        }
    }
    ctx->pc = 0x1FEB00u;
label_1feb00:
    // 0x1feb00: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FEB00u;
    SET_GPR_U32(ctx, 31, 0x1FEB08u);
    ctx->pc = 0x1FEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB00u;
    // 0x1feb04: 0x2672fff8  addiu       $s2, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FEB00u, 0x1FEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1feb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1feb0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1feb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb10: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x1FEB10u;
    SET_GPR_U32(ctx, 31, 0x1FEB18u);
    ctx->pc = 0x1FEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB10u;
    // 0x1feb14: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1FEB10u, 0x1FEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB18u;
label_1feb18:
    // 0x1feb18: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FEB18u;
    {
        const bool branch_taken_0x1feb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB18u;
        // 0x1feb1c: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb18) {
            ctx->pc = 0x1FEB94u;
            goto label_1feb94;
        }
    }
    ctx->pc = 0x1FEB20u;
    // 0x1feb20: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1feb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1feb24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1feb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1feb28: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1feb2c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1feb2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1feb30: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1feb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb34: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1feb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1feb38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1feb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feb3c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1feb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1feb40: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1feb44: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1feb44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1feb48: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1feb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1feb4c: 0xa4800a  movz        $s0, $a1, $a0
    ctx->pc = 0x1feb4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1feb50: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1feb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1feb54: 0x2123823  subu        $a3, $s0, $s2
    ctx->pc = 0x1feb54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1feb58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1feb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb5c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1feb60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1feb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb64: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x1feb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x1feb68: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1feb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1feb6c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1feb70: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1feb74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1feb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1feb78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1feb78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1feb7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1feb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1feb84: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1feb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1feb88: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEB88u;
    SET_GPR_U32(ctx, 31, 0x1FEB90u);
    ctx->pc = 0x1FEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB88u;
    // 0x1feb8c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEB88u, 0x1FEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB90u;
label_1feb90:
    // 0x1feb90: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1feb90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1feb94:
    // 0x1feb94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1feb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1feb9c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1feb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1feba0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1feba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1feba4: 0x54202b  sltu        $a0, $v0, $s4
    ctx->pc = 0x1feba4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1feba8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEBA8u;
    {
        const bool branch_taken_0x1feba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feba8) {
            ctx->pc = 0x1FEBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEBA8u;
            // 0x1febac: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEBC4u;
            goto label_1febc4;
        }
    }
    ctx->pc = 0x1FEBB0u;
    // 0x1febb0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x1febb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1febb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1febb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1febbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBBCu;
    {
        const bool branch_taken_0x1febbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBBCu;
        // 0x1febc0: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febbc) {
            ctx->pc = 0x1FEBCCu;
            goto label_1febcc;
        }
    }
    ctx->pc = 0x1FEBC4u;
label_1febc4:
    // 0x1febc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febc8: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x1febc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
label_1febcc:
    // 0x1febcc: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1febccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1febd0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEBD0u;
    {
        const bool branch_taken_0x1febd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBD0u;
        // 0x1febd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd0) {
            ctx->pc = 0x1FEC08u;
            goto label_1fec08;
        }
    }
    ctx->pc = 0x1FEBD8u;
    // 0x1febd8: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1febdc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1febe0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1febe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1febe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1febec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1febecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febf0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1febf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1febf4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1febf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1febf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1febf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1febfc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1febfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1fec00: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEC00u;
    SET_GPR_U32(ctx, 31, 0x1FEC08u);
    ctx->pc = 0x1FEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC00u;
    // 0x1fec04: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEC00u, 0x1FEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC08u;
label_1fec08:
    // 0x1fec08: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FEC08u;
    SET_GPR_U32(ctx, 31, 0x1FEC10u);
    ctx->pc = 0x1FEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC08u;
    // 0x1fec0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FEC08u, 0x1FEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC10u;
label_1fec10:
    // 0x1fec10: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1fec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fec14:
    // 0x1fec14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fec18:
    // 0x1fec18: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1fec18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fec1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fec1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fec20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fec20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fec24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fec24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fec28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fec28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fec2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC30u;
        // 0x1fec34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC38u;
}
