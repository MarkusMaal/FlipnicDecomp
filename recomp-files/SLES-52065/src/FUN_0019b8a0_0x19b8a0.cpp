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

// Function: FUN_0019b8a0
// Address: 0x19b8a0 - 0x19baa4
void FUN_0019b8a0_0x19b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b8a0_0x19b8a0");
#endif

    switch (ctx->pc) {
        case 0x19b8d8u: goto label_19b8d8;
        case 0x19b8ecu: goto label_19b8ec;
        case 0x19b910u: goto label_19b910;
        case 0x19b924u: goto label_19b924;
        case 0x19b974u: goto label_19b974;
        case 0x19b994u: goto label_19b994;
        case 0x19b9c8u: goto label_19b9c8;
        case 0x19ba70u: goto label_19ba70;
        case 0x19ba80u: goto label_19ba80;
        default: break;
    }

    ctx->pc = 0x19b8a0u;

    // 0x19b8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b8a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19b8a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b8ac: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x19b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    // 0x19b8b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b8b4: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x19b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x19b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8c0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19b8c0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A40u));
    // 0x19b8c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19b8c4u;
    { uint32_t bits = FAST_READ32(0x212A48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b8c8: 0x24040be0  addiu       $a0, $zero, 0xBE0
    ctx->pc = 0x19b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3040));
    // 0x19b8cc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19b8d0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19B8D0u;
    SET_GPR_U32(ctx, 31, 0x19B8D8u);
    ctx->pc = 0x19B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8D0u;
    // 0x19b8d4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19B8D0u, 0x19B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8D8u;
label_19b8d8:
    // 0x19b8d8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x19B8D8u;
    {
        const bool branch_taken_0x19b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8D8u;
        // 0x19b8dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8d8) {
            ctx->pc = 0x19B9D0u;
            goto label_19b9d0;
        }
    }
    ctx->pc = 0x19B8E0u;
    // 0x19b8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8e4: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19B8E4u;
    SET_GPR_U32(ctx, 31, 0x19B8ECu);
    ctx->pc = 0x19B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8E4u;
    // 0x19b8e8: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19B8E4u, 0x19B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8ECu;
label_19b8ec:
    // 0x19b8ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b8f0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x19b8f4: 0x2463b2f0  addiu       $v1, $v1, -0x4D10
    ctx->pc = 0x19b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947568));
    // 0x19b8f8: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x19b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x19b8fc: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x19b900: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x19b900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x19b904: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b908: 0xc0621c0  jal         func_188700
    ctx->pc = 0x19B908u;
    SET_GPR_U32(ctx, 31, 0x19B910u);
    ctx->pc = 0x19B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B908u;
    // 0x19b90c: 0x24440940  addiu       $a0, $v0, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x19B908u, 0x19B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B910u;
label_19b910:
    // 0x19b910: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b914: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x19b918: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x19b91c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x19B91Cu;
    SET_GPR_U32(ctx, 31, 0x19B924u);
    ctx->pc = 0x19B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B91Cu;
    // 0x19b920: 0x244409e0  addiu       $a0, $v0, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x19B91Cu, 0x19B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B924u;
label_19b924:
    // 0x19b924: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b928: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x19b928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x19b92c: 0x2484b4d0  addiu       $a0, $a0, -0x4B30
    ctx->pc = 0x19b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948048));
    // 0x19b930: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x19b934: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
    // 0x19b938: 0xac440a9c  sw          $a0, 0xA9C($v0)
    ctx->pc = 0x19b938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2716), GPR_U32(ctx, 4));
    // 0x19b93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b940: 0xac400a80  sw          $zero, 0xA80($v0)
    ctx->pc = 0x19b940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2688), GPR_U32(ctx, 0));
    // 0x19b944: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b948: 0xa0400a99  sb          $zero, 0xA99($v0)
    ctx->pc = 0x19b948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2713), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b94c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b950: 0xac430ab0  sw          $v1, 0xAB0($v0)
    ctx->pc = 0x19b950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2736), GPR_U32(ctx, 3));
    // 0x19b954: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b958: 0xac400aa0  sw          $zero, 0xAA0($v0)
    ctx->pc = 0x19b958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2720), GPR_U32(ctx, 0));
    // 0x19b95c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b960: 0x24420ac0  addiu       $v0, $v0, 0xAC0
    ctx->pc = 0x19b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
    // 0x19b964: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x19b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x19b968: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x19b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b96c: 0xc0667ac  jal         func_199EB0
    ctx->pc = 0x19B96Cu;
    SET_GPR_U32(ctx, 31, 0x19B974u);
    ctx->pc = 0x19B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B96Cu;
    // 0x19b970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EB0u, 0x19B96Cu, 0x19B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B974u;
label_19b974:
    // 0x19b974: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19b978: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x19b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x19b97c: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x19b980: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x19b984: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x19b984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x19b988: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x19b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b98c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x19B98Cu;
    SET_GPR_U32(ctx, 31, 0x19B994u);
    ctx->pc = 0x19B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B98Cu;
    // 0x19b990: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x19B98Cu, 0x19B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B994u;
label_19b994:
    // 0x19b994: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b998: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9a0: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x19b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x19b9a4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b9a8: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x19b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x19b9ac: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b9b0: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x19b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x19b9b4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x19b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19b9b8: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x19b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x19b9bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b9c0: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19B9C0u;
    SET_GPR_U32(ctx, 31, 0x19B9C8u);
    ctx->pc = 0x19B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9C0u;
    // 0x19b9c4: 0x244409e0  addiu       $a0, $v0, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19B9C0u, 0x19B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9C8u;
label_19b9c8:
    // 0x19b9c8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x19b9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b9cc: 0x0  nop
    ctx->pc = 0x19b9ccu;
    // NOP
label_19b9d0:
    // 0x19b9d0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19B9D0u;
    {
        const bool branch_taken_0x19b9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9d0) {
            ctx->pc = 0x19BA88u;
            goto label_19ba88;
        }
    }
    ctx->pc = 0x19B9D8u;
    // 0x19b9d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b9dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19b9e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b9e4: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x19b9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9ec: 0x24a5daa0  addiu       $a1, $a1, -0x2560
    ctx->pc = 0x19b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957728));
    // 0x19b9f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b9f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19b9f8: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19b9fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba00: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ba04: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19ba08: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ba0c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19ba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19ba10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ba14: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19ba18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ba1c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19ba20: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba24: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ba28: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19ba2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ba30: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19ba34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ba38: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19ba3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ba40: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19ba44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba48: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ba4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ba54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19ba58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19ba5c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19ba5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19ba60: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19ba60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19ba64: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19ba68: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19BA68u;
    SET_GPR_U32(ctx, 31, 0x19BA70u);
    ctx->pc = 0x19BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA68u;
    // 0x19ba6c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19BA68u, 0x19BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA70u;
label_19ba70:
    // 0x19ba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba78: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19BA78u;
    SET_GPR_U32(ctx, 31, 0x19BA80u);
    ctx->pc = 0x19BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA78u;
    // 0x19ba7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19BA78u, 0x19BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA80u;
label_19ba80:
    // 0x19ba80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19BA80u;
    {
        const bool branch_taken_0x19ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA80u;
        // 0x19ba84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba80) {
            ctx->pc = 0x19BA90u;
            goto label_19ba90;
        }
    }
    ctx->pc = 0x19BA88u;
label_19ba88:
    // 0x19ba88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19ba88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ba8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ba90:
    // 0x19ba90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ba94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ba94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ba98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ba98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA9Cu;
        // 0x19baa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BAA4u;
}
