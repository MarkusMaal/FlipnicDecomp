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

// Function: entry_0016c02c
// Address: 0x16c02c - 0x16c0d4
void entry_0016c02c_0x16c02c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c02c_0x16c02c");
#endif

    switch (ctx->pc) {
        case 0x16c034u: goto label_16c034;
        case 0x16c054u: goto label_16c054;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c068u: goto label_16c068;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b8u: goto label_16c0b8;
        default: break;
    }

    ctx->pc = 0x16c02cu;

label_16c02c:
    // 0x16c02c: 0xc055c40  jal         func_157100
label_16c030:
    if (ctx->pc == 0x16C030u) {
        ctx->pc = 0x16C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C02Cu;
        // 0x16c030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C034u;
        goto label_16c034;
    }
    ctx->pc = 0x16C02Cu;
    SET_GPR_U32(ctx, 31, 0x16C034u);
    ctx->pc = 0x16C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C02Cu;
    // 0x16c030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C02Cu, 0x16C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C034u;
label_16c034:
    // 0x16c034: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c038:
    // 0x16c038: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c03c:
    // 0x16c03c: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c040:
    // 0x16c040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c044:
    // 0x16c044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c048:
    // 0x16c048: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16c04c:
    // 0x16c04c: 0x320f809  jalr        $t9
label_16c050:
    if (ctx->pc == 0x16C050u) {
        ctx->pc = 0x16C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C04Cu;
        // 0x16c050: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C054u;
        goto label_16c054;
    }
    ctx->pc = 0x16C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C054u);
        ctx->pc = 0x16C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C04Cu;
        // 0x16c050: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C04Cu, 0x16C054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C054u;
label_16c054:
    // 0x16c054: 0xc0548a8  jal         func_1522A0
label_16c058:
    if (ctx->pc == 0x16C058u) {
        ctx->pc = 0x16C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C054u;
        // 0x16c058: 0xc62c0224  lwc1        $f12, 0x224($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C05Cu;
        goto label_16c05c;
    }
    ctx->pc = 0x16C054u;
    SET_GPR_U32(ctx, 31, 0x16C05Cu);
    ctx->pc = 0x16C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C054u;
    // 0x16c058: 0xc62c0224  lwc1        $f12, 0x224($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16C054u, 0x16C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C05Cu;
label_16c05c:
    // 0x16c05c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16c05cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16c060:
    // 0x16c060: 0xc07edc4  jal         func_1FB710
label_16c064:
    if (ctx->pc == 0x16C064u) {
        ctx->pc = 0x16C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C060u;
        // 0x16c064: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C068u;
        goto label_16c068;
    }
    ctx->pc = 0x16C060u;
    SET_GPR_U32(ctx, 31, 0x16C068u);
    ctx->pc = 0x16C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C060u;
    // 0x16c064: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16C060u, 0x16C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C068u;
label_16c068:
    // 0x16c068: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16c06c:
    // 0x16c06c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16c070:
    // 0x16c070: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16c070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16c074:
    // 0x16c074: 0xc07eea2  jal         func_1FBA88
label_16c078:
    if (ctx->pc == 0x16C078u) {
        ctx->pc = 0x16C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C074u;
        // 0x16c078: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C07Cu;
        goto label_16c07c;
    }
    ctx->pc = 0x16C074u;
    SET_GPR_U32(ctx, 31, 0x16C07Cu);
    ctx->pc = 0x16C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C074u;
    // 0x16c078: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16C074u, 0x16C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C07Cu;
label_16c07c:
    // 0x16c07c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16c080:
    // 0x16c080: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16c080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16c084:
    // 0x16c084: 0xc082520  jal         func_209480
label_16c088:
    if (ctx->pc == 0x16C088u) {
        ctx->pc = 0x16C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C084u;
        // 0x16c088: 0xc60c01c0  lwc1        $f12, 0x1C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C08Cu;
        goto label_16c08c;
    }
    ctx->pc = 0x16C084u;
    SET_GPR_U32(ctx, 31, 0x16C08Cu);
    ctx->pc = 0x16C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C084u;
    // 0x16c088: 0xc60c01c0  lwc1        $f12, 0x1C0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x16C084u, 0x16C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C08Cu;
label_16c08c:
    // 0x16c08c: 0x3c043f50  lui         $a0, 0x3F50
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16208 << 16));
label_16c090:
    // 0x16c090: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x16c090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
label_16c094:
    // 0x16c094: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x16c094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25165);
label_16c098:
    // 0x16c098: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16c098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_16c09c:
    // 0x16c09c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_16c0a0:
    // 0x16c0a0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x16c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
label_16c0a4:
    // 0x16c0a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_16c0a8:
    // 0x16c0a8: 0xc081ffe  jal         func_207FF8
label_16c0ac:
    if (ctx->pc == 0x16C0ACu) {
        ctx->pc = 0x16C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0A8u;
        // 0x16c0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0B0u;
        goto label_16c0b0;
    }
    ctx->pc = 0x16C0A8u;
    SET_GPR_U32(ctx, 31, 0x16C0B0u);
    ctx->pc = 0x16C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0A8u;
    // 0x16c0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x16C0A8u, 0x16C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B0u;
label_16c0b0:
    // 0x16c0b0: 0xc082222  jal         func_208888
label_16c0b4:
    if (ctx->pc == 0x16C0B4u) {
        ctx->pc = 0x16C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B0u;
        // 0x16c0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0B8u;
        goto label_16c0b8;
    }
    ctx->pc = 0x16C0B0u;
    SET_GPR_U32(ctx, 31, 0x16C0B8u);
    ctx->pc = 0x16C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0B0u;
    // 0x16c0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x16C0B0u, 0x16C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B8u;
label_16c0b8:
    // 0x16c0b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16c0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_16c0bc:
    // 0x16c0bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c0:
    // 0x16c0c0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c0c4:
    // 0x16c0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c8:
    // 0x16c0c8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16c0cc:
    // 0x16c0cc: 0x320f809  jalr        $t9
label_16c0d0:
    if (ctx->pc == 0x16C0D0u) {
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0D4u;
        goto label_fallthrough_0x16c0cc;
    }
    ctx->pc = 0x16C0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C0D4u);
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C0CCu, 0x16C0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16c0cc:
    ctx->pc = 0x16C0D4u;
}
