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

// Function: FUN_00170480
// Address: 0x170480 - 0x17055c
void FUN_00170480_0x170480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170480_0x170480");
#endif

    switch (ctx->pc) {
        case 0x170480u: goto label_170480;
        case 0x170484u: goto label_170484;
        case 0x170488u: goto label_170488;
        case 0x17048cu: goto label_17048c;
        case 0x170490u: goto label_170490;
        case 0x170494u: goto label_170494;
        case 0x170498u: goto label_170498;
        case 0x17049cu: goto label_17049c;
        case 0x1704a0u: goto label_1704a0;
        case 0x1704a4u: goto label_1704a4;
        case 0x1704a8u: goto label_1704a8;
        case 0x1704acu: goto label_1704ac;
        case 0x1704b0u: goto label_1704b0;
        case 0x1704b4u: goto label_1704b4;
        case 0x1704b8u: goto label_1704b8;
        case 0x1704bcu: goto label_1704bc;
        case 0x1704c0u: goto label_1704c0;
        case 0x1704c4u: goto label_1704c4;
        case 0x1704c8u: goto label_1704c8;
        case 0x1704ccu: goto label_1704cc;
        case 0x1704d0u: goto label_1704d0;
        case 0x1704d4u: goto label_1704d4;
        case 0x1704d8u: goto label_1704d8;
        case 0x1704dcu: goto label_1704dc;
        case 0x1704e0u: goto label_1704e0;
        case 0x1704e4u: goto label_1704e4;
        case 0x1704e8u: goto label_1704e8;
        case 0x1704ecu: goto label_1704ec;
        case 0x1704f0u: goto label_1704f0;
        case 0x1704f4u: goto label_1704f4;
        case 0x1704f8u: goto label_1704f8;
        case 0x1704fcu: goto label_1704fc;
        case 0x170500u: goto label_170500;
        case 0x170504u: goto label_170504;
        case 0x170508u: goto label_170508;
        case 0x17050cu: goto label_17050c;
        case 0x170510u: goto label_170510;
        case 0x170514u: goto label_170514;
        case 0x170518u: goto label_170518;
        case 0x17051cu: goto label_17051c;
        case 0x170520u: goto label_170520;
        case 0x170524u: goto label_170524;
        case 0x170528u: goto label_170528;
        case 0x17052cu: goto label_17052c;
        case 0x170530u: goto label_170530;
        case 0x170534u: goto label_170534;
        case 0x170538u: goto label_170538;
        case 0x17053cu: goto label_17053c;
        case 0x170540u: goto label_170540;
        case 0x170544u: goto label_170544;
        case 0x170548u: goto label_170548;
        case 0x17054cu: goto label_17054c;
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        default: break;
    }

    ctx->pc = 0x170480u;

label_170480:
    // 0x170480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_170484:
    // 0x170484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170488:
    // 0x170488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17048c:
    // 0x17048c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17048cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170490:
    // 0x170490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170494:
    // 0x170494: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x170494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_170498:
    // 0x170498: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x170498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
label_17049c:
    // 0x17049c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1704a0:
    // 0x1704a0: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x1704a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
label_1704a4:
    // 0x1704a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1704a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1704a8:
    // 0x1704a8: 0xac800230  sw          $zero, 0x230($a0)
    ctx->pc = 0x1704a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
label_1704ac:
    // 0x1704ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1704acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1704b0:
    // 0x1704b0: 0xac80023c  sw          $zero, 0x23C($a0)
    ctx->pc = 0x1704b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 0));
label_1704b4:
    // 0x1704b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1704b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1704b8:
    // 0x1704b8: 0xac800240  sw          $zero, 0x240($a0)
    ctx->pc = 0x1704b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 0));
label_1704bc:
    // 0x1704bc: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x1704bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
label_1704c0:
    // 0x1704c0: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1704c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
label_1704c4:
    // 0x1704c4: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x1704c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
label_1704c8:
    // 0x1704c8: 0xac830248  sw          $v1, 0x248($a0)
    ctx->pc = 0x1704c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 3));
label_1704cc:
    // 0x1704cc: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x1704ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
label_1704d0:
    // 0x1704d0: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x1704d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
label_1704d4:
    // 0x1704d4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1704d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1704d8:
    // 0x1704d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1704d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1704dc:
    // 0x1704dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1704dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1704e0:
    // 0x1704e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1704e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1704e4:
    // 0x1704e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1704e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1704e8:
    // 0x1704e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1704e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1704ec:
    // 0x1704ec: 0xe4800254  swc1        $f0, 0x254($a0)
    ctx->pc = 0x1704ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 596), bits); }
label_1704f0:
    // 0x1704f0: 0xac800258  sw          $zero, 0x258($a0)
    ctx->pc = 0x1704f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
label_1704f4:
    // 0x1704f4: 0xa0800260  sb          $zero, 0x260($a0)
    ctx->pc = 0x1704f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 608), (uint8_t)GPR_U32(ctx, 0));
label_1704f8:
    // 0x1704f8: 0xa0800261  sb          $zero, 0x261($a0)
    ctx->pc = 0x1704f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 609), (uint8_t)GPR_U32(ctx, 0));
label_1704fc:
    // 0x1704fc: 0xa0800262  sb          $zero, 0x262($a0)
    ctx->pc = 0x1704fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 610), (uint8_t)GPR_U32(ctx, 0));
label_170500:
    // 0x170500: 0xa0820263  sb          $v0, 0x263($a0)
    ctx->pc = 0x170500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 611), (uint8_t)GPR_U32(ctx, 2));
label_170504:
    // 0x170504: 0xa0800264  sb          $zero, 0x264($a0)
    ctx->pc = 0x170504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 612), (uint8_t)GPR_U32(ctx, 0));
label_170508:
    // 0x170508: 0xa0800265  sb          $zero, 0x265($a0)
    ctx->pc = 0x170508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 613), (uint8_t)GPR_U32(ctx, 0));
label_17050c:
    // 0x17050c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_170510:
    // 0x170510: 0xac402798  sw          $zero, 0x2798($v0)
    ctx->pc = 0x170510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10136), GPR_U32(ctx, 0));
label_170514:
    // 0x170514: 0xac800268  sw          $zero, 0x268($a0)
    ctx->pc = 0x170514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
label_170518:
    // 0x170518: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_17051c:
    // 0x17051c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_170520:
    // 0x170520: 0x8c4202fc  lw          $v0, 0x2FC($v0)
    ctx->pc = 0x170520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
label_170524:
    // 0x170524: 0xac82026c  sw          $v0, 0x26C($a0)
    ctx->pc = 0x170524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
label_170528:
    // 0x170528: 0x8c82026c  lw          $v0, 0x26C($a0)
    ctx->pc = 0x170528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
label_17052c:
    // 0x17052c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x17052cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_170530:
    // 0x170530: 0xc05c26c  jal         func_1709B0
label_170534:
    if (ctx->pc == 0x170534u) {
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170530u;
        // 0x170534: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170538u;
        goto label_170538;
    }
    ctx->pc = 0x170530u;
    SET_GPR_U32(ctx, 31, 0x170538u);
    ctx->pc = 0x170534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170530u;
    // 0x170534: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1709B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1709B0u, 0x170530u, 0x170538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170538u;
label_170538:
    // 0x170538: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17053c:
    // 0x17053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170540:
    // 0x170540: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170544:
    // 0x170544: 0x320f809  jalr        $t9
label_170548:
    if (ctx->pc == 0x170548u) {
        ctx->pc = 0x170548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170544u;
        // 0x170548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17054Cu;
        goto label_17054c;
    }
    ctx->pc = 0x170544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17054Cu);
        ctx->pc = 0x170548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170544u;
        // 0x170548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170544u, 0x17054Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17054Cu;
label_17054c:
    // 0x17054c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170550:
    // 0x170550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_170554:
    // 0x170554: 0x3e00008  jr          $ra
label_170558:
    if (ctx->pc == 0x170558u) {
        ctx->pc = 0x170558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170554u;
        // 0x170558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17055Cu;
        goto label_fallthrough_0x170554;
    }
    ctx->pc = 0x170554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170554u;
        // 0x170558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170554:
    ctx->pc = 0x17055Cu;
}
