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
// Address: 0x1ae67c - 0x1ae700
void caseD_2_0x1ae67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ae67c");
#endif

    switch (ctx->pc) {
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae698u: goto label_1ae698;
        case 0x1ae69cu: goto label_1ae69c;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6a4u: goto label_1ae6a4;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6acu: goto label_1ae6ac;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6b4u: goto label_1ae6b4;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae6bcu: goto label_1ae6bc;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6c4u: goto label_1ae6c4;
        case 0x1ae6c8u: goto label_1ae6c8;
        case 0x1ae6ccu: goto label_1ae6cc;
        case 0x1ae6d0u: goto label_1ae6d0;
        case 0x1ae6d4u: goto label_1ae6d4;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6dcu: goto label_1ae6dc;
        case 0x1ae6e0u: goto label_1ae6e0;
        case 0x1ae6e4u: goto label_1ae6e4;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae6f4u: goto label_1ae6f4;
        case 0x1ae6f8u: goto label_1ae6f8;
        case 0x1ae6fcu: goto label_1ae6fc;
        default: break;
    }

    ctx->pc = 0x1ae67cu;

label_1ae67c:
    // 0x1ae67c: 0x8e8406c4  lw          $a0, 0x6C4($s4)
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1732)));
label_1ae680:
    // 0x1ae680: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae684:
    // 0x1ae684: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae688:
    // 0x1ae688: 0x320f809  jalr        $t9
label_1ae68c:
    if (ctx->pc == 0x1AE68Cu) {
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE690u;
        goto label_1ae690;
    }
    ctx->pc = 0x1AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE690u);
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE688u, 0x1AE690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0xae8007bc  sw          $zero, 0x7BC($s4)
    ctx->pc = 0x1ae690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1980), GPR_U32(ctx, 0));
label_1ae694:
    // 0x1ae694: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ae698:
    // 0x1ae698: 0xae8207c0  sw          $v0, 0x7C0($s4)
    ctx->pc = 0x1ae698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 2));
label_1ae69c:
    // 0x1ae69c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ae6a0:
    // 0x1ae6a0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ae6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae6a4:
    // 0x1ae6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6a8:
    // 0x1ae6a8: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ae6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae6ac:
    // 0x1ae6ac: 0x268407ac  addiu       $a0, $s4, 0x7AC
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1964));
label_1ae6b0:
    // 0x1ae6b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ae6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ae6b4:
    // 0x1ae6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ae6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ae6b8:
    // 0x1ae6b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae6b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae6bc:
    // 0x1ae6bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ae6bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ae6c0:
    // 0x1ae6c0: 0x0  nop
    ctx->pc = 0x1ae6c0u;
    // NOP
label_1ae6c4:
    // 0x1ae6c4: 0xae8307c4  sw          $v1, 0x7C4($s4)
    ctx->pc = 0x1ae6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1988), GPR_U32(ctx, 3));
label_1ae6c8:
    // 0x1ae6c8: 0xae8007c8  sw          $zero, 0x7C8($s4)
    ctx->pc = 0x1ae6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1992), GPR_U32(ctx, 0));
label_1ae6cc:
    // 0x1ae6cc: 0xae8207cc  sw          $v0, 0x7CC($s4)
    ctx->pc = 0x1ae6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1996), GPR_U32(ctx, 2));
label_1ae6d0:
    // 0x1ae6d0: 0xc069d00  jal         func_1A7400
label_1ae6d4:
    if (ctx->pc == 0x1AE6D4u) {
        ctx->pc = 0x1AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D0u;
        // 0x1ae6d4: 0xa28007d4  sb          $zero, 0x7D4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2004), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6D8u;
        goto label_1ae6d8;
    }
    ctx->pc = 0x1AE6D0u;
    SET_GPR_U32(ctx, 31, 0x1AE6D8u);
    ctx->pc = 0x1AE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6D0u;
    // 0x1ae6d4: 0xa28007d4  sb          $zero, 0x7D4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 2004), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AE6D0u, 0x1AE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6D8u;
label_1ae6d8:
    // 0x1ae6d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ae6dc:
    if (ctx->pc == 0x1AE6DCu) {
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6E0u;
        goto label_1ae6e0;
    }
    ctx->pc = 0x1AE6D8u;
    {
        const bool branch_taken_0x1ae6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d8) {
            ctx->pc = 0x1AE700u;
            return;
        }
    }
    ctx->pc = 0x1AE6E0u;
label_1ae6e0:
    // 0x1ae6e0: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ae6e4:
    // 0x1ae6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6e8:
    // 0x1ae6e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6ec:
    // 0x1ae6ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ae6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ae6f0:
    // 0x1ae6f0: 0xc063e08  jal         func_18F820
label_1ae6f4:
    if (ctx->pc == 0x1AE6F4u) {
        ctx->pc = 0x1AE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F0u;
        // 0x1ae6f4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6F8u;
        goto label_1ae6f8;
    }
    ctx->pc = 0x1AE6F0u;
    SET_GPR_U32(ctx, 31, 0x1AE6F8u);
    ctx->pc = 0x1AE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6F0u;
    // 0x1ae6f4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AE6F0u, 0x1AE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6F8u;
label_1ae6f8:
    // 0x1ae6f8: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_1ae6fc:
    if (ctx->pc == 0x1AE6FCu) {
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x928306b8  lbu         $v1, 0x6B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE700u;
        goto label_fallthrough_0x1ae6f8;
    }
    ctx->pc = 0x1AE6F8u;
    {
        const bool branch_taken_0x1ae6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x928306b8  lbu         $v1, 0x6B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6f8) {
            ctx->pc = 0x1AEDBCu;
            return;
        }
    }
label_fallthrough_0x1ae6f8:
    ctx->pc = 0x1AE700u;
}
