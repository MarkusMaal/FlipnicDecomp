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

// Function: FUN_0013ed40
// Address: 0x13ed40 - 0x13ee10
void FUN_0013ed40_0x13ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ed40_0x13ed40");
#endif

    switch (ctx->pc) {
        case 0x13ed40u: goto label_13ed40;
        case 0x13ed44u: goto label_13ed44;
        case 0x13ed48u: goto label_13ed48;
        case 0x13ed4cu: goto label_13ed4c;
        case 0x13ed50u: goto label_13ed50;
        case 0x13ed54u: goto label_13ed54;
        case 0x13ed58u: goto label_13ed58;
        case 0x13ed5cu: goto label_13ed5c;
        case 0x13ed60u: goto label_13ed60;
        case 0x13ed64u: goto label_13ed64;
        case 0x13ed68u: goto label_13ed68;
        case 0x13ed6cu: goto label_13ed6c;
        case 0x13ed70u: goto label_13ed70;
        case 0x13ed74u: goto label_13ed74;
        case 0x13ed78u: goto label_13ed78;
        case 0x13ed7cu: goto label_13ed7c;
        case 0x13ed80u: goto label_13ed80;
        case 0x13ed84u: goto label_13ed84;
        case 0x13ed88u: goto label_13ed88;
        case 0x13ed8cu: goto label_13ed8c;
        case 0x13ed90u: goto label_13ed90;
        case 0x13ed94u: goto label_13ed94;
        case 0x13ed98u: goto label_13ed98;
        case 0x13ed9cu: goto label_13ed9c;
        case 0x13eda0u: goto label_13eda0;
        case 0x13eda4u: goto label_13eda4;
        case 0x13eda8u: goto label_13eda8;
        case 0x13edacu: goto label_13edac;
        case 0x13edb0u: goto label_13edb0;
        case 0x13edb4u: goto label_13edb4;
        case 0x13edb8u: goto label_13edb8;
        case 0x13edbcu: goto label_13edbc;
        case 0x13edc0u: goto label_13edc0;
        case 0x13edc4u: goto label_13edc4;
        case 0x13edc8u: goto label_13edc8;
        case 0x13edccu: goto label_13edcc;
        case 0x13edd0u: goto label_13edd0;
        case 0x13edd4u: goto label_13edd4;
        case 0x13edd8u: goto label_13edd8;
        case 0x13eddcu: goto label_13eddc;
        case 0x13ede0u: goto label_13ede0;
        case 0x13ede4u: goto label_13ede4;
        case 0x13ede8u: goto label_13ede8;
        case 0x13edecu: goto label_13edec;
        case 0x13edf0u: goto label_13edf0;
        case 0x13edf4u: goto label_13edf4;
        case 0x13edf8u: goto label_13edf8;
        case 0x13edfcu: goto label_13edfc;
        case 0x13ee00u: goto label_13ee00;
        case 0x13ee04u: goto label_13ee04;
        case 0x13ee08u: goto label_13ee08;
        case 0x13ee0cu: goto label_13ee0c;
        default: break;
    }

    ctx->pc = 0x13ed40u;

label_13ed40:
    // 0x13ed40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13ed44:
    // 0x13ed44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ed48:
    // 0x13ed48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13ed4c:
    // 0x13ed4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13ed50:
    // 0x13ed50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13ed50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13ed54:
    // 0x13ed54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ed58:
    // 0x13ed58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13ed58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13ed5c:
    // 0x13ed5c: 0x9082018a  lbu         $v0, 0x18A($a0)
    ctx->pc = 0x13ed5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13ed60:
    // 0x13ed60: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_13ed64:
    if (ctx->pc == 0x13ED64u) {
        ctx->pc = 0x13ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED60u;
        // 0x13ed64: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED68u;
        goto label_13ed68;
    }
    ctx->pc = 0x13ED60u;
    {
        const bool branch_taken_0x13ed60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED60u;
        // 0x13ed64: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed60) {
            ctx->pc = 0x13ED94u;
            goto label_13ed94;
        }
    }
    ctx->pc = 0x13ED68u;
label_13ed68:
    // 0x13ed68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ed68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ed6c:
    // 0x13ed6c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13ed70:
    // 0x13ed70: 0x320f809  jalr        $t9
label_13ed74:
    if (ctx->pc == 0x13ED74u) {
        ctx->pc = 0x13ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED70u;
        // 0x13ed74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED78u;
        goto label_13ed78;
    }
    ctx->pc = 0x13ED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13ED78u);
        ctx->pc = 0x13ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED70u;
        // 0x13ed74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED70u, 0x13ED78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13ED78u;
label_13ed78:
    // 0x13ed78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13ed78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ed7c:
    // 0x13ed7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13ed7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_13ed80:
    // 0x13ed80: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x13ed80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_13ed84:
    // 0x13ed84: 0x320f809  jalr        $t9
label_13ed88:
    if (ctx->pc == 0x13ED88u) {
        ctx->pc = 0x13ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED84u;
        // 0x13ed88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED8Cu;
        goto label_13ed8c;
    }
    ctx->pc = 0x13ED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13ED8Cu);
        ctx->pc = 0x13ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED84u;
        // 0x13ed88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED84u, 0x13ED8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13ED8Cu;
label_13ed8c:
    // 0x13ed8c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_13ed90:
    if (ctx->pc == 0x13ED90u) {
        ctx->pc = 0x13ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED8Cu;
        // 0x13ed90: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED94u;
        goto label_13ed94;
    }
    ctx->pc = 0x13ED8Cu;
    {
        const bool branch_taken_0x13ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED8Cu;
        // 0x13ed90: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed8c) {
            ctx->pc = 0x13EDFCu;
            goto label_13edfc;
        }
    }
    ctx->pc = 0x13ED94u;
label_13ed94:
    // 0x13ed94: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x13ed94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
label_13ed98:
    // 0x13ed98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_13ed9c:
    if (ctx->pc == 0x13ED9Cu) {
        ctx->pc = 0x13ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED98u;
        // 0x13ed9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDA0u;
        goto label_13eda0;
    }
    ctx->pc = 0x13ED98u;
    {
        const bool branch_taken_0x13ed98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED98u;
        // 0x13ed9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed98) {
            ctx->pc = 0x13EDA8u;
            goto label_13eda8;
        }
    }
    ctx->pc = 0x13EDA0u;
label_13eda0:
    // 0x13eda0: 0x10000015  b           . + 4 + (0x15 << 2)
label_13eda4:
    if (ctx->pc == 0x13EDA4u) {
        ctx->pc = 0x13EDA8u;
        goto label_13eda8;
    }
    ctx->pc = 0x13EDA0u;
    {
        const bool branch_taken_0x13eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eda0) {
            ctx->pc = 0x13EDF8u;
            goto label_13edf8;
        }
    }
    ctx->pc = 0x13EDA8u;
label_13eda8:
    // 0x13eda8: 0x920200da  lbu         $v0, 0xDA($s0)
    ctx->pc = 0x13eda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
label_13edac:
    // 0x13edac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_13edb0:
    if (ctx->pc == 0x13EDB0u) {
        ctx->pc = 0x13EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDACu;
        // 0x13edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDB4u;
        goto label_13edb4;
    }
    ctx->pc = 0x13EDACu;
    {
        const bool branch_taken_0x13edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDACu;
        // 0x13edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edac) {
            ctx->pc = 0x13EDBCu;
            goto label_13edbc;
        }
    }
    ctx->pc = 0x13EDB4u;
label_13edb4:
    // 0x13edb4: 0x10000010  b           . + 4 + (0x10 << 2)
label_13edb8:
    if (ctx->pc == 0x13EDB8u) {
        ctx->pc = 0x13EDBCu;
        goto label_13edbc;
    }
    ctx->pc = 0x13EDB4u;
    {
        const bool branch_taken_0x13edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13edb4) {
            ctx->pc = 0x13EDF8u;
            goto label_13edf8;
        }
    }
    ctx->pc = 0x13EDBCu;
label_13edbc:
    // 0x13edbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13edbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13edc0:
    // 0x13edc0: 0x0  nop
    ctx->pc = 0x13edc0u;
    // NOP
label_13edc4:
    // 0x13edc4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x13edc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13edc8:
    // 0x13edc8: 0x0  nop
    ctx->pc = 0x13edc8u;
    // NOP
label_13edcc:
    // 0x13edcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_13edd0:
    if (ctx->pc == 0x13EDD0u) {
        ctx->pc = 0x13EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDCCu;
        // 0x13edd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDD4u;
        goto label_13edd4;
    }
    ctx->pc = 0x13EDCCu;
    {
        const bool branch_taken_0x13edcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDCCu;
        // 0x13edd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edcc) {
            ctx->pc = 0x13EDDCu;
            goto label_13eddc;
        }
    }
    ctx->pc = 0x13EDD4u;
label_13edd4:
    // 0x13edd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_13edd8:
    if (ctx->pc == 0x13EDD8u) {
        ctx->pc = 0x13EDDCu;
        goto label_13eddc;
    }
    ctx->pc = 0x13EDD4u;
    {
        const bool branch_taken_0x13edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13edd4) {
            ctx->pc = 0x13EDF8u;
            goto label_13edf8;
        }
    }
    ctx->pc = 0x13EDDCu;
label_13eddc:
    // 0x13eddc: 0xc61400bc  lwc1        $f20, 0xBC($s0)
    ctx->pc = 0x13eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13ede0:
    // 0x13ede0: 0xc050c80  jal         func_143200
label_13ede4:
    if (ctx->pc == 0x13EDE4u) {
        ctx->pc = 0x13EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDE0u;
        // 0x13ede4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDE8u;
        goto label_13ede8;
    }
    ctx->pc = 0x13EDE0u;
    SET_GPR_U32(ctx, 31, 0x13EDE8u);
    ctx->pc = 0x13EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDE0u;
    // 0x13ede4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143200u, 0x13EDE0u, 0x13EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13ede8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13edec:
    // 0x13edec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13edf0:
    // 0x13edf0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x13edf0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_13edf4:
    // 0x13edf4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x13edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_13edf8:
    // 0x13edf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13edfc:
    // 0x13edfc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13ee00:
    // 0x13ee00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13ee00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ee04:
    // 0x13ee04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13ee08:
    // 0x13ee08: 0x3e00008  jr          $ra
label_13ee0c:
    if (ctx->pc == 0x13EE0Cu) {
        ctx->pc = 0x13EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE08u;
        // 0x13ee0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE10u;
        goto label_fallthrough_0x13ee08;
    }
    ctx->pc = 0x13EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE08u;
        // 0x13ee0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ee08:
    ctx->pc = 0x13EE10u;
}
