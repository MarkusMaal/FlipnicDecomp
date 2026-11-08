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

// Function: FUN_001abc90
// Address: 0x1abc90 - 0x1abe98
void FUN_001abc90_0x1abc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abc90_0x1abc90");
#endif

    switch (ctx->pc) {
        case 0x1abcc8u: goto label_1abcc8;
        case 0x1abcdcu: goto label_1abcdc;
        case 0x1abd10u: goto label_1abd10;
        case 0x1abd44u: goto label_1abd44;
        case 0x1abd54u: goto label_1abd54;
        case 0x1abd7cu: goto label_1abd7c;
        case 0x1abdbcu: goto label_1abdbc;
        case 0x1abe64u: goto label_1abe64;
        case 0x1abe74u: goto label_1abe74;
        default: break;
    }

    ctx->pc = 0x1abc90u;

    // 0x1abc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abc94: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1abc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1abc98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abc9c: 0x24a52cd0  addiu       $a1, $a1, 0x2CD0
    ctx->pc = 0x1abc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11472));
    // 0x1abca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abca4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1abca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abcac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcb0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212CD0u));
    // 0x1abcb4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1abcb4u;
    { uint32_t bits = FAST_READ32(0x212CD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abcb8: 0x24040810  addiu       $a0, $zero, 0x810
    ctx->pc = 0x1abcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x1abcbc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1abcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1abcc0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1ABCC0u;
    SET_GPR_U32(ctx, 31, 0x1ABCC8u);
    ctx->pc = 0x1ABCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCC0u;
    // 0x1abcc4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1ABCC0u, 0x1ABCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCC8u;
label_1abcc8:
    // 0x1abcc8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1ABCC8u;
    {
        const bool branch_taken_0x1abcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCC8u;
        // 0x1abccc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcc8) {
            ctx->pc = 0x1ABDC4u;
            goto label_1abdc4;
        }
    }
    ctx->pc = 0x1ABCD0u;
    // 0x1abcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcd4: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1ABCD4u;
    SET_GPR_U32(ctx, 31, 0x1ABCDCu);
    ctx->pc = 0x1ABCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCD4u;
    // 0x1abcd8: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1ABCD4u, 0x1ABCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCDCu;
label_1abcdc:
    // 0x1abcdc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abce0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1abce4: 0x2463b700  addiu       $v1, $v1, -0x4900
    ctx->pc = 0x1abce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x1abce8: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1abce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1abcec: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1abcecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1abcf0: 0x24a5bf70  addiu       $a1, $a1, -0x4090
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
    // 0x1abcf4: 0x24c6bf10  addiu       $a2, $a2, -0x40F0
    ctx->pc = 0x1abcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950672));
    // 0x1abcf8: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x1abcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1abcfc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1abcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abd00: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1abd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1abd04: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd08: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x1ABD08u;
    SET_GPR_U32(ctx, 31, 0x1ABD10u);
    ctx->pc = 0x1ABD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD08u;
    // 0x1abd0c: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x1ABD08u, 0x1ABD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD10u;
label_1abd10:
    // 0x1abd10: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd14: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1abd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1abd18: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1abd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
    // 0x1abd1c: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1abd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1abd20: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1abd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1abd24: 0xac43070c  sw          $v1, 0x70C($v0)
    ctx->pc = 0x1abd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1804), GPR_U32(ctx, 3));
    // 0x1abd28: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd2c: 0xac4006f0  sw          $zero, 0x6F0($v0)
    ctx->pc = 0x1abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1776), GPR_U32(ctx, 0));
    // 0x1abd30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd34: 0xa0400709  sb          $zero, 0x709($v0)
    ctx->pc = 0x1abd34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1801), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abd38: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd3c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1ABD3Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD44u);
    ctx->pc = 0x1ABD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD3Cu;
    // 0x1abd40: 0x24440710  addiu       $a0, $v0, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1ABD3Cu, 0x1ABD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD44u;
label_1abd44:
    // 0x1abd44: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd48: 0x245007b0  addiu       $s0, $v0, 0x7B0
    ctx->pc = 0x1abd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x1abd4c: 0xc045c98  jal         func_117260
    ctx->pc = 0x1ABD4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD54u);
    ctx->pc = 0x1ABD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD4Cu;
    // 0x1abd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1ABD4Cu, 0x1ABD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD54u;
label_1abd54:
    // 0x1abd54: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1abd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1abd58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abd5c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1abd60: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x1abd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x1abd64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1abd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1abd68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1abd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1abd6c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd70: 0x245007cc  addiu       $s0, $v0, 0x7CC
    ctx->pc = 0x1abd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1996));
    // 0x1abd74: 0xc045c98  jal         func_117260
    ctx->pc = 0x1ABD74u;
    SET_GPR_U32(ctx, 31, 0x1ABD7Cu);
    ctx->pc = 0x1ABD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD74u;
    // 0x1abd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1ABD74u, 0x1ABD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD7Cu;
label_1abd7c:
    // 0x1abd7c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1abd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1abd80: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abd84: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1abd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1abd88: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1abd8c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1abd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1abd90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abd94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1abd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1abd98: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abd9c: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x1abd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x1abda0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1abda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1abda4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abda8: 0x24620710  addiu       $v0, $v1, 0x710
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1808));
    // 0x1abdac: 0xac6207fc  sw          $v0, 0x7FC($v1)
    ctx->pc = 0x1abdacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2044), GPR_U32(ctx, 2));
    // 0x1abdb0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abdb4: 0xc062200  jal         func_188800
    ctx->pc = 0x1ABDB4u;
    SET_GPR_U32(ctx, 31, 0x1ABDBCu);
    ctx->pc = 0x1ABDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDB4u;
    // 0x1abdb8: 0x24440710  addiu       $a0, $v0, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1ABDB4u, 0x1ABDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDBCu;
label_1abdbc:
    // 0x1abdbc: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1abdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1abdc0: 0x0  nop
    ctx->pc = 0x1abdc0u;
    // NOP
label_1abdc4:
    // 0x1abdc4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ABDC4u;
    {
        const bool branch_taken_0x1abdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abdc4) {
            ctx->pc = 0x1ABE7Cu;
            goto label_1abe7c;
        }
    }
    ctx->pc = 0x1ABDCCu;
    // 0x1abdcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abdd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1abdd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1abdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abdd8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abde0: 0x24a5e150  addiu       $a1, $a1, -0x1EB0
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959440));
    // 0x1abde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1abde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abde8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abdec: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1abdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1abdf0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abdf4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1abdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abdf8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1abdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1abdfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1abdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1abe00: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1abe04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abe08: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1abe0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1abe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1abe10: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1abe10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1abe14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abe18: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abe1c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1abe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1abe20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1abe24: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1abe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1abe28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abe2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1abe2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1abe30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1abe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1abe34: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1abe34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1abe38: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abe3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1abe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abe40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1abe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1abe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abe4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1abe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1abe50: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1abe50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1abe54: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1abe54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1abe58: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1abe58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1abe5c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1ABE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE64u);
    ctx->pc = 0x1ABE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE5Cu;
    // 0x1abe60: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1ABE5Cu, 0x1ABE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE64u;
label_1abe64:
    // 0x1abe64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1abe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe6c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1ABE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE74u);
    ctx->pc = 0x1ABE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE6Cu;
    // 0x1abe70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1ABE6Cu, 0x1ABE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE74u;
label_1abe74:
    // 0x1abe74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABE74u;
    {
        const bool branch_taken_0x1abe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE74u;
        // 0x1abe78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe74) {
            ctx->pc = 0x1ABE84u;
            goto label_1abe84;
        }
    }
    ctx->pc = 0x1ABE7Cu;
label_1abe7c:
    // 0x1abe7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1abe7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abe80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abe84:
    // 0x1abe84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abe88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abe88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abe8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE90u;
        // 0x1abe94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE98u;
}
