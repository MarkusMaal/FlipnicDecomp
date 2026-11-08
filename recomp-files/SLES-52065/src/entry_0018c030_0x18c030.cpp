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

// Function: entry_0018c030
// Address: 0x18c030 - 0x18c0b4
void entry_0018c030_0x18c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c030_0x18c030");
#endif

    switch (ctx->pc) {
        case 0x18c040u: goto label_18c040;
        case 0x18c050u: goto label_18c050;
        case 0x18c060u: goto label_18c060;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c0a4u: goto label_18c0a4;
        default: break;
    }

    ctx->pc = 0x18c030u;

label_18c030:
    // 0x18c030: 0xc62c04e8  lwc1        $f12, 0x4E8($s1)
    ctx->pc = 0x18c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c034:
    // 0x18c034: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c038:
    // 0x18c038: 0xc07d3d4  jal         func_1F4F50
label_18c03c:
    if (ctx->pc == 0x18C03Cu) {
        ctx->pc = 0x18C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C038u;
        // 0x18c03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C040u;
        goto label_18c040;
    }
    ctx->pc = 0x18C038u;
    SET_GPR_U32(ctx, 31, 0x18C040u);
    ctx->pc = 0x18C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C038u;
    // 0x18c03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x18C038u, 0x18C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C040u;
label_18c040:
    // 0x18c040: 0xc62c04e0  lwc1        $f12, 0x4E0($s1)
    ctx->pc = 0x18c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c044:
    // 0x18c044: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c048:
    // 0x18c048: 0xc07d3fe  jal         func_1F4FF8
label_18c04c:
    if (ctx->pc == 0x18C04Cu) {
        ctx->pc = 0x18C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C048u;
        // 0x18c04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C050u;
        goto label_18c050;
    }
    ctx->pc = 0x18C048u;
    SET_GPR_U32(ctx, 31, 0x18C050u);
    ctx->pc = 0x18C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C048u;
    // 0x18c04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x18C048u, 0x18C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C050u;
label_18c050:
    // 0x18c050: 0xc62c04e4  lwc1        $f12, 0x4E4($s1)
    ctx->pc = 0x18c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c054:
    // 0x18c054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c058:
    // 0x18c058: 0xc07d428  jal         func_1F50A0
label_18c05c:
    if (ctx->pc == 0x18C05Cu) {
        ctx->pc = 0x18C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C058u;
        // 0x18c05c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C060u;
        goto label_18c060;
    }
    ctx->pc = 0x18C058u;
    SET_GPR_U32(ctx, 31, 0x18C060u);
    ctx->pc = 0x18C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C058u;
    // 0x18c05c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x18C058u, 0x18C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C060u;
label_18c060:
    // 0x18c060: 0xc62004d0  lwc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c064:
    // 0x18c064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c068:
    // 0x18c068: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_18c06c:
    // 0x18c06c: 0xc62004d4  lwc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c070:
    // 0x18c070: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18c070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_18c074:
    // 0x18c074: 0xc62004d8  lwc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c078:
    // 0x18c078: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_18c07c:
    // 0x18c07c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x18c07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18c080:
    // 0x18c080: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_18c084:
    // 0x18c084: 0x320f809  jalr        $t9
label_18c088:
    if (ctx->pc == 0x18C088u) {
        ctx->pc = 0x18C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C084u;
        // 0x18c088: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C08Cu;
        goto label_18c08c;
    }
    ctx->pc = 0x18C084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18C08Cu);
        ctx->pc = 0x18C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C084u;
        // 0x18c088: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C084u, 0x18C08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C08Cu;
label_18c08c:
    // 0x18c08c: 0xc62005b4  lwc1        $f0, 0x5B4($s1)
    ctx->pc = 0x18c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c090:
    // 0x18c090: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_18c094:
    // 0x18c094: 0x262505c0  addiu       $a1, $s1, 0x5C0
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
label_18c098:
    // 0x18c098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c09c:
    // 0x18c09c: 0xc05ff20  jal         func_17FC80
label_18c0a0:
    if (ctx->pc == 0x18C0A0u) {
        ctx->pc = 0x18C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C09Cu;
        // 0x18c0a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0A4u;
        goto label_18c0a4;
    }
    ctx->pc = 0x18C09Cu;
    SET_GPR_U32(ctx, 31, 0x18C0A4u);
    ctx->pc = 0x18C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C09Cu;
    // 0x18c0a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x18C09Cu, 0x18C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0A4u;
label_18c0a4:
    // 0x18c0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c0a8:
    // 0x18c0a8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_18c0ac:
    if (ctx->pc == 0x18C0ACu) {
        ctx->pc = 0x18C0B0u;
        goto label_18c0b0;
    }
    ctx->pc = 0x18C0A8u;
    {
        const bool branch_taken_0x18c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c0a8) {
            ctx->pc = 0x18C0B4u;
            return;
        }
    }
    ctx->pc = 0x18C0B0u;
label_18c0b0:
    // 0x18c0b0: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x18c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    ctx->pc = 0x18c0b4u;
}
