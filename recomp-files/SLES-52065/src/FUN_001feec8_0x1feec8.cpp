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

// Function: FUN_001feec8
// Address: 0x1feec8 - 0x1ff640
void FUN_001feec8_0x1feec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001feec8_0x1feec8");
#endif

    switch (ctx->pc) {
        case 0x1fef10u: goto label_1fef10;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3e0u: goto label_1ff3e0;
        case 0x1ff408u: goto label_1ff408;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff528u: goto label_1ff528;
        case 0x1ff554u: goto label_1ff554;
        case 0x1ff5b4u: goto label_1ff5b4;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff61cu: goto label_1ff61c;
        default: break;
    }

    ctx->pc = 0x1feec8u;

    // 0x1feec8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1feec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1feecc: 0x24a30013  addiu       $v1, $a1, 0x13
    ctx->pc = 0x1feeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x1feed0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1feed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1feed4: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x1feed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1feed8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1feed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1feedc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1feedcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feee0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1feee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1feee4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1feee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1feee8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1feee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1feeec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEEECu;
    {
        const bool branch_taken_0x1feeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEECu;
        // 0x1feef0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feeec) {
            ctx->pc = 0x1FEF04u;
            goto label_1fef04;
        }
    }
    ctx->pc = 0x1FEEF4u;
    // 0x1feef4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1feef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feef8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1feef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1feefc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEEFCu;
    {
        const bool branch_taken_0x1feefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEFCu;
        // 0x1fef00: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feefc) {
            ctx->pc = 0x1FEF08u;
            goto label_1fef08;
        }
    }
    ctx->pc = 0x1FEF04u;
label_1fef04:
    // 0x1fef04: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1fef04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fef08:
    // 0x1fef08: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FEF08u;
    SET_GPR_U32(ctx, 31, 0x1FEF10u);
    ctx->pc = 0x1FEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF08u;
    // 0x1fef0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FEF08u, 0x1FEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF10u;
label_1fef10:
    // 0x1fef10: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x1fef10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x1fef14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FEF14u;
    {
        const bool branch_taken_0x1fef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF14u;
        // 0x1fef18: 0x3c140022  lui         $s4, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef14) {
            ctx->pc = 0x1FEF70u;
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEF1Cu;
    // 0x1fef1c: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1fef20: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1fef20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fef24: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1fef28: 0x1209000f  beq         $s0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FEF28u;
    {
        const bool branch_taken_0x1fef28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x1FEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF28u;
        // 0x1fef2c: 0x1158c2  srl         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef28) {
            ctx->pc = 0x1FEF68u;
            goto label_1fef68;
        }
    }
    ctx->pc = 0x1FEF30u;
    // 0x1fef30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fef34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fef38: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fef3c: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fef40: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x1fef40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fef44: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fef48: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1fef4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fef54: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1fef54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1fef58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fef5c: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1fef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1fef60: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x1FEF60u;
    {
        const bool branch_taken_0x1fef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF60u;
        // 0x1fef64: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef60) {
            ctx->pc = 0x1FF614u;
            goto label_1ff614;
        }
    }
    ctx->pc = 0x1FEF68u;
label_1fef68:
    // 0x1fef68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1FEF68u;
    {
        const bool branch_taken_0x1fef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef68) {
            ctx->pc = 0x1FF058u;
            goto label_1ff058;
        }
    }
    ctx->pc = 0x1FEF70u;
label_1fef70:
    // 0x1fef70: 0x111a42  srl         $v1, $s1, 9
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x1fef74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF74u;
    {
        const bool branch_taken_0x1fef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF74u;
        // 0x1fef78: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef74) {
            ctx->pc = 0x1FEF84u;
            goto label_1fef84;
        }
    }
    ctx->pc = 0x1FEF7Cu;
    // 0x1fef7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FEF7Cu;
    {
        const bool branch_taken_0x1fef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF7Cu;
        // 0x1fef80: 0x1158c2  srl         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef7c) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEF84u;
label_1fef84:
    // 0x1fef84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF84u;
    {
        const bool branch_taken_0x1fef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF84u;
        // 0x1fef88: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef84) {
            ctx->pc = 0x1FEF94u;
            goto label_1fef94;
        }
    }
    ctx->pc = 0x1FEF8Cu;
    // 0x1fef8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEF8Cu;
    {
        const bool branch_taken_0x1fef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF8Cu;
        // 0x1fef90: 0x244b0038  addiu       $t3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef8c) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEF94u;
label_1fef94:
    // 0x1fef94: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1fef94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1fef98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FEF98u;
    {
        const bool branch_taken_0x1fef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF98u;
        // 0x1fef9c: 0x246b005b  addiu       $t3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef98) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEFA0u;
    // 0x1fefa0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1fefa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1fefa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFA4u;
    {
        const bool branch_taken_0x1fefa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA4u;
        // 0x1fefa8: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefa4) {
            ctx->pc = 0x1FEFB4u;
            goto label_1fefb4;
        }
    }
    ctx->pc = 0x1FEFACu;
    // 0x1fefac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FEFACu;
    {
        const bool branch_taken_0x1fefac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFACu;
        // 0x1fefb0: 0x244b006e  addiu       $t3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefac) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEFB4u;
label_1fefb4:
    // 0x1fefb4: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1fefb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1fefb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFB8u;
    {
        const bool branch_taken_0x1fefb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB8u;
        // 0x1fefbc: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefb8) {
            ctx->pc = 0x1FEFC8u;
            goto label_1fefc8;
        }
    }
    ctx->pc = 0x1FEFC0u;
    // 0x1fefc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEFC0u;
    {
        const bool branch_taken_0x1fefc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC0u;
        // 0x1fefc4: 0x244b0077  addiu       $t3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc0) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEFC8u;
label_1fefc8:
    // 0x1fefc8: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1fefc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1fefcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFCCu;
    {
        const bool branch_taken_0x1fefcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFCCu;
        // 0x1fefd0: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefcc) {
            ctx->pc = 0x1FEFDCu;
            goto label_1fefdc;
        }
    }
    ctx->pc = 0x1FEFD4u;
    // 0x1fefd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEFD4u;
    {
        const bool branch_taken_0x1fefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD4u;
        // 0x1fefd8: 0x244b007c  addiu       $t3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd4) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEFDCu;
label_1fefdc:
    // 0x1fefdc: 0x240b007e  addiu       $t3, $zero, 0x7E
    ctx->pc = 0x1fefdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1fefe0:
    // 0x1fefe0: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1fefe4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1fefe8: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1fefec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fefecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1feff0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feff4: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x1feff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x1feff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEFF8u;
    {
        const bool branch_taken_0x1feff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF8u;
        // 0x1feffc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feff8) {
            ctx->pc = 0x1FF00Cu;
            goto label_1ff00c;
        }
    }
    ctx->pc = 0x1FF000u;
label_1ff000:
    // 0x1ff000: 0x4e1014b  bgez        $a3, . + 4 + (0x14B << 2)
    ctx->pc = 0x1FF000u;
    {
        const bool branch_taken_0x1ff000 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1FF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF000u;
        // 0x1ff004: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff000) {
            ctx->pc = 0x1FF530u;
            goto label_1ff530;
        }
    }
    ctx->pc = 0x1FF008u;
    // 0x1ff008: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1ff008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ff00c:
    // 0x1ff00c: 0x52050012  beql        $s0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FF00Cu;
    {
        const bool branch_taken_0x1ff00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff00c) {
            ctx->pc = 0x1FF010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF00Cu;
            // 0x1ff010: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF058u;
            goto label_1ff058;
        }
    }
    ctx->pc = 0x1FF014u;
    // 0x1ff014: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff018: 0x444024  and         $t0, $v0, $a0
    ctx->pc = 0x1ff018u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ff01c: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1ff01cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff020: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF020u;
    {
        const bool branch_taken_0x1ff020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF020u;
        // 0x1ff024: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff020) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF028u;
    // 0x1ff028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff02c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF030u;
    {
        const bool branch_taken_0x1ff030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF030u;
        // 0x1ff034: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff030) {
            ctx->pc = 0x1FF044u;
            goto label_1ff044;
        }
    }
    ctx->pc = 0x1FF038u;
label_1ff038:
    // 0x1ff038: 0x1111023  subu        $v0, $t0, $s1
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1ff03c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff040: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff044:
    // 0x1ff044: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff048: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FF048u;
    {
        const bool branch_taken_0x1ff048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff048) {
            ctx->pc = 0x1FF000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff000;
        }
    }
    ctx->pc = 0x1FF050u;
    // 0x1ff050: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1ff054: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1ff058:
    // 0x1ff058: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x1ff05c: 0x25c2d9d0  addiu       $v0, $t6, -0x2630
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff060: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D9D8u));
    // 0x1ff064: 0x1202008e  beq         $s0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF2A0u;
            goto label_1ff2a0;
        }
    }
    ctx->pc = 0x1FF06Cu;
    // 0x1ff06c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff070: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff074: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1ff074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1ff078: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x1ff078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ff07c: 0x111202b  sltu        $a0, $t0, $s1
    ctx->pc = 0x1ff07cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff080: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF080u;
    {
        const bool branch_taken_0x1ff080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF080u;
        // 0x1ff084: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff080) {
            ctx->pc = 0x1FF098u;
            goto label_1ff098;
        }
    }
    ctx->pc = 0x1FF088u;
    // 0x1ff088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff08c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF090u;
    {
        const bool branch_taken_0x1ff090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF090u;
        // 0x1ff094: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff090) {
            ctx->pc = 0x1FF0A4u;
            goto label_1ff0a4;
        }
    }
    ctx->pc = 0x1FF098u;
label_1ff098:
    // 0x1ff098: 0x1111023  subu        $v0, $t0, $s1
    ctx->pc = 0x1ff098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1ff09c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff0a0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff0a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff0a4:
    // 0x1ff0a4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff0a8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF0A8u;
    {
        const bool branch_taken_0x1ff0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A8u;
        // 0x1ff0ac: 0x25c5d9d0  addiu       $a1, $t6, -0x2630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0a8) {
            ctx->pc = 0x1FF0FCu;
            goto label_1ff0fc;
        }
    }
    ctx->pc = 0x1FF0B0u;
    // 0x1ff0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff0b4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1ff0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ff0b8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff0bc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff0c0: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x1ff0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff0c4: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff0c8: 0x25c3d9d0  addiu       $v1, $t6, -0x2630
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff0cc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1ff0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1ff0d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff0d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff0d8: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1ff0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1ff0dc: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ff0e0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ff0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ff0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0e8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ff0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1ff0ec: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ff0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1ff0f0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ff0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ff0f4: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1FF0F4u;
    {
        const bool branch_taken_0x1ff0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0F4u;
        // 0x1ff0f8: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0f4) {
            ctx->pc = 0x1FF614u;
            goto label_1ff614;
        }
    }
    ctx->pc = 0x1FF0FCu;
label_1ff0fc:
    // 0x1ff0fc: 0xaca5000c  sw          $a1, 0xC($a1)
    ctx->pc = 0x1ff0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 5));
    // 0x1ff100: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF100u;
    {
        const bool branch_taken_0x1ff100 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1FF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF100u;
        // 0x1ff104: 0xaca50008  sw          $a1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff100) {
            ctx->pc = 0x1FF120u;
            goto label_1ff120;
        }
    }
    ctx->pc = 0x1FF108u;
    // 0x1ff108: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1ff10c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff110: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff114: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff118: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1FF118u;
    {
        const bool branch_taken_0x1ff118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF118u;
        // 0x1ff11c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff118) {
            ctx->pc = 0x1FF614u;
            goto label_1ff614;
        }
    }
    ctx->pc = 0x1FF120u;
label_1ff120:
    // 0x1ff120: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x1ff120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1ff124: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF124u;
    {
        const bool branch_taken_0x1ff124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF124u;
        // 0x1ff128: 0x830c2  srl         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff124) {
            ctx->pc = 0x1FF184u;
            goto label_1ff184;
        }
    }
    ctx->pc = 0x1FF12Cu;
    // 0x1ff12c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff130: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1ff130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1ff134: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1ff134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff138: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1ff138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ff13c: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1ff13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ff140: 0x855021  addu        $t2, $a0, $a1
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ff144: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1ff144u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1ff148: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1ff14c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ff150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff154: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ff154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ff158: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x1ff158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1ff15c: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1ff15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1ff160: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x1ff160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x1ff164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff168: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff16c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ff16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ff170: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x1ff170u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x1ff174: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x1ff174u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
    // 0x1ff178: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1ff17c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1FF17Cu;
    {
        const bool branch_taken_0x1ff17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF17Cu;
        // 0x1ff180: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff17c) {
            ctx->pc = 0x1FF2A0u;
            goto label_1ff2a0;
        }
    }
    ctx->pc = 0x1FF184u;
label_1ff184:
    // 0x1ff184: 0x81a42  srl         $v1, $t0, 9
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
    // 0x1ff188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF188u;
    {
        const bool branch_taken_0x1ff188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF188u;
        // 0x1ff18c: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff188) {
            ctx->pc = 0x1FF198u;
            goto label_1ff198;
        }
    }
    ctx->pc = 0x1FF190u;
    // 0x1ff190: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FF190u;
    {
        const bool branch_taken_0x1ff190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF190u;
        // 0x1ff194: 0x830c2  srl         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff190) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF198u;
label_1ff198:
    // 0x1ff198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF198u;
    {
        const bool branch_taken_0x1ff198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF198u;
        // 0x1ff19c: 0x81182  srl         $v0, $t0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff198) {
            ctx->pc = 0x1FF1A8u;
            goto label_1ff1a8;
        }
    }
    ctx->pc = 0x1FF1A0u;
    // 0x1ff1a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF1A0u;
    {
        const bool branch_taken_0x1ff1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1A0u;
        // 0x1ff1a4: 0x24460038  addiu       $a2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1a0) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF1A8u;
label_1ff1a8:
    // 0x1ff1a8: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1ff1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1ff1ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF1ACu;
    {
        const bool branch_taken_0x1ff1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1ACu;
        // 0x1ff1b0: 0x2466005b  addiu       $a2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1ac) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF1B4u;
    // 0x1ff1b4: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1ff1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1ff1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1B8u;
    {
        const bool branch_taken_0x1ff1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1B8u;
        // 0x1ff1bc: 0x81302  srl         $v0, $t0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1b8) {
            ctx->pc = 0x1FF1C8u;
            goto label_1ff1c8;
        }
    }
    ctx->pc = 0x1FF1C0u;
    // 0x1ff1c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FF1C0u;
    {
        const bool branch_taken_0x1ff1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1C0u;
        // 0x1ff1c4: 0x2446006e  addiu       $a2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1c0) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF1C8u;
label_1ff1c8:
    // 0x1ff1c8: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1ff1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1ff1cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1CCu;
        // 0x1ff1d0: 0x813c2  srl         $v0, $t0, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF1DCu;
            goto label_1ff1dc;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF1D4u;
    {
        const bool branch_taken_0x1ff1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1D4u;
        // 0x1ff1d8: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1d4) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF1DCu;
label_1ff1dc:
    // 0x1ff1dc: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1ff1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1ff1e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1E0u;
    {
        const bool branch_taken_0x1ff1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1E0u;
        // 0x1ff1e4: 0x81482  srl         $v0, $t0, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1e0) {
            ctx->pc = 0x1FF1F0u;
            goto label_1ff1f0;
        }
    }
    ctx->pc = 0x1FF1E8u;
    // 0x1ff1e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF1E8u;
    {
        const bool branch_taken_0x1ff1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1E8u;
        // 0x1ff1ec: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1e8) {
            ctx->pc = 0x1FF1F4u;
            goto label_1ff1f4;
        }
    }
    ctx->pc = 0x1FF1F0u;
label_1ff1f0:
    // 0x1ff1f0: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x1ff1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1ff1f4:
    // 0x1ff1f4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ff1f8: 0x2687d9c8  addiu       $a3, $s4, -0x2638
    ctx->pc = 0x1ff1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff1fc: 0x475021  addu        $t2, $v0, $a3
    ctx->pc = 0x1ff1fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ff200: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1ff204: 0x552a000f  bnel        $t1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF204u;
    {
        const bool branch_taken_0x1ff204 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x1ff204) {
            ctx->pc = 0x1FF208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF204u;
            // 0x1ff208: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF244u;
            goto label_1ff244;
        }
    }
    ctx->pc = 0x1FF20Cu;
    // 0x1ff20c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff210: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ff214: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1ff214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff21c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1ff21cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1ff220: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1ff220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ff224: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1ff224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ff228: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1ff22c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x1ff22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1ff230: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ff230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff234: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ff234u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ff238: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ff238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ff23c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF23Cu;
    {
        const bool branch_taken_0x1ff23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF23Cu;
        // 0x1ff240: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff23c) {
            ctx->pc = 0x1FF290u;
            goto label_1ff290;
        }
    }
    ctx->pc = 0x1FF244u;
label_1ff244:
    // 0x1ff244: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff248: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff24c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ff24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff250: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1ff250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ff254: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF254u;
    {
        const bool branch_taken_0x1ff254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF254u;
        // 0x1ff258: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff254) {
            ctx->pc = 0x1FF28Cu;
            goto label_1ff28c;
        }
    }
    ctx->pc = 0x1FF25Cu;
    // 0x1ff25c: 0x8d290008  lw          $t1, 0x8($t1)
    ctx->pc = 0x1ff25cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1ff260:
    // 0x1ff260: 0x512a000b  beql        $t1, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF260u;
            // 0x1ff264: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF290u;
            goto label_1ff290;
        }
    }
    ctx->pc = 0x1FF268u;
    // 0x1ff268: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ff26c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff270: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff274: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ff274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff278: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1ff278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ff27c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF27Cu;
            // 0x1ff280: 0x8d290008  lw          $t1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff260;
        }
    }
    ctx->pc = 0x1FF284u;
    // 0x1ff284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF284u;
    {
        const bool branch_taken_0x1ff284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF284u;
        // 0x1ff288: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff284) {
            ctx->pc = 0x1FF290u;
            goto label_1ff290;
        }
    }
    ctx->pc = 0x1FF28Cu;
label_1ff28c:
    // 0x1ff28c: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1ff290:
    // 0x1ff290: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1ff290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1ff294: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x1ff294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x1ff298: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x1ff298u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x1ff29c: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x1ff29cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
label_1ff2a0:
    // 0x1ff2a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff2a4: 0x2683d9c8  addiu       $v1, $s4, -0x2638
    ctx->pc = 0x1ff2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff2a8: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x1ff2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1ff2ac: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1ff2acu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff2b0: 0x162300b  movn        $a2, $t3, $v0
    ctx->pc = 0x1ff2b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x1ff2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2b8: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1ff2bc: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x1ff2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1ff2c0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1ff2c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff2c4: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1FF2C4u;
    {
        const bool branch_taken_0x1ff2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C4u;
        // 0x1ff2c8: 0x2683d9c8  addiu       $v1, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2c4) {
            ctx->pc = 0x1FF44Cu;
            goto label_1ff44c;
        }
    }
    ctx->pc = 0x1FF2CCu;
    // 0x1ff2cc: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1ff2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ff2d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF2D0u;
    {
        const bool branch_taken_0x1ff2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2D0u;
        // 0x1ff2d4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2d0) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF2D8u;
    // 0x1ff2d8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ff2dc: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff2e0: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1ff2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1ff2e4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1ff2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ff2e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF2E8u;
    {
        const bool branch_taken_0x1ff2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E8u;
        // 0x1ff2ec: 0x244b0004  addiu       $t3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2e8) {
            ctx->pc = 0x1FF314u;
            goto label_1ff314;
        }
    }
    ctx->pc = 0x1FF2F0u;
    // 0x1ff2f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ff2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2f4: 0x0  nop
    ctx->pc = 0x1ff2f4u;
    // NOP
label_1ff2f8:
    // 0x1ff2f8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff2fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ff300: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ff300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ff304: 0x0  nop
    ctx->pc = 0x1ff304u;
    // NOP
    // 0x1ff308: 0x0  nop
    ctx->pc = 0x1ff308u;
    // NOP
    // 0x1ff30c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF30Cu;
    {
        const bool branch_taken_0x1ff30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff30c) {
            ctx->pc = 0x1FF2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2f8;
        }
    }
    ctx->pc = 0x1FF314u;
label_1ff314:
    // 0x1ff314: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1ff318:
    // 0x1ff318: 0x244cd9c8  addiu       $t4, $v0, -0x2638
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x1ff31c: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff320: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x1ff320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1ff324: 0x0  nop
    ctx->pc = 0x1ff324u;
    // NOP
label_1ff328:
    // 0x1ff328: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1ff328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff32c: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1ff330: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ff330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff334: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ff338:
    // 0x1ff338: 0x12050019  beq         $s0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF338u;
    {
        const bool branch_taken_0x1ff338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF338u;
        // 0x1ff33c: 0x2962003f  slti        $v0, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff338) {
            ctx->pc = 0x1FF3A0u;
            goto label_1ff3a0;
        }
    }
    ctx->pc = 0x1FF340u;
    // 0x1ff340: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff344: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x1ff344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x1ff348: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff34c: 0x0  nop
    ctx->pc = 0x1ff34cu;
    // NOP
label_1ff350:
    // 0x1ff350: 0x464024  and         $t0, $v0, $a2
    ctx->pc = 0x1ff350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ff354: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1ff354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff358: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF358u;
    {
        const bool branch_taken_0x1ff358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF358u;
        // 0x1ff35c: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff358) {
            ctx->pc = 0x1FF370u;
            goto label_1ff370;
        }
    }
    ctx->pc = 0x1FF360u;
    // 0x1ff360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff364: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF368u;
    {
        const bool branch_taken_0x1ff368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF368u;
        // 0x1ff36c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff368) {
            ctx->pc = 0x1FF37Cu;
            goto label_1ff37c;
        }
    }
    ctx->pc = 0x1FF370u;
label_1ff370:
    // 0x1ff370: 0x1111023  subu        $v0, $t0, $s1
    ctx->pc = 0x1ff370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1ff374: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff378: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff37c:
    // 0x1ff37c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff380: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1FF380u;
    {
        const bool branch_taken_0x1ff380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff380) {
            ctx->pc = 0x1FF384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF380u;
            // 0x1ff384: 0x8e0a000c  lw          $t2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF55Cu;
            goto label_1ff55c;
        }
    }
    ctx->pc = 0x1FF388u;
    // 0x1ff388: 0x4e1008c  bgez        $a3, . + 4 + (0x8C << 2)
    ctx->pc = 0x1FF388u;
    {
        const bool branch_taken_0x1ff388 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF388u;
        // 0x1ff38c: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff388) {
            ctx->pc = 0x1FF5BCu;
            goto label_1ff5bc;
        }
    }
    ctx->pc = 0x1FF390u;
    // 0x1ff390: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1ff390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff394: 0x5605ffee  bnel        $s0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FF394u;
    {
        const bool branch_taken_0x1ff394 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff394) {
            ctx->pc = 0x1FF398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF394u;
            // 0x1ff398: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff350;
        }
    }
    ctx->pc = 0x1FF39Cu;
    // 0x1ff39c: 0x2962003f  slti        $v0, $t3, 0x3F
    ctx->pc = 0x1ff39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
label_1ff3a0:
    // 0x1ff3a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF3A0u;
    {
        const bool branch_taken_0x1ff3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3A0u;
        // 0x1ff3a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3a0) {
            ctx->pc = 0x1FF3B0u;
            goto label_1ff3b0;
        }
    }
    ctx->pc = 0x1FF3A8u;
    // 0x1ff3a8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff3ac: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1ff3b0:
    // 0x1ff3b0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1ff3b4: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x1ff3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1ff3b8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FF3B8u;
    {
        const bool branch_taken_0x1ff3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3b8) {
            ctx->pc = 0x1FF3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF3B8u;
            // 0x1ff3bc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff338;
        }
    }
    ctx->pc = 0x1FF3C0u;
    // 0x1ff3c0: 0x42878  dsll        $a1, $a0, 1
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 1);
    // 0x1ff3c4: 0x0  nop
    ctx->pc = 0x1ff3c4u;
    // NOP
label_1ff3c8:
    // 0x1ff3c8: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x1ff3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1ff3cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF3CCu;
    {
        const bool branch_taken_0x1ff3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3CCu;
        // 0x1ff3d0: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3cc) {
            ctx->pc = 0x1FF42Cu;
            goto label_1ff42c;
        }
    }
    ctx->pc = 0x1FF3D4u;
    // 0x1ff3d4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1ff3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ff3d8: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF3D8u;
    {
        const bool branch_taken_0x1ff3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3d8) {
            ctx->pc = 0x1FF3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff3c8;
        }
    }
    ctx->pc = 0x1FF3E0u;
label_1ff3e0:
    // 0x1ff3e0: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x1ff3e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1ff3e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ff3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3e8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ff3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff3ec: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF3ECu;
    {
        const bool branch_taken_0x1ff3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3ec) {
            ctx->pc = 0x1FF3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF3ECu;
            // 0x1ff3f0: 0x2683d9c8  addiu       $v1, $s4, -0x2638 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF44Cu;
            goto label_1ff44c;
        }
    }
    ctx->pc = 0x1FF3F4u;
    // 0x1ff3f4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF3F4u;
    {
        const bool branch_taken_0x1ff3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3F4u;
        // 0x1ff3f8: 0x831024  and         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3f4) {
            ctx->pc = 0x1FF448u;
            goto label_1ff448;
        }
    }
    ctx->pc = 0x1FF3FCu;
    // 0x1ff3fc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1FF3FCu;
    {
        const bool branch_taken_0x1ff3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3FCu;
        // 0x1ff400: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3fc) {
            ctx->pc = 0x1FF328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff328;
        }
    }
    ctx->pc = 0x1FF404u;
    // 0x1ff404: 0x0  nop
    ctx->pc = 0x1ff404u;
    // NOP
label_1ff408:
    // 0x1ff408: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff40c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ff410: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ff410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ff414: 0x0  nop
    ctx->pc = 0x1ff414u;
    // NOP
    // 0x1ff418: 0x0  nop
    ctx->pc = 0x1ff418u;
    // NOP
    // 0x1ff41c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF41Cu;
    {
        const bool branch_taken_0x1ff41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff41c) {
            ctx->pc = 0x1FF408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff408;
        }
    }
    ctx->pc = 0x1FF424u;
    // 0x1ff424: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x1FF424u;
    {
        const bool branch_taken_0x1ff424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF424u;
        // 0x1ff428: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff424) {
            ctx->pc = 0x1FF328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff328;
        }
    }
    ctx->pc = 0x1FF42Cu;
label_1ff42c:
    // 0x1ff42c: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1ff42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1ff430: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1ff430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff434: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff438: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ff438u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ff43c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ff43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff440: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FF440u;
    {
        const bool branch_taken_0x1ff440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF440u;
        // 0x1ff444: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff440) {
            ctx->pc = 0x1FF3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff3e0;
        }
    }
    ctx->pc = 0x1FF448u;
label_1ff448:
    // 0x1ff448: 0x2683d9c8  addiu       $v1, $s4, -0x2638
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
label_1ff44c:
    // 0x1ff44c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff450: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ff454: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff458: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff45c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ff45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff460: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x1ff460u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff464: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF464u;
    {
        const bool branch_taken_0x1ff464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff464) {
            ctx->pc = 0x1FF468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF464u;
            // 0x1ff468: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF480u;
            goto label_1ff480;
        }
    }
    ctx->pc = 0x1FF46Cu;
    // 0x1ff46c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ff470: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff474: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF478u;
    {
        const bool branch_taken_0x1ff478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF478u;
        // 0x1ff47c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff478) {
            ctx->pc = 0x1FF488u;
            goto label_1ff488;
        }
    }
    ctx->pc = 0x1FF480u;
label_1ff480:
    // 0x1ff480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff484: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff488:
    // 0x1ff488: 0x2692d9c8  addiu       $s2, $s4, -0x2638
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff48c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff490: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ff494: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x1ff494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x1ff498: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff49c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1ff49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1ff4a0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ff4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff4a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF4A4u;
    {
        const bool branch_taken_0x1ff4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A4u;
        // 0x1ff4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4a4) {
            ctx->pc = 0x1FF4B8u;
            goto label_1ff4b8;
        }
    }
    ctx->pc = 0x1FF4ACu;
    // 0x1ff4ac: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff4b0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1FF4B0u;
    {
        const bool branch_taken_0x1ff4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4B0u;
        // 0x1ff4b4: 0x2686d9c8  addiu       $a2, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4b0) {
            ctx->pc = 0x1FF5E8u;
            goto label_1ff5e8;
        }
    }
    ctx->pc = 0x1FF4B8u;
label_1ff4b8:
    // 0x1ff4b8: 0xc07fb1c  jal         func_1FEC70
    ctx->pc = 0x1FF4B8u;
    SET_GPR_U32(ctx, 31, 0x1FF4C0u);
    ctx->pc = 0x1FF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4B8u;
    // 0x1ff4bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC70u, 0x1FF4B8u, 0x1FF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4C0u;
label_1ff4c0:
    // 0x1ff4c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ff4c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ff4c8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1ff4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1ff4cc: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1ff4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff4d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF4D0u;
    {
        const bool branch_taken_0x1ff4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D0u;
        // 0x1ff4d4: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d0) {
            ctx->pc = 0x1FF4E8u;
            goto label_1ff4e8;
        }
    }
    ctx->pc = 0x1FF4D8u;
    // 0x1ff4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff4dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF4E0u;
    {
        const bool branch_taken_0x1ff4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4E0u;
        // 0x1ff4e4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4e0) {
            ctx->pc = 0x1FF4F4u;
            goto label_1ff4f4;
        }
    }
    ctx->pc = 0x1FF4E8u;
label_1ff4e8:
    // 0x1ff4e8: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ff4ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff4f0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff4f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff4f4:
    // 0x1ff4f4: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1ff4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff4f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff4fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ff500: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1ff500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1ff504: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ff508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ff50c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ff50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF510u;
    {
        const bool branch_taken_0x1ff510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF510u;
        // 0x1ff514: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff510) {
            ctx->pc = 0x1FF520u;
            goto label_1ff520;
        }
    }
    ctx->pc = 0x1FF518u;
    // 0x1ff518: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FF518u;
    {
        const bool branch_taken_0x1ff518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF518u;
        // 0x1ff51c: 0x2686d9c8  addiu       $a2, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff518) {
            ctx->pc = 0x1FF5E8u;
            goto label_1ff5e8;
        }
    }
    ctx->pc = 0x1FF520u;
label_1ff520:
    // 0x1ff520: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF520u;
    SET_GPR_U32(ctx, 31, 0x1FF528u);
    ctx->pc = 0x1FF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF520u;
    // 0x1ff524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF520u, 0x1FF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF528u;
label_1ff528:
    // 0x1ff528: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1FF528u;
    {
        const bool branch_taken_0x1ff528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF528u;
        // 0x1ff52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff528) {
            ctx->pc = 0x1FF620u;
            goto label_1ff620;
        }
    }
    ctx->pc = 0x1FF530u;
label_1ff530:
    // 0x1ff530: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1ff530u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff534: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff53c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff540: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff540u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff544: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff548: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1ff548u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1ff54c: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF54Cu;
    SET_GPR_U32(ctx, 31, 0x1FF554u);
    ctx->pc = 0x1FF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF54Cu;
    // 0x1ff550: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF54Cu, 0x1FF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF554u;
label_1ff554:
    // 0x1ff554: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FF554u;
    {
        const bool branch_taken_0x1ff554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF554u;
        // 0x1ff558: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff554) {
            ctx->pc = 0x1FF620u;
            goto label_1ff620;
        }
    }
    ctx->pc = 0x1FF55Cu;
label_1ff55c:
    // 0x1ff55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff560: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff564: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1ff564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ff568: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff568u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff56c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff570: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x1ff570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff574: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff574u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff578: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff57c: 0x25c3d9d0  addiu       $v1, $t6, -0x2630
    ctx->pc = 0x1ff57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff580: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1ff580u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1ff584: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1ff584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1ff588: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff58c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff590: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1ff590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1ff594: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1ff594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ff598: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ff598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ff59c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5a0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ff5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1ff5a4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ff5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1ff5a8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ff5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ff5ac: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF5ACu;
    SET_GPR_U32(ctx, 31, 0x1FF5B4u);
    ctx->pc = 0x1FF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5ACu;
    // 0x1ff5b0: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF5ACu, 0x1FF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5B4u;
label_1ff5b4:
    // 0x1ff5b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FF5B4u;
    {
        const bool branch_taken_0x1ff5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5B4u;
        // 0x1ff5b8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5b4) {
            ctx->pc = 0x1FF620u;
            goto label_1ff620;
        }
    }
    ctx->pc = 0x1FF5BCu;
label_1ff5bc:
    // 0x1ff5bc: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1ff5bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff5c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff5c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5c8: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff5cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff5d0: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff5d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ff5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ff5d8: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF5D8u;
    SET_GPR_U32(ctx, 31, 0x1FF5E0u);
    ctx->pc = 0x1FF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5D8u;
    // 0x1ff5dc: 0xad490008  sw          $t1, 0x8($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF5D8u, 0x1FF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5E0u;
label_1ff5e0:
    // 0x1ff5e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FF5E0u;
    {
        const bool branch_taken_0x1ff5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E0u;
        // 0x1ff5e4: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5e0) {
            ctx->pc = 0x1FF620u;
            goto label_1ff620;
        }
    }
    ctx->pc = 0x1FF5E8u;
label_1ff5e8:
    // 0x1ff5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5ec: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ff5f0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff5f4: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x1ff5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff5f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff5fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff5fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff600: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff604: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ff604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ff608: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ff608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ff60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff610: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1ff610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1ff614:
    // 0x1ff614: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF614u;
    SET_GPR_U32(ctx, 31, 0x1FF61Cu);
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF614u, 0x1FF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF61Cu;
label_1ff61c:
    // 0x1ff61c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1ff620:
    // 0x1ff620: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ff620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff624: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ff624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff628: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ff628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff62c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ff62cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff630: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ff630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff638: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF638u;
        // 0x1ff63c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF640u;
}
