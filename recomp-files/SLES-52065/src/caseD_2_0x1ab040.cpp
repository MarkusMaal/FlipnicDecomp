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

// Function: caseD_2
// Address: 0x1ab040 - 0x1ab0c4
void caseD_2_0x1ab040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ab040");
#endif

    switch (ctx->pc) {
        case 0x1ab040u: goto label_1ab040;
        case 0x1ab044u: goto label_1ab044;
        case 0x1ab048u: goto label_1ab048;
        case 0x1ab04cu: goto label_1ab04c;
        case 0x1ab050u: goto label_1ab050;
        case 0x1ab054u: goto label_1ab054;
        case 0x1ab058u: goto label_1ab058;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab068u: goto label_1ab068;
        case 0x1ab06cu: goto label_1ab06c;
        case 0x1ab070u: goto label_1ab070;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab078u: goto label_1ab078;
        case 0x1ab07cu: goto label_1ab07c;
        case 0x1ab080u: goto label_1ab080;
        case 0x1ab084u: goto label_1ab084;
        case 0x1ab088u: goto label_1ab088;
        case 0x1ab08cu: goto label_1ab08c;
        case 0x1ab090u: goto label_1ab090;
        case 0x1ab094u: goto label_1ab094;
        case 0x1ab098u: goto label_1ab098;
        case 0x1ab09cu: goto label_1ab09c;
        case 0x1ab0a0u: goto label_1ab0a0;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0a8u: goto label_1ab0a8;
        case 0x1ab0acu: goto label_1ab0ac;
        case 0x1ab0b0u: goto label_1ab0b0;
        case 0x1ab0b4u: goto label_1ab0b4;
        case 0x1ab0b8u: goto label_1ab0b8;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0c0u: goto label_1ab0c0;
        default: break;
    }

    ctx->pc = 0x1ab040u;

label_1ab040:
    // 0x1ab040: 0x8e8406e4  lw          $a0, 0x6E4($s4)
    ctx->pc = 0x1ab040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1764)));
label_1ab044:
    // 0x1ab044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab048:
    // 0x1ab048: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ab04c:
    // 0x1ab04c: 0x320f809  jalr        $t9
label_1ab050:
    if (ctx->pc == 0x1AB050u) {
        ctx->pc = 0x1AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB04Cu;
        // 0x1ab050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB054u;
        goto label_1ab054;
    }
    ctx->pc = 0x1AB04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB054u);
        ctx->pc = 0x1AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB04Cu;
        // 0x1ab050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB04Cu, 0x1AB054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB054u;
label_1ab054:
    // 0x1ab054: 0xae8007dc  sw          $zero, 0x7DC($s4)
    ctx->pc = 0x1ab054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2012), GPR_U32(ctx, 0));
label_1ab058:
    // 0x1ab058: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ab058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ab05c:
    // 0x1ab05c: 0xae8207e0  sw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ab05cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2016), GPR_U32(ctx, 2));
label_1ab060:
    // 0x1ab060: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ab064:
    // 0x1ab064: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ab064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab068:
    // 0x1ab068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab06c:
    // 0x1ab06c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ab06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab070:
    // 0x1ab070: 0x268407cc  addiu       $a0, $s4, 0x7CC
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1996));
label_1ab074:
    // 0x1ab074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab078:
    // 0x1ab078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ab078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ab07c:
    // 0x1ab07c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ab080:
    // 0x1ab080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ab080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ab084:
    // 0x1ab084: 0x0  nop
    ctx->pc = 0x1ab084u;
    // NOP
label_1ab088:
    // 0x1ab088: 0xae8307e4  sw          $v1, 0x7E4($s4)
    ctx->pc = 0x1ab088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2020), GPR_U32(ctx, 3));
label_1ab08c:
    // 0x1ab08c: 0xae8007e8  sw          $zero, 0x7E8($s4)
    ctx->pc = 0x1ab08cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2024), GPR_U32(ctx, 0));
label_1ab090:
    // 0x1ab090: 0xae8207ec  sw          $v0, 0x7EC($s4)
    ctx->pc = 0x1ab090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 2));
label_1ab094:
    // 0x1ab094: 0xc069d00  jal         func_1A7400
label_1ab098:
    if (ctx->pc == 0x1AB098u) {
        ctx->pc = 0x1AB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB094u;
        // 0x1ab098: 0xa28007f4  sb          $zero, 0x7F4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB09Cu;
        goto label_1ab09c;
    }
    ctx->pc = 0x1AB094u;
    SET_GPR_U32(ctx, 31, 0x1AB09Cu);
    ctx->pc = 0x1AB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB094u;
    // 0x1ab098: 0xa28007f4  sb          $zero, 0x7F4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AB094u, 0x1AB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB09Cu;
label_1ab09c:
    // 0x1ab09c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ab0a0:
    if (ctx->pc == 0x1AB0A0u) {
        ctx->pc = 0x1AB0A4u;
        goto label_1ab0a4;
    }
    ctx->pc = 0x1AB09Cu;
    {
        const bool branch_taken_0x1ab09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab09c) {
            ctx->pc = 0x1AB0C4u;
            return;
        }
    }
    ctx->pc = 0x1AB0A4u;
label_1ab0a4:
    // 0x1ab0a4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ab0a8:
    // 0x1ab0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab0ac:
    // 0x1ab0ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0b0:
    // 0x1ab0b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ab0b4:
    // 0x1ab0b4: 0xc063e08  jal         func_18F820
label_1ab0b8:
    if (ctx->pc == 0x1AB0B8u) {
        ctx->pc = 0x1AB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0B4u;
        // 0x1ab0b8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0BCu;
        goto label_1ab0bc;
    }
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0B4u;
    // 0x1ab0b8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB0B4u, 0x1AB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x10000172  b           . + 4 + (0x172 << 2)
label_1ab0c0:
    if (ctx->pc == 0x1AB0C0u) {
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x928306d8  lbu         $v1, 0x6D8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0C4u;
        goto label_fallthrough_0x1ab0bc;
    }
    ctx->pc = 0x1AB0BCu;
    {
        const bool branch_taken_0x1ab0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x928306d8  lbu         $v1, 0x6D8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0bc) {
            ctx->pc = 0x1AB688u;
            return;
        }
    }
label_fallthrough_0x1ab0bc:
    ctx->pc = 0x1AB0C4u;
}
