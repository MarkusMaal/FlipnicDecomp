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

// Function: FUN_00131f10
// Address: 0x131f10 - 0x1320a4
void FUN_00131f10_0x131f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131f10_0x131f10");
#endif

    switch (ctx->pc) {
        case 0x131f6cu: goto label_131f6c;
        case 0x131f78u: goto label_131f78;
        case 0x131f84u: goto label_131f84;
        case 0x131f90u: goto label_131f90;
        case 0x131fb4u: goto label_131fb4;
        case 0x13200cu: goto label_13200c;
        case 0x132018u: goto label_132018;
        case 0x132028u: goto label_132028;
        case 0x132034u: goto label_132034;
        case 0x132050u: goto label_132050;
        case 0x13205cu: goto label_13205c;
        default: break;
    }

    ctx->pc = 0x131f10u;

label_131f10:
    // 0x131f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131f20: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x131f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x131f24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131F24u;
    {
        const bool branch_taken_0x131f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F24u;
        // 0x131f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f24) {
            ctx->pc = 0x131F54u;
            goto label_131f54;
        }
    }
    ctx->pc = 0x131F2Cu;
    // 0x131f2c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x131f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131f30: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x131f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131f38: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x131f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x131f3c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x131f40: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x131f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f44: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x131f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131f4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131F4Cu;
    {
        const bool branch_taken_0x131f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F4Cu;
        // 0x131f50: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f4c) {
            ctx->pc = 0x131F64u;
            goto label_131f64;
        }
    }
    ctx->pc = 0x131F54u;
label_131f54:
    // 0x131f54: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x131f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f58: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x131f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x131f5c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x131f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f60: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x131f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_131f64:
    // 0x131f64: 0xc04c554  jal         func_131550
    ctx->pc = 0x131F64u;
    SET_GPR_U32(ctx, 31, 0x131F6Cu);
    ctx->pc = 0x131F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F64u;
    // 0x131f68: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131F64u, 0x131F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F6Cu;
label_131f6c:
    // 0x131f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f70: 0xc04c550  jal         func_131540
    ctx->pc = 0x131F70u;
    SET_GPR_U32(ctx, 31, 0x131F78u);
    ctx->pc = 0x131F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F70u;
    // 0x131f74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x131F70u, 0x131F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F78u;
label_131f78:
    // 0x131f78: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x131f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x131f7c: 0xc04c554  jal         func_131550
    ctx->pc = 0x131F7Cu;
    SET_GPR_U32(ctx, 31, 0x131F84u);
    ctx->pc = 0x131F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F7Cu;
    // 0x131f80: 0x8fb00050  lw          $s0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131F7Cu, 0x131F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F84u;
label_131f84:
    // 0x131f84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131f88: 0xc04c54c  jal         func_131530
    ctx->pc = 0x131F88u;
    SET_GPR_U32(ctx, 31, 0x131F90u);
    ctx->pc = 0x131F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F88u;
    // 0x131f8c: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131F88u, 0x131F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F90u;
label_131f90:
    // 0x131f90: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x131f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x131f94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131f98: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x131f9c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131fa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x131fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fa4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x131fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x131fa8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x131fac: 0x10700038  beq         $v1, $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x131FACu;
    {
        const bool branch_taken_0x131fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x131fac) {
            ctx->pc = 0x132090u;
            goto label_132090;
        }
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x131fb8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131fbc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x131fc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131FC0u;
    {
        const bool branch_taken_0x131fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131fc0) {
            ctx->pc = 0x131FF0u;
            goto label_131ff0;
        }
    }
    ctx->pc = 0x131FC8u;
    // 0x131fc8: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x131fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131fcc: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x131fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131fd4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x131fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x131fd8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x131fdc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x131fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fe0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x131fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131fe4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131FE8u;
    {
        const bool branch_taken_0x131fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FE8u;
        // 0x131fec: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fe8) {
            ctx->pc = 0x132000u;
            goto label_132000;
        }
    }
    ctx->pc = 0x131FF0u;
label_131ff0:
    // 0x131ff0: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x131ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131ff4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x131ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x131ff8: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x131ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131ffc: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x131ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_132000:
    // 0x132000: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x132000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132004: 0xc04c7b8  jal         func_131EE0
    ctx->pc = 0x132004u;
    SET_GPR_U32(ctx, 31, 0x13200Cu);
    ctx->pc = 0x132008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132004u;
    // 0x132008: 0x26250058  addiu       $a1, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EE0u, 0x132004u, 0x13200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13200Cu;
label_13200c:
    // 0x13200c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x132010: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132010u;
    SET_GPR_U32(ctx, 31, 0x132018u);
    ctx->pc = 0x132014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132010u;
    // 0x132014: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132010u, 0x132018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132018u;
label_132018:
    // 0x132018: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x132018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x13201c: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x13201cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x132020: 0xc04c7b0  jal         func_131EC0
    ctx->pc = 0x132020u;
    SET_GPR_U32(ctx, 31, 0x132028u);
    ctx->pc = 0x132024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132020u;
    // 0x132024: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EC0u, 0x132020u, 0x132028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132028u;
label_132028:
    // 0x132028: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x13202c: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x13202Cu;
    SET_GPR_U32(ctx, 31, 0x132034u);
    ctx->pc = 0x132030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13202Cu;
    // 0x132030: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x13202Cu, 0x132034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132034u;
label_132034:
    // 0x132034: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x132034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x132038: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13203c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132040: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x132040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x132044: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132048: 0x1071000a  beq         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x132048u;
    {
        const bool branch_taken_0x132048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x132048) {
            ctx->pc = 0x132074u;
            goto label_132074;
        }
    }
    ctx->pc = 0x132050u;
label_132050:
    // 0x132050: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x132050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132054: 0xc04c7c4  jal         func_131F10
    ctx->pc = 0x132054u;
    SET_GPR_U32(ctx, 31, 0x13205Cu);
    ctx->pc = 0x132058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132054u;
    // 0x132058: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F10u;
    goto label_131f10;
    ctx->pc = 0x13205Cu;
label_13205c:
    // 0x13205c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x13205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132060: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132064: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x132064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x132068: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13206c: 0x1471fff8  bne         $v1, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13206Cu;
    {
        const bool branch_taken_0x13206c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x13206c) {
            ctx->pc = 0x132050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132050;
        }
    }
    ctx->pc = 0x132074u;
label_132074:
    // 0x132074: 0x0  nop
    ctx->pc = 0x132074u;
    // NOP
    // 0x132078: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13207c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x13207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132080: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x132080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x132084: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x132084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x132088: 0x1470ffca  bne         $v1, $s0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x132088u;
    {
        const bool branch_taken_0x132088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x132088) {
            ctx->pc = 0x131FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131fb4;
        }
    }
    ctx->pc = 0x132090u;
label_132090:
    // 0x132090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13209c: 0x3e00008  jr          $ra
    ctx->pc = 0x13209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1320A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13209Cu;
        // 0x1320a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1320A4u;
}
