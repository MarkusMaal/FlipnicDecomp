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

// Function: entry_001c528c
// Address: 0x1c528c - 0x1c5344
void entry_001c528c_0x1c528c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c528c_0x1c528c");
#endif

    switch (ctx->pc) {
        case 0x1c52a8u: goto label_1c52a8;
        case 0x1c52c8u: goto label_1c52c8;
        case 0x1c52e8u: goto label_1c52e8;
        case 0x1c530cu: goto label_1c530c;
        case 0x1c531cu: goto label_1c531c;
        case 0x1c532cu: goto label_1c532c;
        case 0x1c533cu: goto label_1c533c;
        default: break;
    }

    ctx->pc = 0x1c528cu;

    // 0x1c528c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c528cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5294: 0x8c22f7e8  lw          $v0, -0x818($at)
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7E8u));
    // 0x1c5298: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c5298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c529c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c529cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C52A0u;
    SET_GPR_U32(ctx, 31, 0x1C52A8u);
    ctx->pc = 0x1C52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52A0u;
    // 0x1c52a4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C52A0u, 0x1C52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A8u;
label_1c52a8:
    // 0x1c52a8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c52a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c52ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c52acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c52b0: 0x8c22f7f0  lw          $v0, -0x810($at)
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7F0u));
    // 0x1c52b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c52bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c52bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C52C0u;
    SET_GPR_U32(ctx, 31, 0x1C52C8u);
    ctx->pc = 0x1C52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C0u;
    // 0x1c52c4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C52C0u, 0x1C52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C8u;
label_1c52c8:
    // 0x1c52c8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c52c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c52cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c52ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c52d0: 0x8c22f7f8  lw          $v0, -0x808($at)
    ctx->pc = 0x1c52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7F8u));
    // 0x1c52d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c52dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c52dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C52E0u;
    SET_GPR_U32(ctx, 31, 0x1C52E8u);
    ctx->pc = 0x1C52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E0u;
    // 0x1c52e4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C52E0u, 0x1C52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E8u;
label_1c52e8:
    // 0x1c52e8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c52e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c52ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c52ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c52f0: 0x8c22f7f8  lw          $v0, -0x808($at)
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7F8u));
    // 0x1c52f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C52F4u;
    {
        const bool branch_taken_0x1c52f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52F4u;
        // 0x1c52f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52f4) {
            ctx->pc = 0x1C5344u;
            return;
        }
    }
    ctx->pc = 0x1C52FCu;
    // 0x1c52fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5300: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5304: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5304u;
    SET_GPR_U32(ctx, 31, 0x1C530Cu);
    ctx->pc = 0x1C5308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5304u;
    // 0x1c5308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5304u, 0x1C530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C530Cu;
label_1c530c:
    // 0x1c530c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c530cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5314: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5314u;
    SET_GPR_U32(ctx, 31, 0x1C531Cu);
    ctx->pc = 0x1C5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5314u;
    // 0x1c5318: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5314u, 0x1C531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C531Cu;
label_1c531c:
    // 0x1c531c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5324: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5324u;
    SET_GPR_U32(ctx, 31, 0x1C532Cu);
    ctx->pc = 0x1C5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5324u;
    // 0x1c5328: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5324u, 0x1C532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C532Cu;
label_1c532c:
    // 0x1c532c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c532cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5334: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5334u;
    SET_GPR_U32(ctx, 31, 0x1C533Cu);
    ctx->pc = 0x1C5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5334u;
    // 0x1c5338: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5334u, 0x1C533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C533Cu;
label_1c533c:
    // 0x1c533c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C533Cu;
    {
        const bool branch_taken_0x1c533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C533Cu;
        // 0x1c5340: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c533c) {
            ctx->pc = 0x1C5384u;
            return;
        }
    }
    ctx->pc = 0x1C5344u;
}
