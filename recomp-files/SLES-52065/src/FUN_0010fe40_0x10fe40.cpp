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

// Function: FUN_0010fe40
// Address: 0x10fe40 - 0x1102c8
void FUN_0010fe40_0x10fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fe40_0x10fe40");
#endif

    switch (ctx->pc) {
        case 0x10fea8u: goto label_10fea8;
        case 0x10fee8u: goto label_10fee8;
        case 0x10ff10u: goto label_10ff10;
        case 0x10ff18u: goto label_10ff18;
        case 0x10ff30u: goto label_10ff30;
        case 0x10ffb8u: goto label_10ffb8;
        case 0x10ffe0u: goto label_10ffe0;
        case 0x11001cu: goto label_11001c;
        case 0x110060u: goto label_110060;
        case 0x11007cu: goto label_11007c;
        case 0x1100a4u: goto label_1100a4;
        case 0x1100dcu: goto label_1100dc;
        case 0x110104u: goto label_110104;
        case 0x110144u: goto label_110144;
        case 0x110188u: goto label_110188;
        case 0x1101a4u: goto label_1101a4;
        case 0x1101ccu: goto label_1101cc;
        case 0x1101f4u: goto label_1101f4;
        case 0x110264u: goto label_110264;
        case 0x11028cu: goto label_11028c;
        default: break;
    }

    ctx->pc = 0x10fe40u;

    // 0x10fe40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10fe44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10fe48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10fe4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10fe50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10fe50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10fe58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10fe5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10fe60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10fe60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10fe68: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x10fe68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x10fe6c: 0x1020010d  beqz        $at, . + 4 + (0x10D << 2)
    ctx->pc = 0x10FE6Cu;
    {
        const bool branch_taken_0x10fe6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE6Cu;
        // 0x10fe70: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe6c) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x10FE74u;
    // 0x10fe74: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x10fe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10fe7c: 0x2463e3c0  addiu       $v1, $v1, -0x1C40
    ctx->pc = 0x10fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960064));
    // 0x10fe80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10fe84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10fe88: 0x400008  jr          $v0
    ctx->pc = 0x10FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FE90u: goto label_10fe90;
            case 0x10FFACu: goto label_10ffac;
            case 0x110000u: goto label_110000;
            case 0x1100D0u: goto label_1100d0;
            case 0x110128u: goto label_110128;
            case 0x110258u: goto label_110258;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FE90u;
label_10fe90:
    // 0x10fe90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fea0: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x10FEA0u;
    SET_GPR_U32(ctx, 31, 0x10FEA8u);
    ctx->pc = 0x10FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEA0u;
    // 0x10fea4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x10FEA0u, 0x10FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x10fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10feac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10feb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10feb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10feb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x10feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10feb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10feb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10febc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10fec4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10fec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10fec8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10fec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10fecc: 0x0  nop
    ctx->pc = 0x10feccu;
    // NOP
    // 0x10fed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x10fed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10fed4: 0x102000f3  beqz        $at, . + 4 + (0xF3 << 2)
    ctx->pc = 0x10FED4u;
    {
        const bool branch_taken_0x10fed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FED4u;
        // 0x10fed8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fed4) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x10FEDCu;
    // 0x10fedc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10fedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fee0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10FEE0u;
    {
        const bool branch_taken_0x10fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEE0u;
        // 0x10fee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fee0) {
            ctx->pc = 0x10FF18u;
            goto label_10ff18;
        }
    }
    ctx->pc = 0x10FEE8u;
label_10fee8:
    // 0x10fee8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10feec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10fef0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10fef4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x10fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10fef8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10fef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10fefc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ff00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ff04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10ff08: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x10FF08u;
    SET_GPR_U32(ctx, 31, 0x10FF10u);
    ctx->pc = 0x10FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF08u;
    // 0x10ff0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x10FF08u, 0x10FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF10u;
label_10ff10:
    // 0x10ff10: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x10ff14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ff14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10ff18:
    // 0x10ff18: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x10ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10ff1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ff20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x10FF20u;
    {
        const bool branch_taken_0x10ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF20u;
        // 0x10ff24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff20) {
            ctx->pc = 0x10FEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fee8;
        }
    }
    ctx->pc = 0x10FF28u;
    // 0x10ff28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10FF28u;
    {
        const bool branch_taken_0x10ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF28u;
        // 0x10ff2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff28) {
            ctx->pc = 0x10FF88u;
            goto label_10ff88;
        }
    }
    ctx->pc = 0x10FF30u;
label_10ff30:
    // 0x10ff30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10ff34: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ff38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ff3c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ff40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ff44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ff48: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x10ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10ff4c: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x10ff4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff50: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x10ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x10ff54: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10ff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10ff58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FF58u;
    {
        const bool branch_taken_0x10ff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff58) {
            ctx->pc = 0x10FF7Cu;
            goto label_10ff7c;
        }
    }
    ctx->pc = 0x10FF60u;
    // 0x10ff60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x10ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10ff68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10ff6c: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x10ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x10ff70: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x10ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x10ff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x10ff78: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x10ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_10ff7c:
    // 0x10ff7c: 0x0  nop
    ctx->pc = 0x10ff7cu;
    // NOP
    // 0x10ff80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x10ff84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10ff88:
    // 0x10ff88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x10ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10ff8c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ff90: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10FF90u;
    {
        const bool branch_taken_0x10ff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff90) {
            ctx->pc = 0x10FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ff30;
        }
    }
    ctx->pc = 0x10FF98u;
    // 0x10ff98: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x10ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x10ff9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ffa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ffa4: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x10FFA4u;
    {
        const bool branch_taken_0x10ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA4u;
        // 0x10ffa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffa4) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x10FFACu;
label_10ffac:
    // 0x10ffac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FFB0u;
    {
        const bool branch_taken_0x10ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB0u;
        // 0x10ffb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffb0) {
            ctx->pc = 0x10FFE0u;
            goto label_10ffe0;
        }
    }
    ctx->pc = 0x10FFB8u;
label_10ffb8:
    // 0x10ffb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10ffbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10ffc0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ffc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ffc8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ffc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ffcc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x10ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x10ffd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ffd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ffd8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10ffdc: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x10ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_10ffe0:
    // 0x10ffe0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x10ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10ffe4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10ffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ffe8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10FFE8u;
    {
        const bool branch_taken_0x10ffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ffe8) {
            ctx->pc = 0x10FFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ffb8;
        }
    }
    ctx->pc = 0x10FFF0u;
    // 0x10fff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10fff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fff8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x10FFF8u;
    {
        const bool branch_taken_0x10fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFF8u;
        // 0x10fffc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fff8) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x110000u;
label_110000:
    // 0x110000: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110008: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11000c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11000cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110014: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110014u;
    {
        const bool branch_taken_0x110014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110014u;
        // 0x110018: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110014) {
            ctx->pc = 0x110060u;
            goto label_110060;
        }
    }
    ctx->pc = 0x11001Cu;
label_11001c:
    // 0x11001c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110020: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x110024: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11002c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110030: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110034: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x110034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x110038: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11003c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110040u;
    {
        const bool branch_taken_0x110040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110040) {
            ctx->pc = 0x110058u;
            goto label_110058;
        }
    }
    ctx->pc = 0x110048u;
    // 0x110048: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x110048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x11004c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11004Cu;
    {
        const bool branch_taken_0x11004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11004Cu;
        // 0x110050: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11004c) {
            ctx->pc = 0x110058u;
            goto label_110058;
        }
    }
    ctx->pc = 0x110054u;
    // 0x110054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_110058:
    // 0x110058: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x110058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11005c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110060:
    // 0x110060: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110064: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x110064u;
    {
        const bool branch_taken_0x110064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110064) {
            ctx->pc = 0x11001Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11001c;
        }
    }
    ctx->pc = 0x11006Cu;
    // 0x11006c: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x11006Cu;
    {
        const bool branch_taken_0x11006c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11006Cu;
        // 0x110070: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11006c) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x110074u;
    // 0x110074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110074u;
    {
        const bool branch_taken_0x110074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110074u;
        // 0x110078: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110074) {
            ctx->pc = 0x1100ACu;
            goto label_1100ac;
        }
    }
    ctx->pc = 0x11007Cu;
label_11007c:
    // 0x11007c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110080: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x110080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110084: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110088: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11008c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11008cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110098: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11009c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11009Cu;
    SET_GPR_U32(ctx, 31, 0x1100A4u);
    ctx->pc = 0x1100A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11009Cu;
    // 0x1100a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11009Cu, 0x1100A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100A4u;
label_1100a4:
    // 0x1100a4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1100a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1100a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1100ac:
    // 0x1100ac: 0x0  nop
    ctx->pc = 0x1100acu;
    // NOP
    // 0x1100b0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1100b4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1100b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1100b8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1100B8u;
    {
        const bool branch_taken_0x1100b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1100b8) {
            ctx->pc = 0x11007Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11007c;
        }
    }
    ctx->pc = 0x1100C0u;
    // 0x1100c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1100c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1100c8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1100C8u;
    {
        const bool branch_taken_0x1100c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100C8u;
        // 0x1100cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100c8) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x1100D0u;
label_1100d0:
    // 0x1100d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1100d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1100D4u;
    {
        const bool branch_taken_0x1100d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100D4u;
        // 0x1100d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100d4) {
            ctx->pc = 0x110104u;
            goto label_110104;
        }
    }
    ctx->pc = 0x1100DCu;
label_1100dc:
    // 0x1100dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1100dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1100e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1100e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1100e4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1100e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1100e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1100ec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1100ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1100f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1100f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1100f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1100f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1100f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1100fc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1100fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110100: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_110104:
    // 0x110104: 0x0  nop
    ctx->pc = 0x110104u;
    // NOP
    // 0x110108: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11010c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11010cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110110: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110110u;
    {
        const bool branch_taken_0x110110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110110) {
            ctx->pc = 0x1100DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1100dc;
        }
    }
    ctx->pc = 0x110118u;
    // 0x110118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11011c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110120: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110120u;
    {
        const bool branch_taken_0x110120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110120u;
        // 0x110124: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110120) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x110128u;
label_110128:
    // 0x110128: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11012c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11012cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110130: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11013c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11013Cu;
    {
        const bool branch_taken_0x11013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11013Cu;
        // 0x110140: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11013c) {
            ctx->pc = 0x110188u;
            goto label_110188;
        }
    }
    ctx->pc = 0x110144u;
label_110144:
    // 0x110144: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110148: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x110148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11014c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11014cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110154: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110158: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x110158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11015c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x11015cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x110160: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110164: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110168u;
    {
        const bool branch_taken_0x110168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110168) {
            ctx->pc = 0x110180u;
            goto label_110180;
        }
    }
    ctx->pc = 0x110170u;
    // 0x110170: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x110170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x110174: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110174u;
    {
        const bool branch_taken_0x110174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110174u;
        // 0x110178: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110174) {
            ctx->pc = 0x110180u;
            goto label_110180;
        }
    }
    ctx->pc = 0x11017Cu;
    // 0x11017c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_110180:
    // 0x110180: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x110184: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110188:
    // 0x110188: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11018c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11018Cu;
    {
        const bool branch_taken_0x11018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11018c) {
            ctx->pc = 0x110144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110144;
        }
    }
    ctx->pc = 0x110194u;
    // 0x110194: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x110194u;
    {
        const bool branch_taken_0x110194 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110194u;
        // 0x110198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110194) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x11019Cu;
    // 0x11019c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11019Cu;
    {
        const bool branch_taken_0x11019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11019Cu;
        // 0x1101a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11019c) {
            ctx->pc = 0x1101D4u;
            goto label_1101d4;
        }
    }
    ctx->pc = 0x1101A4u;
label_1101a4:
    // 0x1101a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1101a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1101a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1101a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ac: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1101acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1101b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1101b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1101b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1101b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1101b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1101b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1101bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1101bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1101c0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1101c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1101c4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1101C4u;
    SET_GPR_U32(ctx, 31, 0x1101CCu);
    ctx->pc = 0x1101C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101C4u;
    // 0x1101c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1101C4u, 0x1101CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101CCu;
label_1101cc:
    // 0x1101cc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1101ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1101d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1101d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1101d4:
    // 0x1101d4: 0x0  nop
    ctx->pc = 0x1101d4u;
    // NOP
    // 0x1101d8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1101d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1101dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1101dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1101e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1101E0u;
    {
        const bool branch_taken_0x1101e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E0u;
        // 0x1101e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101e0) {
            ctx->pc = 0x1101A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1101a4;
        }
    }
    ctx->pc = 0x1101E8u;
    // 0x1101e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1101ECu;
    {
        const bool branch_taken_0x1101ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ECu;
        // 0x1101f0: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101ec) {
            ctx->pc = 0x110238u;
            goto label_110238;
        }
    }
    ctx->pc = 0x1101F4u;
label_1101f4:
    // 0x1101f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1101f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1101f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1101f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1101fc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x110200: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x110200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110204: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x110204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x110208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11020c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110210: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110214: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110218: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11021c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11021Cu;
    {
        const bool branch_taken_0x11021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11021c) {
            ctx->pc = 0x110230u;
            goto label_110230;
        }
    }
    ctx->pc = 0x110224u;
    // 0x110224: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x110228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11022c: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x11022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
label_110230:
    // 0x110230: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x110230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x110234: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110238:
    // 0x110238: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11023c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11023cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110240: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x110240u;
    {
        const bool branch_taken_0x110240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110240) {
            ctx->pc = 0x1101F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1101f4;
        }
    }
    ctx->pc = 0x110248u;
    // 0x110248: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11024c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110250: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x110250u;
    {
        const bool branch_taken_0x110250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110250u;
        // 0x110254: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110250) {
            ctx->pc = 0x1102A4u;
            goto label_1102a4;
        }
    }
    ctx->pc = 0x110258u;
label_110258:
    // 0x110258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11025c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11025Cu;
    {
        const bool branch_taken_0x11025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11025Cu;
        // 0x110260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11025c) {
            ctx->pc = 0x11028Cu;
            goto label_11028c;
        }
    }
    ctx->pc = 0x110264u;
label_110264:
    // 0x110264: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11026c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110270: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110274: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110278: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11027c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11027cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110284: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110288: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_11028c:
    // 0x11028c: 0x0  nop
    ctx->pc = 0x11028cu;
    // NOP
    // 0x110290: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110294: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110298: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110298u;
    {
        const bool branch_taken_0x110298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110298) {
            ctx->pc = 0x110264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110264;
        }
    }
    ctx->pc = 0x1102A0u;
    // 0x1102a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1102a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1102a4:
    // 0x1102a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1102a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1102a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1102a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1102acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1102b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1102b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1102b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1102b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1102b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1102b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1102bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1102bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1102c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1102C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C0u;
        // 0x1102c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1102C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1102C8u;
}
