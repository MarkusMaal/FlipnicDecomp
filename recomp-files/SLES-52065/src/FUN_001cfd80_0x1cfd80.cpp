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

// Function: FUN_001cfd80
// Address: 0x1cfd80 - 0x1cffec
void FUN_001cfd80_0x1cfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cfd80_0x1cfd80");
#endif

    switch (ctx->pc) {
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cffa8u: goto label_1cffa8;
        default: break;
    }

    ctx->pc = 0x1cfd80u;

    // 0x1cfd80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cfd84: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cfd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cfd88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cfd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cfd8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cfd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cfd90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cfd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfd94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfd9c: 0x8c32ca84  lw          $s2, -0x357C($at)
    ctx->pc = 0x1cfd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cfda0: 0x9243282c  lbu         $v1, 0x282C($s2)
    ctx->pc = 0x1cfda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10284)));
    // 0x1cfda4: 0x1460008a  bnez        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x1CFDA4u;
    {
        const bool branch_taken_0x1cfda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDA4u;
        // 0x1cfda8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfda4) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFDACu;
    // 0x1cfdac: 0xc074000  jal         func_1D0000
    ctx->pc = 0x1CFDACu;
    SET_GPR_U32(ctx, 31, 0x1CFDB4u);
    ctx->pc = 0x1D0000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0000u, 0x1CFDACu, 0x1CFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDB4u;
label_1cfdb4:
    // 0x1cfdb4: 0x8e502818  lw          $s0, 0x2818($s2)
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10264)));
    // 0x1cfdb8: 0x8e442834  lw          $a0, 0x2834($s2)
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10292)));
    // 0x1cfdbc: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x1cfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x1cfdc0: 0x9243282b  lbu         $v1, 0x282B($s2)
    ctx->pc = 0x1cfdc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10283)));
    // 0x1cfdc4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CFDC4u;
    {
        const bool branch_taken_0x1cfdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC4u;
        // 0x1cfdc8: 0x8e512830  lw          $s1, 0x2830($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdc4) {
            ctx->pc = 0x1CFEC0u;
            goto label_1cfec0;
        }
    }
    ctx->pc = 0x1CFDCCu;
    // 0x1cfdcc: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x1cfdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1cfdd0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cfdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cfdd4: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1CFDD4u;
    {
        const bool branch_taken_0x1cfdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfdd4) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFDDCu;
    // 0x1cfddc: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFDDCu;
    SET_GPR_U32(ctx, 31, 0x1CFDE4u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFDDCu, 0x1CFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE4u;
label_1cfde4:
    // 0x1cfde4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfde8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfdec: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1cfdecu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cfdf0: 0x0  nop
    ctx->pc = 0x1cfdf0u;
    // NOP
    // 0x1cfdf4: 0x0  nop
    ctx->pc = 0x1cfdf4u;
    // NOP
    // 0x1cfdf8: 0x2010  mfhi        $a0
    ctx->pc = 0x1cfdf8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cfdfc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFDFCu;
    {
        const bool branch_taken_0x1cfdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfdfc) {
            ctx->pc = 0x1CFE0Cu;
            goto label_1cfe0c;
        }
    }
    ctx->pc = 0x1CFE04u;
    // 0x1cfe04: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1CFE04u;
    {
        const bool branch_taken_0x1cfe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE04u;
        // 0x1cfe08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe04) {
            ctx->pc = 0x1CFFD4u;
            goto label_1cffd4;
        }
    }
    ctx->pc = 0x1CFE0Cu;
label_1cfe0c:
    // 0x1cfe0c: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE14u);
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CFE0Cu, 0x1CFE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE14u;
label_1cfe14:
    // 0x1cfe14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cfe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cfe18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe20:
    // 0x1cfe20: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1CFE20u;
    SET_GPR_U32(ctx, 31, 0x1CFE28u);
    ctx->pc = 0x1CFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE20u;
    // 0x1cfe24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC0E0u, 0x1CFE20u, 0x1CFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1cfe28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1cfe2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CFE2Cu;
    {
        const bool branch_taken_0x1cfe2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe2c) {
            ctx->pc = 0x1CFEA8u;
            goto label_1cfea8;
        }
    }
    ctx->pc = 0x1CFE34u;
    // 0x1cfe34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe38: 0xc073048  jal         func_1CC120
    ctx->pc = 0x1CFE38u;
    SET_GPR_U32(ctx, 31, 0x1CFE40u);
    ctx->pc = 0x1CFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE38u;
    // 0x1cfe3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC120u, 0x1CFE38u, 0x1CFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE40u;
label_1cfe40:
    // 0x1cfe40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe48: 0xc072fec  jal         func_1CBFB0
    ctx->pc = 0x1CFE48u;
    SET_GPR_U32(ctx, 31, 0x1CFE50u);
    ctx->pc = 0x1CFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE48u;
    // 0x1cfe4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFB0u, 0x1CFE48u, 0x1CFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE50u;
label_1cfe50:
    // 0x1cfe50: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1cfe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe58: 0xc072fdc  jal         func_1CBF70
    ctx->pc = 0x1CFE58u;
    SET_GPR_U32(ctx, 31, 0x1CFE60u);
    ctx->pc = 0x1CFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE58u;
    // 0x1cfe5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF70u, 0x1CFE58u, 0x1CFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE60u;
label_1cfe60:
    // 0x1cfe60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cfe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe68: 0xc072ffc  jal         func_1CBFF0
    ctx->pc = 0x1CFE68u;
    SET_GPR_U32(ctx, 31, 0x1CFE70u);
    ctx->pc = 0x1CFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE68u;
    // 0x1cfe6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFF0u, 0x1CFE68u, 0x1CFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE70u;
label_1cfe70:
    // 0x1cfe70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe74: 0xc07300c  jal         func_1CC030
    ctx->pc = 0x1CFE74u;
    SET_GPR_U32(ctx, 31, 0x1CFE7Cu);
    ctx->pc = 0x1CFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE74u;
    // 0x1cfe78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC030u, 0x1CFE74u, 0x1CFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE7Cu;
label_1cfe7c:
    // 0x1cfe7c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cfe80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cfe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe88: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CFE88u;
    SET_GPR_U32(ctx, 31, 0x1CFE90u);
    ctx->pc = 0x1CFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE88u;
    // 0x1cfe8c: 0x24c631c8  addiu       $a2, $a2, 0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CFE88u, 0x1CFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE90u;
label_1cfe90:
    // 0x1cfe90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfe94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe98: 0xac33fb50  sw          $s3, -0x4B0($at)
    ctx->pc = 0x1cfe98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x36FB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB50u, _value); } while (0);
    // 0x1cfe9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfea0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1CFEA0u;
    {
        const bool branch_taken_0x1cfea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEA0u;
        // 0x1cfea4: 0xa023fb48  sb          $v1, -0x4B8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfea0) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFEA8u;
label_1cfea8:
    // 0x1cfea8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cfeac: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x1cfeacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cfeb0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CFEB0u;
    {
        const bool branch_taken_0x1cfeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB0u;
        // 0x1cfeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb0) {
            ctx->pc = 0x1CFE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe20;
        }
    }
    ctx->pc = 0x1CFEB8u;
    // 0x1cfeb8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFEC0u;
label_1cfec0:
    // 0x1cfec0: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x1cfec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cfec4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CFEC4u;
    {
        const bool branch_taken_0x1cfec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfec4) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFECCu;
    // 0x1cfecc: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cfed0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1cfed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cfed4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFED4u;
    {
        const bool branch_taken_0x1cfed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFED4u;
        // 0x1cfed8: 0x26420034  addiu       $v0, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfed4) {
            ctx->pc = 0x1CFEE8u;
            goto label_1cfee8;
        }
    }
    ctx->pc = 0x1CFEDCu;
    // 0x1cfedc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFEDCu;
    {
        const bool branch_taken_0x1cfedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEDCu;
        // 0x1cfee0: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfedc) {
            ctx->pc = 0x1CFEE8u;
            goto label_1cfee8;
        }
    }
    ctx->pc = 0x1CFEE4u;
    // 0x1cfee4: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_1cfee8:
    // 0x1cfee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfeec: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1cfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1cfef0: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x1cfef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cfef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFEF4u;
    {
        const bool branch_taken_0x1cfef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfef4) {
            ctx->pc = 0x1CFF04u;
            goto label_1cff04;
        }
    }
    ctx->pc = 0x1CFEFCu;
    // 0x1cfefc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFEFCu;
    {
        const bool branch_taken_0x1cfefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEFCu;
        // 0x1cff00: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfefc) {
            ctx->pc = 0x1CFF14u;
            goto label_1cff14;
        }
    }
    ctx->pc = 0x1CFF04u;
label_1cff04:
    // 0x1cff04: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cff08: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1cff08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cff0c: 0x221100a  movz        $v0, $s1, $at
    ctx->pc = 0x1cff0cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x1cff10: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x1cff10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_1cff14:
    // 0x1cff14: 0xc074024  jal         func_1D0090
    ctx->pc = 0x1CFF14u;
    SET_GPR_U32(ctx, 31, 0x1CFF1Cu);
    ctx->pc = 0x1CFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF14u;
    // 0x1cff18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0090u, 0x1CFF14u, 0x1CFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1Cu;
label_1cff1c:
    // 0x1cff1c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF24u);
    ctx->pc = 0x1CFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF1Cu;
    // 0x1cff20: 0xde510028  ld          $s1, 0x28($s2) (Delay Slot)
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFF1Cu, 0x1CFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cff28: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CFF28u;
    {
        const bool branch_taken_0x1cff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cff28) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFF30u;
    // 0x1cff30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cff30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff38:
    // 0x1cff38: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1CFF38u;
    SET_GPR_U32(ctx, 31, 0x1CFF40u);
    ctx->pc = 0x1CFF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF38u;
    // 0x1cff3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC0E0u, 0x1CFF38u, 0x1CFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF40u;
label_1cff40:
    // 0x1cff40: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1cff40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cff44: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CFF44u;
    {
        const bool branch_taken_0x1cff44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff44) {
            ctx->pc = 0x1CFFC0u;
            goto label_1cffc0;
        }
    }
    ctx->pc = 0x1CFF4Cu;
    // 0x1cff4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff50: 0xc073048  jal         func_1CC120
    ctx->pc = 0x1CFF50u;
    SET_GPR_U32(ctx, 31, 0x1CFF58u);
    ctx->pc = 0x1CFF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF50u;
    // 0x1cff54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC120u, 0x1CFF50u, 0x1CFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF58u;
label_1cff58:
    // 0x1cff58: 0xde460028  ld          $a2, 0x28($s2)
    ctx->pc = 0x1cff58u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cff5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff60: 0xc072fec  jal         func_1CBFB0
    ctx->pc = 0x1CFF60u;
    SET_GPR_U32(ctx, 31, 0x1CFF68u);
    ctx->pc = 0x1CFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF60u;
    // 0x1cff64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFB0u, 0x1CFF60u, 0x1CFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF68u;
label_1cff68:
    // 0x1cff68: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cff6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff70: 0xc072fdc  jal         func_1CBF70
    ctx->pc = 0x1CFF70u;
    SET_GPR_U32(ctx, 31, 0x1CFF78u);
    ctx->pc = 0x1CFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF70u;
    // 0x1cff74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF70u, 0x1CFF70u, 0x1CFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF78u;
label_1cff78:
    // 0x1cff78: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x1cff78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cff7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff80: 0xc072ffc  jal         func_1CBFF0
    ctx->pc = 0x1CFF80u;
    SET_GPR_U32(ctx, 31, 0x1CFF88u);
    ctx->pc = 0x1CFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF80u;
    // 0x1cff84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFF0u, 0x1CFF80u, 0x1CFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF88u;
label_1cff88:
    // 0x1cff88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff8c: 0xc07300c  jal         func_1CC030
    ctx->pc = 0x1CFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF94u);
    ctx->pc = 0x1CFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF8Cu;
    // 0x1cff90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC030u, 0x1CFF8Cu, 0x1CFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF94u;
label_1cff94:
    // 0x1cff94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cff98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffa0: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CFFA0u;
    SET_GPR_U32(ctx, 31, 0x1CFFA8u);
    ctx->pc = 0x1CFFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFA0u;
    // 0x1cffa4: 0x24c631c8  addiu       $a2, $a2, 0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CFFA0u, 0x1CFFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFA8u;
label_1cffa8:
    // 0x1cffa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cffac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffb0: 0xac30fb50  sw          $s0, -0x4B0($at)
    ctx->pc = 0x1cffb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x36FB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB50u, _value); } while (0);
    // 0x1cffb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cffb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFFB8u;
    {
        const bool branch_taken_0x1cffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB8u;
        // 0x1cffbc: 0xa023fb48  sb          $v1, -0x4B8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffb8) {
            ctx->pc = 0x1CFFD0u;
            goto label_1cffd0;
        }
    }
    ctx->pc = 0x1CFFC0u;
label_1cffc0:
    // 0x1cffc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cffc4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1cffc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cffc8: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CFFC8u;
    {
        const bool branch_taken_0x1cffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFC8u;
        // 0x1cffcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffc8) {
            ctx->pc = 0x1CFF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff38;
        }
    }
    ctx->pc = 0x1CFFD0u;
label_1cffd0:
    // 0x1cffd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cffd4:
    // 0x1cffd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cffd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cffd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cffd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cffdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cffdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cffe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cffe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFE4u;
        // 0x1cffe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFECu;
}
