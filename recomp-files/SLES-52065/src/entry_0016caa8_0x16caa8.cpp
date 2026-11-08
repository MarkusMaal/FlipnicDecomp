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

// Function: entry_0016caa8
// Address: 0x16caa8 - 0x16cb24
void entry_0016caa8_0x16caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016caa8_0x16caa8");
#endif

    switch (ctx->pc) {
        case 0x16cab0u: goto label_16cab0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae8u: goto label_16cae8;
        case 0x16cafcu: goto label_16cafc;
        default: break;
    }

    ctx->pc = 0x16caa8u;

label_16caa8:
    // 0x16caa8: 0xc055c40  jal         func_157100
label_16caac:
    if (ctx->pc == 0x16CAACu) {
        ctx->pc = 0x16CAB0u;
        goto label_16cab0;
    }
    ctx->pc = 0x16CAA8u;
    SET_GPR_U32(ctx, 31, 0x16CAB0u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16CAA8u, 0x16CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAB0u;
label_16cab0:
    // 0x16cab0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cab4:
    // 0x16cab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cab8:
    // 0x16cab8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16cabc:
    // 0x16cabc: 0x320f809  jalr        $t9
label_16cac0:
    if (ctx->pc == 0x16CAC0u) {
        ctx->pc = 0x16CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CABCu;
        // 0x16cac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAC4u;
        goto label_16cac4;
    }
    ctx->pc = 0x16CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CAC4u);
        ctx->pc = 0x16CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CABCu;
        // 0x16cac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CABCu, 0x16CAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CAC4u;
label_16cac4:
    // 0x16cac4: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cac8:
    // 0x16cac8: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cacc:
    // 0x16cacc: 0xc6340224  lwc1        $f20, 0x224($s1)
    ctx->pc = 0x16caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16cad0:
    // 0x16cad0: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x16cad0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16cad4:
    // 0x16cad4: 0xc0548a8  jal         func_1522A0
label_16cad8:
    if (ctx->pc == 0x16CAD8u) {
        ctx->pc = 0x16CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAD4u;
        // 0x16cad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CADCu;
        goto label_16cadc;
    }
    ctx->pc = 0x16CAD4u;
    SET_GPR_U32(ctx, 31, 0x16CADCu);
    ctx->pc = 0x16CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAD4u;
    // 0x16cad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16CAD4u, 0x16CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CADCu;
label_16cadc:
    // 0x16cadc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16cadcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16cae0:
    // 0x16cae0: 0xc07edc4  jal         func_1FB710
label_16cae4:
    if (ctx->pc == 0x16CAE4u) {
        ctx->pc = 0x16CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAE0u;
        // 0x16cae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAE8u;
        goto label_16cae8;
    }
    ctx->pc = 0x16CAE0u;
    SET_GPR_U32(ctx, 31, 0x16CAE8u);
    ctx->pc = 0x16CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAE0u;
    // 0x16cae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16CAE0u, 0x16CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAE8u;
label_16cae8:
    // 0x16cae8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16caec:
    // 0x16caec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16caf0:
    // 0x16caf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16caf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16caf4:
    // 0x16caf4: 0xc07eea2  jal         func_1FBA88
label_16caf8:
    if (ctx->pc == 0x16CAF8u) {
        ctx->pc = 0x16CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF4u;
        // 0x16caf8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAFCu;
        goto label_16cafc;
    }
    ctx->pc = 0x16CAF4u;
    SET_GPR_U32(ctx, 31, 0x16CAFCu);
    ctx->pc = 0x16CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAF4u;
    // 0x16caf8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16CAF4u, 0x16CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAFCu;
label_16cafc:
    // 0x16cafc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16cb00:
    // 0x16cb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cb04:
    // 0x16cb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cb08:
    // 0x16cb08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16cb0c:
    // 0x16cb0c: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cb10:
    // 0x16cb10: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_16cb14:
    // 0x16cb14: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cb18:
    // 0x16cb18: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16cb1c:
    // 0x16cb1c: 0x320f809  jalr        $t9
label_16cb20:
    if (ctx->pc == 0x16CB20u) {
        ctx->pc = 0x16CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB1Cu;
        // 0x16cb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB24u;
        goto label_fallthrough_0x16cb1c;
    }
    ctx->pc = 0x16CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CB24u);
        ctx->pc = 0x16CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB1Cu;
        // 0x16cb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB1Cu, 0x16CB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16cb1c:
    ctx->pc = 0x16CB24u;
}
