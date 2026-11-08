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

// Function: FUN_001aaa50
// Address: 0x1aaa50 - 0x1aac58
void FUN_001aaa50_0x1aaa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aaa50_0x1aaa50");
#endif

    switch (ctx->pc) {
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaad0u: goto label_1aaad0;
        case 0x1aab04u: goto label_1aab04;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aac24u: goto label_1aac24;
        case 0x1aac34u: goto label_1aac34;
        default: break;
    }

    ctx->pc = 0x1aaa50u;

    // 0x1aaa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aaa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aaa54: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1aaa58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aaa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aaa5c: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
    // 0x1aaa60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aaa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aaa64: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aaa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aaa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aaa6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa70: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1aaa70u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212CC0u));
    // 0x1aaa74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1aaa74u;
    { uint32_t bits = FAST_READ32(0x212CC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaa78: 0x24040810  addiu       $a0, $zero, 0x810
    ctx->pc = 0x1aaa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x1aaa7c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1aaa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1aaa80: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1AAA80u;
    SET_GPR_U32(ctx, 31, 0x1AAA88u);
    ctx->pc = 0x1AAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA80u;
    // 0x1aaa84: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1AAA80u, 0x1AAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA88u;
label_1aaa88:
    // 0x1aaa88: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1AAA88u;
    {
        const bool branch_taken_0x1aaa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA88u;
        // 0x1aaa8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa88) {
            ctx->pc = 0x1AAB84u;
            goto label_1aab84;
        }
    }
    ctx->pc = 0x1AAA90u;
    // 0x1aaa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa94: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1AAA94u;
    SET_GPR_U32(ctx, 31, 0x1AAA9Cu);
    ctx->pc = 0x1AAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA94u;
    // 0x1aaa98: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1AAA94u, 0x1AAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaaa0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1aaaa4: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x1aaaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
    // 0x1aaaa8: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1aaaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1aaaac: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aaaacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1aaab0: 0x24a5ad30  addiu       $a1, $a1, -0x52D0
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946096));
    // 0x1aaab4: 0x24c6acd0  addiu       $a2, $a2, -0x5330
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946000));
    // 0x1aaab8: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x1aaab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1aaabc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1aaabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aaac0: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1aaac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1aaac4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaac8: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x1AAAC8u;
    SET_GPR_U32(ctx, 31, 0x1AAAD0u);
    ctx->pc = 0x1AAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAC8u;
    // 0x1aaacc: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x1AAAC8u, 0x1AAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAD0u;
label_1aaad0:
    // 0x1aaad0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaad4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1aaad8: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
    // 0x1aaadc: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1aaadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1aaae0: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1aaae4: 0xac43070c  sw          $v1, 0x70C($v0)
    ctx->pc = 0x1aaae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1804), GPR_U32(ctx, 3));
    // 0x1aaae8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaaec: 0xac4006f0  sw          $zero, 0x6F0($v0)
    ctx->pc = 0x1aaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1776), GPR_U32(ctx, 0));
    // 0x1aaaf0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaaf4: 0xa0400709  sb          $zero, 0x709($v0)
    ctx->pc = 0x1aaaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1801), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aaaf8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aaafc: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1AAAFCu;
    SET_GPR_U32(ctx, 31, 0x1AAB04u);
    ctx->pc = 0x1AAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAFCu;
    // 0x1aab00: 0x24440710  addiu       $a0, $v0, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1AAAFCu, 0x1AAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB04u;
label_1aab04:
    // 0x1aab04: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab08: 0x245007b0  addiu       $s0, $v0, 0x7B0
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x1aab0c: 0xc045c98  jal         func_117260
    ctx->pc = 0x1AAB0Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB14u);
    ctx->pc = 0x1AAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB0Cu;
    // 0x1aab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1AAB0Cu, 0x1AAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB14u;
label_1aab14:
    // 0x1aab14: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1aab14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1aab18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aab1c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1aab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1aab20: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x1aab24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1aab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1aab28: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1aab28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1aab2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab30: 0x245007cc  addiu       $s0, $v0, 0x7CC
    ctx->pc = 0x1aab30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1996));
    // 0x1aab34: 0xc045c98  jal         func_117260
    ctx->pc = 0x1AAB34u;
    SET_GPR_U32(ctx, 31, 0x1AAB3Cu);
    ctx->pc = 0x1AAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB34u;
    // 0x1aab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1AAB34u, 0x1AAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB3Cu;
label_1aab3c:
    // 0x1aab3c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1aab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1aab40: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aab44: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1aab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1aab48: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1aab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1aab4c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1aab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1aab50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aab54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1aab58: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab5c: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x1aab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x1aab60: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1aab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1aab64: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1aab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab68: 0x24620710  addiu       $v0, $v1, 0x710
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1808));
    // 0x1aab6c: 0xac6207fc  sw          $v0, 0x7FC($v1)
    ctx->pc = 0x1aab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2044), GPR_U32(ctx, 2));
    // 0x1aab70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1aab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab74: 0xc062200  jal         func_188800
    ctx->pc = 0x1AAB74u;
    SET_GPR_U32(ctx, 31, 0x1AAB7Cu);
    ctx->pc = 0x1AAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB74u;
    // 0x1aab78: 0x24440710  addiu       $a0, $v0, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1AAB74u, 0x1AAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB7Cu;
label_1aab7c:
    // 0x1aab7c: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1aab7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1aab80: 0x0  nop
    ctx->pc = 0x1aab80u;
    // NOP
label_1aab84:
    // 0x1aab84: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AAB84u;
    {
        const bool branch_taken_0x1aab84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab84) {
            ctx->pc = 0x1AAC3Cu;
            goto label_1aac3c;
        }
    }
    ctx->pc = 0x1AAB8Cu;
    // 0x1aab8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aab90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1aab94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aab98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aab9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaba0: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x1aaba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
    // 0x1aaba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aaba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aaba8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aaba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aabac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1aabacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1aabb0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aabb4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1aabb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aabb8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1aabbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aabc0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1aabc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1aabc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aabc8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1aabc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aabcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1aabccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aabd0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1aabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1aabd4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aabd8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1aabd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aabdc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1aabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1aabe0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aabe4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1aabe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1aabe8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aabec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1aabecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aabf0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1aabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aabf4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1aabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1aabf8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aabfc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1aabfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aac00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aac04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac08: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aac0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aac10: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1aac10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1aac14: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1aac14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1aac18: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1aac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1aac1c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1AAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC24u);
    ctx->pc = 0x1AAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC1Cu;
    // 0x1aac20: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1AAC1Cu, 0x1AAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC24u;
label_1aac24:
    // 0x1aac24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac2c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1AAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC34u);
    ctx->pc = 0x1AAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC2Cu;
    // 0x1aac30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1AAC2Cu, 0x1AAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC34u;
label_1aac34:
    // 0x1aac34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAC34u;
    {
        const bool branch_taken_0x1aac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC34u;
        // 0x1aac38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac34) {
            ctx->pc = 0x1AAC44u;
            goto label_1aac44;
        }
    }
    ctx->pc = 0x1AAC3Cu;
label_1aac3c:
    // 0x1aac3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aac3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aac40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aac44:
    // 0x1aac44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aac48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aac48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aac4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aac4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aac50: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC50u;
        // 0x1aac54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAC58u;
}
