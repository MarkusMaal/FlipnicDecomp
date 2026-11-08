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

// Function: FUN_001ae0d0
// Address: 0x1ae0d0 - 0x1ae1e4
void FUN_001ae0d0_0x1ae0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae0d0_0x1ae0d0");
#endif

    switch (ctx->pc) {
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1d0u: goto label_1ae1d0;
        default: break;
    }

    ctx->pc = 0x1ae0d0u;

    // 0x1ae0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae0dc: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1ae0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1ae0e0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1AE0E0u;
    SET_GPR_U32(ctx, 31, 0x1AE0E8u);
    ctx->pc = 0x1AE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0E0u;
    // 0x1ae0e4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1AE0E0u, 0x1AE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE0E8u;
label_1ae0e8:
    // 0x1ae0e8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae0ec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ae0f0: 0x2463b800  addiu       $v1, $v1, -0x4800
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948864));
    // 0x1ae0f4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1ae0f8: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ae0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1ae0fc: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
    // 0x1ae100: 0x24c6e260  addiu       $a2, $a2, -0x1DA0
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959712));
    // 0x1ae104: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae108: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1ae108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae10c: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1ae10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1ae110: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae114: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x1AE114u;
    SET_GPR_U32(ctx, 31, 0x1AE11Cu);
    ctx->pc = 0x1AE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE114u;
    // 0x1ae118: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x1AE114u, 0x1AE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE11Cu;
label_1ae11c:
    // 0x1ae11c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae120: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ae120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ae124: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
    // 0x1ae128: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1ae12c: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1ae12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1ae130: 0xac4306ec  sw          $v1, 0x6EC($v0)
    ctx->pc = 0x1ae130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1772), GPR_U32(ctx, 3));
    // 0x1ae134: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae138: 0xac4006d0  sw          $zero, 0x6D0($v0)
    ctx->pc = 0x1ae138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1744), GPR_U32(ctx, 0));
    // 0x1ae13c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae140: 0xa04006e9  sb          $zero, 0x6E9($v0)
    ctx->pc = 0x1ae140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1769), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae144: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae148: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1AE148u;
    SET_GPR_U32(ctx, 31, 0x1AE150u);
    ctx->pc = 0x1AE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE148u;
    // 0x1ae14c: 0x244406f0  addiu       $a0, $v0, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1AE148u, 0x1AE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE150u;
label_1ae150:
    // 0x1ae150: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae154: 0x24500790  addiu       $s0, $v0, 0x790
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1ae158: 0xc045c98  jal         func_117260
    ctx->pc = 0x1AE158u;
    SET_GPR_U32(ctx, 31, 0x1AE160u);
    ctx->pc = 0x1AE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE158u;
    // 0x1ae15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1AE158u, 0x1AE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE160u;
label_1ae160:
    // 0x1ae160: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ae164: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae168: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1ae16c: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
    // 0x1ae170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ae170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ae174: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ae174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ae178: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae17c: 0x245007ac  addiu       $s0, $v0, 0x7AC
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1964));
    // 0x1ae180: 0xc045c98  jal         func_117260
    ctx->pc = 0x1AE180u;
    SET_GPR_U32(ctx, 31, 0x1AE188u);
    ctx->pc = 0x1AE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE180u;
    // 0x1ae184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1AE180u, 0x1AE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE188u;
label_1ae188:
    // 0x1ae188: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ae18c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae190: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1ae190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1ae194: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1ae198: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ae198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ae19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae1a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ae1a4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae1a8: 0x244206f0  addiu       $v0, $v0, 0x6F0
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    // 0x1ae1ac: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1ae1b0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae1b4: 0x246206f0  addiu       $v0, $v1, 0x6F0
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1ae1b8: 0xc04c9a0  jal         func_132680
    ctx->pc = 0x1AE1B8u;
    SET_GPR_U32(ctx, 31, 0x1AE1C0u);
    ctx->pc = 0x1AE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1B8u;
    // 0x1ae1bc: 0xac6207dc  sw          $v0, 0x7DC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132680u, 0x1AE1B8u, 0x1AE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1C0u;
label_1ae1c0:
    // 0x1ae1c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae1c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae1c8: 0xc062200  jal         func_188800
    ctx->pc = 0x1AE1C8u;
    SET_GPR_U32(ctx, 31, 0x1AE1D0u);
    ctx->pc = 0x1AE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1C8u;
    // 0x1ae1cc: 0x244406f0  addiu       $a0, $v0, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1AE1C8u, 0x1AE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1D0u;
label_1ae1d0:
    // 0x1ae1d0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ae1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1E4u;
}
