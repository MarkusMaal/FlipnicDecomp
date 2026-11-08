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

// Function: FUN_0014cf20
// Address: 0x14cf20 - 0x14d018
void FUN_0014cf20_0x14cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014cf20_0x14cf20");
#endif

    switch (ctx->pc) {
        case 0x14cf20u: goto label_14cf20;
        case 0x14cf24u: goto label_14cf24;
        case 0x14cf28u: goto label_14cf28;
        case 0x14cf2cu: goto label_14cf2c;
        case 0x14cf30u: goto label_14cf30;
        case 0x14cf34u: goto label_14cf34;
        case 0x14cf38u: goto label_14cf38;
        case 0x14cf3cu: goto label_14cf3c;
        case 0x14cf40u: goto label_14cf40;
        case 0x14cf44u: goto label_14cf44;
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf4cu: goto label_14cf4c;
        case 0x14cf50u: goto label_14cf50;
        case 0x14cf54u: goto label_14cf54;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf5cu: goto label_14cf5c;
        case 0x14cf60u: goto label_14cf60;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf68u: goto label_14cf68;
        case 0x14cf6cu: goto label_14cf6c;
        case 0x14cf70u: goto label_14cf70;
        case 0x14cf74u: goto label_14cf74;
        case 0x14cf78u: goto label_14cf78;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf84u: goto label_14cf84;
        case 0x14cf88u: goto label_14cf88;
        case 0x14cf8cu: goto label_14cf8c;
        case 0x14cf90u: goto label_14cf90;
        case 0x14cf94u: goto label_14cf94;
        case 0x14cf98u: goto label_14cf98;
        case 0x14cf9cu: goto label_14cf9c;
        case 0x14cfa0u: goto label_14cfa0;
        case 0x14cfa4u: goto label_14cfa4;
        case 0x14cfa8u: goto label_14cfa8;
        case 0x14cfacu: goto label_14cfac;
        case 0x14cfb0u: goto label_14cfb0;
        case 0x14cfb4u: goto label_14cfb4;
        case 0x14cfb8u: goto label_14cfb8;
        case 0x14cfbcu: goto label_14cfbc;
        case 0x14cfc0u: goto label_14cfc0;
        case 0x14cfc4u: goto label_14cfc4;
        case 0x14cfc8u: goto label_14cfc8;
        case 0x14cfccu: goto label_14cfcc;
        case 0x14cfd0u: goto label_14cfd0;
        case 0x14cfd4u: goto label_14cfd4;
        case 0x14cfd8u: goto label_14cfd8;
        case 0x14cfdcu: goto label_14cfdc;
        case 0x14cfe0u: goto label_14cfe0;
        case 0x14cfe4u: goto label_14cfe4;
        case 0x14cfe8u: goto label_14cfe8;
        case 0x14cfecu: goto label_14cfec;
        case 0x14cff0u: goto label_14cff0;
        case 0x14cff4u: goto label_14cff4;
        case 0x14cff8u: goto label_14cff8;
        case 0x14cffcu: goto label_14cffc;
        case 0x14d000u: goto label_14d000;
        case 0x14d004u: goto label_14d004;
        case 0x14d008u: goto label_14d008;
        case 0x14d00cu: goto label_14d00c;
        case 0x14d010u: goto label_14d010;
        case 0x14d014u: goto label_14d014;
        default: break;
    }

    ctx->pc = 0x14cf20u;

label_14cf20:
    // 0x14cf20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_14cf24:
    // 0x14cf24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_14cf28:
    // 0x14cf28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14cf2c:
    // 0x14cf2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14cf30:
    // 0x14cf30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14cf34:
    // 0x14cf34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14cf38:
    // 0x14cf38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cf3c:
    // 0x14cf3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14cf3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14cf40:
    // 0x14cf40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14cf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cf44:
    // 0x14cf44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14cf44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_14cf48:
    // 0x14cf48: 0xc07d3ac  jal         func_1F4EB0
label_14cf4c:
    if (ctx->pc == 0x14CF4Cu) {
        ctx->pc = 0x14CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF48u;
        // 0x14cf4c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF50u;
        goto label_14cf50;
    }
    ctx->pc = 0x14CF48u;
    SET_GPR_U32(ctx, 31, 0x14CF50u);
    ctx->pc = 0x14CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF48u;
    // 0x14cf4c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x14CF48u, 0x14CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF50u;
label_14cf50:
    // 0x14cf50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14cf54:
    // 0x14cf54: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x14cf54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14cf58:
    // 0x14cf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf5c:
    // 0x14cf5c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14cf60:
    // 0x14cf60: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x14cf60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_14cf64:
    // 0x14cf64: 0x263200bc  addiu       $s2, $s1, 0xBC
    ctx->pc = 0x14cf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
label_14cf68:
    // 0x14cf68: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x14cf68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_14cf6c:
    // 0x14cf6c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x14cf6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_14cf70:
    // 0x14cf70: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_14cf74:
    // 0x14cf74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14cf78:
    // 0x14cf78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14cf7c:
    // 0x14cf7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cf80:
    // 0x14cf80: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x14cf80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_14cf84:
    // 0x14cf84: 0x320f809  jalr        $t9
label_14cf88:
    if (ctx->pc == 0x14CF88u) {
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x46140503  div.s       $f20, $f0, $f20 (Delay Slot)
        { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF8Cu;
        goto label_14cf8c;
    }
    ctx->pc = 0x14CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CF8Cu);
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x46140503  div.s       $f20, $f0, $f20 (Delay Slot)
        { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF84u, 0x14CF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CF8Cu;
label_14cf8c:
    // 0x14cf8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14cf90:
    // 0x14cf90: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14cf94:
    // 0x14cf94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14cf98:
    // 0x14cf98: 0xc04c730  jal         func_131CC0
label_14cf9c:
    if (ctx->pc == 0x14CF9Cu) {
        ctx->pc = 0x14CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF98u;
        // 0x14cf9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFA0u;
        goto label_14cfa0;
    }
    ctx->pc = 0x14CF98u;
    SET_GPR_U32(ctx, 31, 0x14CFA0u);
    ctx->pc = 0x14CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF98u;
    // 0x14cf9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x14CF98u, 0x14CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFA0u;
label_14cfa0:
    // 0x14cfa0: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14cfa4:
    // 0x14cfa4: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x14cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_14cfa8:
    // 0x14cfa8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x14cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_14cfac:
    // 0x14cfac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14cfb0:
    // 0x14cfb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14cfb4:
    // 0x14cfb4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x14cfb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14cfb8:
    // 0x14cfb8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14cfbc:
    // 0x14cfbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cfc0:
    // 0x14cfc0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_14cfc4:
    // 0x14cfc4: 0x1230000c  beq         $s1, $s0, . + 4 + (0xC << 2)
label_14cfc8:
    if (ctx->pc == 0x14CFC8u) {
        ctx->pc = 0x14CFCCu;
        goto label_14cfcc;
    }
    ctx->pc = 0x14CFC4u;
    {
        const bool branch_taken_0x14cfc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x14cfc4) {
            ctx->pc = 0x14CFF8u;
            goto label_14cff8;
        }
    }
    ctx->pc = 0x14CFCCu;
label_14cfcc:
    // 0x14cfcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cfd0:
    // 0x14cfd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cfd4:
    // 0x14cfd4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x14cfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_14cfd8:
    // 0x14cfd8: 0x320f809  jalr        $t9
label_14cfdc:
    if (ctx->pc == 0x14CFDCu) {
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFE0u;
        goto label_14cfe0;
    }
    ctx->pc = 0x14CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CFE0u);
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFD8u, 0x14CFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CFE0u;
label_14cfe0:
    // 0x14cfe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cfe4:
    // 0x14cfe4: 0xc04c730  jal         func_131CC0
label_14cfe8:
    if (ctx->pc == 0x14CFE8u) {
        ctx->pc = 0x14CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFE4u;
        // 0x14cfe8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFECu;
        goto label_14cfec;
    }
    ctx->pc = 0x14CFE4u;
    SET_GPR_U32(ctx, 31, 0x14CFECu);
    ctx->pc = 0x14CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFE4u;
    // 0x14cfe8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x14CFE4u, 0x14CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFECu;
label_14cfec:
    // 0x14cfec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14cfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_14cff0:
    // 0x14cff0: 0x1630fff6  bne         $s1, $s0, . + 4 + (-0xA << 2)
label_14cff4:
    if (ctx->pc == 0x14CFF4u) {
        ctx->pc = 0x14CFF8u;
        goto label_14cff8;
    }
    ctx->pc = 0x14CFF0u;
    {
        const bool branch_taken_0x14cff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x14cff0) {
            ctx->pc = 0x14CFCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cfcc;
        }
    }
    ctx->pc = 0x14CFF8u;
label_14cff8:
    // 0x14cff8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_14cffc:
    // 0x14cffc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14cffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14d000:
    // 0x14d000: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14d004:
    // 0x14d004: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d008:
    // 0x14d008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14d00c:
    // 0x14d00c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d010:
    // 0x14d010: 0x3e00008  jr          $ra
label_14d014:
    if (ctx->pc == 0x14D014u) {
        ctx->pc = 0x14D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D010u;
        // 0x14d014: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D018u;
        goto label_fallthrough_0x14d010;
    }
    ctx->pc = 0x14D010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D010u;
        // 0x14d014: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d010:
    ctx->pc = 0x14D018u;
}
