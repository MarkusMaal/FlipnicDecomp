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

// Function: entry_001bfd9c
// Address: 0x1bfd9c - 0x1bfebc
void entry_001bfd9c_0x1bfd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfd9c_0x1bfd9c");
#endif

    switch (ctx->pc) {
        case 0x1bfdacu: goto label_1bfdac;
        case 0x1bfdb4u: goto label_1bfdb4;
        case 0x1bfde8u: goto label_1bfde8;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe54u: goto label_1bfe54;
        case 0x1bfe60u: goto label_1bfe60;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe8cu: goto label_1bfe8c;
        case 0x1bfe9cu: goto label_1bfe9c;
        default: break;
    }

    ctx->pc = 0x1bfd9cu;

    // 0x1bfd9c: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x1bfd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1bfda0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfda4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFDA4u;
    SET_GPR_U32(ctx, 31, 0x1BFDACu);
    ctx->pc = 0x1BFDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDA4u;
    // 0x1bfda8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFDA4u, 0x1BFDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDACu;
label_1bfdac:
    // 0x1bfdac: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1BFDACu;
    SET_GPR_U32(ctx, 31, 0x1BFDB4u);
    ctx->pc = 0x1BFDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDACu;
    // 0x1bfdb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1BFDACu, 0x1BFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDB4u;
label_1bfdb4:
    // 0x1bfdb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfdb8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bfdbc: 0x8c22f4f0  lw          $v0, -0xB10($at)
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bfdc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdc4: 0x24a53700  addiu       $a1, $a1, 0x3700
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14080));
    // 0x1bfdc8: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1bfdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1bfdcc: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x1bfdccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x1bfdd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfdd4: 0x8c22f4f8  lw          $v0, -0xB08($at)
    ctx->pc = 0x1bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfdd8: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x1bfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x1bfddc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1bfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1bfde0: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1BFDE0u;
    SET_GPR_U32(ctx, 31, 0x1BFDE8u);
    ctx->pc = 0x1BFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDE0u;
    // 0x1bfde4: 0xae620068  sw          $v0, 0x68($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1BFDE0u, 0x1BFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDE8u;
label_1bfde8:
    // 0x1bfde8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bfdec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdf0: 0x24a53a10  addiu       $a1, $a1, 0x3A10
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14864));
    // 0x1bfdf4: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1BFDF4u;
    SET_GPR_U32(ctx, 31, 0x1BFDFCu);
    ctx->pc = 0x1BFDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDF4u;
    // 0x1bfdf8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1BFDF4u, 0x1BFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDFCu;
label_1bfdfc:
    // 0x1bfdfc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bfe00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe04: 0x24a53b30  addiu       $a1, $a1, 0x3B30
    ctx->pc = 0x1bfe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15152));
    // 0x1bfe08: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1BFE08u;
    SET_GPR_U32(ctx, 31, 0x1BFE10u);
    ctx->pc = 0x1BFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE08u;
    // 0x1bfe0c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1BFE08u, 0x1BFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE10u;
label_1bfe10:
    // 0x1bfe10: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1bfe10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1bfe14: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1bfe14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bfe18: 0x25083e00  addiu       $t0, $t0, 0x3E00
    ctx->pc = 0x1bfe18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15872));
    // 0x1bfe1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe20: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1bfe20u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x213E00u));
    // 0x1bfe24: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1bfe24u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x213E10u));
    // 0x1bfe28: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1bfe28u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213E20u));
    // 0x1bfe2c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1bfe2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213E30u));
    // 0x1bfe30: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1bfe30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1bfe34: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1bfe34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1bfe38: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1bfe38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1bfe3c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1bfe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1bfe40: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1bfe40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213E40u));
    // 0x1bfe44: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1bfe44u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213E50u));
    // 0x1bfe48: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1bfe48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1bfe4c: 0xc070044  jal         func_1C0110
    ctx->pc = 0x1BFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE54u);
    ctx->pc = 0x1BFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE4Cu;
    // 0x1bfe50: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0110u, 0x1BFE4Cu, 0x1BFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE54u;
label_1bfe54:
    // 0x1bfe54: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1bfe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1bfe58: 0xc070064  jal         func_1C0190
    ctx->pc = 0x1BFE58u;
    SET_GPR_U32(ctx, 31, 0x1BFE60u);
    ctx->pc = 0x1BFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE58u;
    // 0x1bfe5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0190u, 0x1BFE58u, 0x1BFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE60u;
label_1bfe60:
    // 0x1bfe60: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1bfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1bfe64: 0xc07007c  jal         func_1C01F0
    ctx->pc = 0x1BFE64u;
    SET_GPR_U32(ctx, 31, 0x1BFE6Cu);
    ctx->pc = 0x1BFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE64u;
    // 0x1bfe68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C01F0u, 0x1BFE64u, 0x1BFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE6Cu;
label_1bfe6c:
    // 0x1bfe6c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1bfe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1bfe70: 0xc07009c  jal         func_1C0270
    ctx->pc = 0x1BFE70u;
    SET_GPR_U32(ctx, 31, 0x1BFE78u);
    ctx->pc = 0x1BFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE70u;
    // 0x1bfe74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0270u, 0x1BFE70u, 0x1BFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE78u;
label_1bfe78:
    // 0x1bfe78: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1bfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1bfe7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe80: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bfe84: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1BFE84u;
    SET_GPR_U32(ctx, 31, 0x1BFE8Cu);
    ctx->pc = 0x1BFE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE84u;
    // 0x1bfe88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1BFE84u, 0x1BFE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE8Cu;
label_1bfe8c:
    // 0x1bfe8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bfe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bfe94: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1BFE94u;
    SET_GPR_U32(ctx, 31, 0x1BFE9Cu);
    ctx->pc = 0x1BFE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE94u;
    // 0x1bfe98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1BFE94u, 0x1BFE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE9Cu;
label_1bfe9c:
    // 0x1bfe9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bfe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfeac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfeb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEB4u;
        // 0x1bfeb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFEBCu;
}
