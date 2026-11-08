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

// Function: FUN_001ace50
// Address: 0x1ace50 - 0x1ad058
void FUN_001ace50_0x1ace50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ace50_0x1ace50");
#endif

    switch (ctx->pc) {
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1aced0u: goto label_1aced0;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad034u: goto label_1ad034;
        default: break;
    }

    ctx->pc = 0x1ace50u;

    // 0x1ace50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ace50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ace54: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ace54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ace58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ace58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ace5c: 0x24a52ce0  addiu       $a1, $a1, 0x2CE0
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11488));
    // 0x1ace60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ace60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ace64: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1ace64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ace68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ace68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ace6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ace6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace70: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1ace70u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212CE0u));
    // 0x1ace74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1ace74u;
    { uint32_t bits = FAST_READ32(0x212CE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ace78: 0x24040810  addiu       $a0, $zero, 0x810
    ctx->pc = 0x1ace78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x1ace7c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1ace7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1ace80: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1ACE80u;
    SET_GPR_U32(ctx, 31, 0x1ACE88u);
    ctx->pc = 0x1ACE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE80u;
    // 0x1ace84: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1ACE80u, 0x1ACE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE88u;
label_1ace88:
    // 0x1ace88: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1ACE88u;
    {
        const bool branch_taken_0x1ace88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE88u;
        // 0x1ace8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace88) {
            ctx->pc = 0x1ACF84u;
            goto label_1acf84;
        }
    }
    ctx->pc = 0x1ACE90u;
    // 0x1ace90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ace90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace94: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1ACE94u;
    SET_GPR_U32(ctx, 31, 0x1ACE9Cu);
    ctx->pc = 0x1ACE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE94u;
    // 0x1ace98: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1ACE94u, 0x1ACE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE9Cu;
label_1ace9c:
    // 0x1ace9c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acea0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1acea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1acea4: 0x2463b780  addiu       $v1, $v1, -0x4880
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948736));
    // 0x1acea8: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1aceac: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1aceb0: 0x24a5d120  addiu       $a1, $a1, -0x2EE0
    ctx->pc = 0x1aceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955296));
    // 0x1aceb4: 0x24c6d0d0  addiu       $a2, $a2, -0x2F30
    ctx->pc = 0x1aceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955216));
    // 0x1aceb8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1acebc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acec0: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1acec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1acec4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acec8: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x1ACEC8u;
    SET_GPR_U32(ctx, 31, 0x1ACED0u);
    ctx->pc = 0x1ACECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEC8u;
    // 0x1acecc: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x1ACEC8u, 0x1ACED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACED0u;
label_1aced0:
    // 0x1aced0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aced4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1aced4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1aced8: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1aced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
    // 0x1acedc: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1acee0: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1acee4: 0xac4306f8  sw          $v1, 0x6F8($v0)
    ctx->pc = 0x1acee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1784), GPR_U32(ctx, 3));
    // 0x1acee8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aceec: 0xac4006dc  sw          $zero, 0x6DC($v0)
    ctx->pc = 0x1aceecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    // 0x1acef0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acef4: 0xa04006f5  sb          $zero, 0x6F5($v0)
    ctx->pc = 0x1acef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1781), (uint8_t)GPR_U32(ctx, 0));
    // 0x1acef8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acefc: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1ACEFCu;
    SET_GPR_U32(ctx, 31, 0x1ACF04u);
    ctx->pc = 0x1ACF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEFCu;
    // 0x1acf00: 0x24440700  addiu       $a0, $v0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1ACEFCu, 0x1ACF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF04u;
label_1acf04:
    // 0x1acf04: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf08: 0x245007a0  addiu       $s0, $v0, 0x7A0
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
    // 0x1acf0c: 0xc045c98  jal         func_117260
    ctx->pc = 0x1ACF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF14u);
    ctx->pc = 0x1ACF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF0Cu;
    // 0x1acf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1ACF0Cu, 0x1ACF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF14u;
label_1acf14:
    // 0x1acf14: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1acf18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acf1c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1acf20: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x1acf24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1acf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1acf28: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1acf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1acf2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf30: 0x245007bc  addiu       $s0, $v0, 0x7BC
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1980));
    // 0x1acf34: 0xc045c98  jal         func_117260
    ctx->pc = 0x1ACF34u;
    SET_GPR_U32(ctx, 31, 0x1ACF3Cu);
    ctx->pc = 0x1ACF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF34u;
    // 0x1acf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1ACF34u, 0x1ACF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF3Cu;
label_1acf3c:
    // 0x1acf3c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1acf40: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acf44: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1acf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1acf48: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1acf4c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1acf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1acf50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acf54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1acf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1acf58: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf5c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1acf60: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1acf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1acf64: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1acf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf68: 0x24620700  addiu       $v0, $v1, 0x700
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1acf6c: 0xac6207ec  sw          $v0, 0x7EC($v1)
    ctx->pc = 0x1acf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2028), GPR_U32(ctx, 2));
    // 0x1acf70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf74: 0xc062200  jal         func_188800
    ctx->pc = 0x1ACF74u;
    SET_GPR_U32(ctx, 31, 0x1ACF7Cu);
    ctx->pc = 0x1ACF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF74u;
    // 0x1acf78: 0x24440700  addiu       $a0, $v0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1ACF74u, 0x1ACF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF7Cu;
label_1acf7c:
    // 0x1acf7c: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1acf80: 0x0  nop
    ctx->pc = 0x1acf80u;
    // NOP
label_1acf84:
    // 0x1acf84: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ACF84u;
    {
        const bool branch_taken_0x1acf84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acf84) {
            ctx->pc = 0x1AD03Cu;
            goto label_1ad03c;
        }
    }
    ctx->pc = 0x1ACF8Cu;
    // 0x1acf8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acf90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1acf94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acf98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1acf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfa0: 0x24a5e190  addiu       $a1, $a1, -0x1E70
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959504));
    // 0x1acfa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1acfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1acfb0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acfb4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1acfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfb8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1acfbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1acfc0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1acfc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfc8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1acfcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1acfd0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1acfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1acfd4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acfd8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfdc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1acfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1acfe0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1acfe4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1acfe8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1acff0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1acff4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1acff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1acff8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acffc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1acffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad000: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ad000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad004: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ad004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad008: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ad00c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad010: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1ad010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1ad014: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1ad014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1ad018: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1ad018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1ad01c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1AD01Cu;
    SET_GPR_U32(ctx, 31, 0x1AD024u);
    ctx->pc = 0x1AD020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD01Cu;
    // 0x1ad020: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1AD01Cu, 0x1AD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD024u;
label_1ad024:
    // 0x1ad024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad02c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1AD02Cu;
    SET_GPR_U32(ctx, 31, 0x1AD034u);
    ctx->pc = 0x1AD030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD02Cu;
    // 0x1ad030: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1AD02Cu, 0x1AD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD034u;
    {
        const bool branch_taken_0x1ad034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD034u;
        // 0x1ad038: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad034) {
            ctx->pc = 0x1AD044u;
            goto label_1ad044;
        }
    }
    ctx->pc = 0x1AD03Cu;
label_1ad03c:
    // 0x1ad03c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ad03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ad040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad044:
    // 0x1ad044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad04c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad050: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD050u;
        // 0x1ad054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD058u;
}
