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
// Address: 0x1ad470 - 0x1ad4f4
void caseD_2_0x1ad470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ad470");
#endif

    switch (ctx->pc) {
        case 0x1ad470u: goto label_1ad470;
        case 0x1ad474u: goto label_1ad474;
        case 0x1ad478u: goto label_1ad478;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        default: break;
    }

    ctx->pc = 0x1ad470u;

label_1ad470:
    // 0x1ad470: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
label_1ad474:
    // 0x1ad474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad478:
    // 0x1ad478: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad47c:
    // 0x1ad47c: 0x320f809  jalr        $t9
label_1ad480:
    if (ctx->pc == 0x1AD480u) {
        ctx->pc = 0x1AD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD47Cu;
        // 0x1ad480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD484u;
        goto label_1ad484;
    }
    ctx->pc = 0x1AD47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD484u);
        ctx->pc = 0x1AD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD47Cu;
        // 0x1ad480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD47Cu, 0x1AD484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD484u;
label_1ad484:
    // 0x1ad484: 0xae2007cc  sw          $zero, 0x7CC($s1)
    ctx->pc = 0x1ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 0));
label_1ad488:
    // 0x1ad488: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ad48c:
    // 0x1ad48c: 0xae2207d0  sw          $v0, 0x7D0($s1)
    ctx->pc = 0x1ad48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 2));
label_1ad490:
    // 0x1ad490: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ad490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ad494:
    // 0x1ad494: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ad494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad498:
    // 0x1ad498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad49c:
    // 0x1ad49c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ad49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad4a0:
    // 0x1ad4a0: 0x262407bc  addiu       $a0, $s1, 0x7BC
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1980));
label_1ad4a4:
    // 0x1ad4a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ad4a8:
    // 0x1ad4a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ad4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ad4ac:
    // 0x1ad4ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad4b0:
    // 0x1ad4b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ad4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ad4b4:
    // 0x1ad4b4: 0x0  nop
    ctx->pc = 0x1ad4b4u;
    // NOP
label_1ad4b8:
    // 0x1ad4b8: 0xae2307d4  sw          $v1, 0x7D4($s1)
    ctx->pc = 0x1ad4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2004), GPR_U32(ctx, 3));
label_1ad4bc:
    // 0x1ad4bc: 0xae2007d8  sw          $zero, 0x7D8($s1)
    ctx->pc = 0x1ad4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2008), GPR_U32(ctx, 0));
label_1ad4c0:
    // 0x1ad4c0: 0xae2207dc  sw          $v0, 0x7DC($s1)
    ctx->pc = 0x1ad4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 2));
label_1ad4c4:
    // 0x1ad4c4: 0xc069d00  jal         func_1A7400
label_1ad4c8:
    if (ctx->pc == 0x1AD4C8u) {
        ctx->pc = 0x1AD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4C4u;
        // 0x1ad4c8: 0xa22007e4  sb          $zero, 0x7E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4CCu;
        goto label_1ad4cc;
    }
    ctx->pc = 0x1AD4C4u;
    SET_GPR_U32(ctx, 31, 0x1AD4CCu);
    ctx->pc = 0x1AD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4C4u;
    // 0x1ad4c8: 0xa22007e4  sb          $zero, 0x7E4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2020), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AD4C4u, 0x1AD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4CCu;
label_1ad4cc:
    // 0x1ad4cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ad4d0:
    if (ctx->pc == 0x1AD4D0u) {
        ctx->pc = 0x1AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4CCu;
        // 0x1ad4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4D4u;
        goto label_1ad4d4;
    }
    ctx->pc = 0x1AD4CCu;
    {
        const bool branch_taken_0x1ad4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4CCu;
        // 0x1ad4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4cc) {
            ctx->pc = 0x1AD4F4u;
            return;
        }
    }
    ctx->pc = 0x1AD4D4u;
label_1ad4d4:
    // 0x1ad4d4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ad4d8:
    // 0x1ad4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad4dc:
    // 0x1ad4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4e0:
    // 0x1ad4e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ad4e4:
    // 0x1ad4e4: 0xc063e08  jal         func_18F820
label_1ad4e8:
    if (ctx->pc == 0x1AD4E8u) {
        ctx->pc = 0x1AD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4E4u;
        // 0x1ad4e8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4ECu;
        goto label_1ad4ec;
    }
    ctx->pc = 0x1AD4E4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ECu);
    ctx->pc = 0x1AD4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4E4u;
    // 0x1ad4e8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD4E4u, 0x1AD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4ECu;
label_1ad4ec:
    // 0x1ad4ec: 0x10000171  b           . + 4 + (0x171 << 2)
label_1ad4f0:
    if (ctx->pc == 0x1AD4F0u) {
        ctx->pc = 0x1AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4ECu;
        // 0x1ad4f0: 0x922306c0  lbu         $v1, 0x6C0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4F4u;
        goto label_fallthrough_0x1ad4ec;
    }
    ctx->pc = 0x1AD4ECu;
    {
        const bool branch_taken_0x1ad4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4ECu;
        // 0x1ad4f0: 0x922306c0  lbu         $v1, 0x6C0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4ec) {
            ctx->pc = 0x1ADAB4u;
            return;
        }
    }
label_fallthrough_0x1ad4ec:
    ctx->pc = 0x1AD4F4u;
}
