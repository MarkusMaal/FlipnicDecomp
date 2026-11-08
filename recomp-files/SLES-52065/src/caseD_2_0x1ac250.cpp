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
// Address: 0x1ac250 - 0x1ac2d4
void caseD_2_0x1ac250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ac250");
#endif

    switch (ctx->pc) {
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        default: break;
    }

    ctx->pc = 0x1ac250u;

label_1ac250:
    // 0x1ac250: 0x8e2406e4  lw          $a0, 0x6E4($s1)
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1764)));
label_1ac254:
    // 0x1ac254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac258:
    // 0x1ac258: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ac25c:
    // 0x1ac25c: 0x320f809  jalr        $t9
label_1ac260:
    if (ctx->pc == 0x1AC260u) {
        ctx->pc = 0x1AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC25Cu;
        // 0x1ac260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC264u;
        goto label_1ac264;
    }
    ctx->pc = 0x1AC25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC264u);
        ctx->pc = 0x1AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC25Cu;
        // 0x1ac260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC25Cu, 0x1AC264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC264u;
label_1ac264:
    // 0x1ac264: 0xae2007dc  sw          $zero, 0x7DC($s1)
    ctx->pc = 0x1ac264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 0));
label_1ac268:
    // 0x1ac268: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ac26c:
    // 0x1ac26c: 0xae2207e0  sw          $v0, 0x7E0($s1)
    ctx->pc = 0x1ac26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2016), GPR_U32(ctx, 2));
label_1ac270:
    // 0x1ac270: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ac274:
    // 0x1ac274: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ac274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac278:
    // 0x1ac278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac27c:
    // 0x1ac27c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ac27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac280:
    // 0x1ac280: 0x262407cc  addiu       $a0, $s1, 0x7CC
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1996));
label_1ac284:
    // 0x1ac284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac288:
    // 0x1ac288: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ac288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ac28c:
    // 0x1ac28c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac28cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac290:
    // 0x1ac290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ac290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ac294:
    // 0x1ac294: 0x0  nop
    ctx->pc = 0x1ac294u;
    // NOP
label_1ac298:
    // 0x1ac298: 0xae2307e4  sw          $v1, 0x7E4($s1)
    ctx->pc = 0x1ac298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2020), GPR_U32(ctx, 3));
label_1ac29c:
    // 0x1ac29c: 0xae2007e8  sw          $zero, 0x7E8($s1)
    ctx->pc = 0x1ac29cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2024), GPR_U32(ctx, 0));
label_1ac2a0:
    // 0x1ac2a0: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x1ac2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_1ac2a4:
    // 0x1ac2a4: 0xc069d00  jal         func_1A7400
label_1ac2a8:
    if (ctx->pc == 0x1AC2A8u) {
        ctx->pc = 0x1AC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A4u;
        // 0x1ac2a8: 0xa22007f4  sb          $zero, 0x7F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2ACu;
        goto label_1ac2ac;
    }
    ctx->pc = 0x1AC2A4u;
    SET_GPR_U32(ctx, 31, 0x1AC2ACu);
    ctx->pc = 0x1AC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A4u;
    // 0x1ac2a8: 0xa22007f4  sb          $zero, 0x7F4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AC2A4u, 0x1AC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2ACu;
label_1ac2ac:
    // 0x1ac2ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ac2b0:
    if (ctx->pc == 0x1AC2B0u) {
        ctx->pc = 0x1AC2B4u;
        goto label_1ac2b4;
    }
    ctx->pc = 0x1AC2ACu;
    {
        const bool branch_taken_0x1ac2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac2ac) {
            ctx->pc = 0x1AC2D4u;
            return;
        }
    }
    ctx->pc = 0x1AC2B4u;
label_1ac2b4:
    // 0x1ac2b4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ac2b8:
    // 0x1ac2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2bc:
    // 0x1ac2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac2c0:
    // 0x1ac2c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac2c4:
    // 0x1ac2c4: 0xc063e08  jal         func_18F820
label_1ac2c8:
    if (ctx->pc == 0x1AC2C8u) {
        ctx->pc = 0x1AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C4u;
        // 0x1ac2c8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2CCu;
        goto label_1ac2cc;
    }
    ctx->pc = 0x1AC2C4u;
    SET_GPR_U32(ctx, 31, 0x1AC2CCu);
    ctx->pc = 0x1AC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2C4u;
    // 0x1ac2c8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC2C4u, 0x1AC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2CCu;
label_1ac2cc:
    // 0x1ac2cc: 0x10000172  b           . + 4 + (0x172 << 2)
label_1ac2d0:
    if (ctx->pc == 0x1AC2D0u) {
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x922306d8  lbu         $v1, 0x6D8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2D4u;
        goto label_fallthrough_0x1ac2cc;
    }
    ctx->pc = 0x1AC2CCu;
    {
        const bool branch_taken_0x1ac2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x922306d8  lbu         $v1, 0x6D8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2cc) {
            ctx->pc = 0x1AC898u;
            return;
        }
    }
label_fallthrough_0x1ac2cc:
    ctx->pc = 0x1AC2D4u;
}
