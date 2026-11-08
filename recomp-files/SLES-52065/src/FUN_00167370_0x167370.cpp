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

// Function: FUN_00167370
// Address: 0x167370 - 0x16740c
void FUN_00167370_0x167370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167370_0x167370");
#endif

    switch (ctx->pc) {
        case 0x167384u: goto label_167384;
        default: break;
    }

    ctx->pc = 0x167370u;

    // 0x167370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16737c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16737Cu;
    SET_GPR_U32(ctx, 31, 0x167384u);
    ctx->pc = 0x167380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16737Cu;
    // 0x167380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16737Cu, 0x167384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167384u;
label_167384:
    // 0x167384: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x167384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x167388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16738c: 0xa6000222  sh          $zero, 0x222($s0)
    ctx->pc = 0x16738cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x167390: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167394: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x167394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167398: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x16739c: 0xa6000224  sh          $zero, 0x224($s0)
    ctx->pc = 0x16739cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x1673a0: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x1673a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x1673a4: 0xa205007b  sb          $a1, 0x7B($s0)
    ctx->pc = 0x1673a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x1673a8: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x1673a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1673ac: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x1673acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x1673b0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1673b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1673b4: 0x80c50022  lb          $a1, 0x22($a2)
    ctx->pc = 0x1673b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x1673b8: 0xa605022c  sh          $a1, 0x22C($s0)
    ctx->pc = 0x1673b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1673bc: 0xa600022e  sh          $zero, 0x22E($s0)
    ctx->pc = 0x1673bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 0));
    // 0x1673c0: 0x90c50024  lbu         $a1, 0x24($a2)
    ctx->pc = 0x1673c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1673c4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1673c8: 0xa6050232  sh          $a1, 0x232($s0)
    ctx->pc = 0x1673c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 5));
    // 0x1673cc: 0xa6040234  sh          $a0, 0x234($s0)
    ctx->pc = 0x1673ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 4));
    // 0x1673d0: 0x90c40023  lbu         $a0, 0x23($a2)
    ctx->pc = 0x1673d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 35)));
    // 0x1673d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1673d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1673d8: 0xa6040230  sh          $a0, 0x230($s0)
    ctx->pc = 0x1673d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 4));
    // 0x1673dc: 0x86040230  lh          $a0, 0x230($s0)
    ctx->pc = 0x1673dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1673e0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1673E0u;
    {
        const bool branch_taken_0x1673e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1673E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673E0u;
        // 0x1673e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673e0) {
            ctx->pc = 0x1673F4u;
            goto label_1673f4;
        }
    }
    ctx->pc = 0x1673E8u;
    // 0x1673e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1673e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1673ec: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1673ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1673f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1673f4:
    // 0x1673f4: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x1673f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x1673f8: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x1673f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x1673fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1673fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167404: 0x3e00008  jr          $ra
    ctx->pc = 0x167404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16740Cu;
}
