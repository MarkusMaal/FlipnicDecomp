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

// Function: entry_001c50c8
// Address: 0x1c50c8 - 0x1c5240
void entry_001c50c8_0x1c50c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c50c8_0x1c50c8");
#endif

    switch (ctx->pc) {
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c5114u: goto label_1c5114;
        case 0x1c5128u: goto label_1c5128;
        case 0x1c5138u: goto label_1c5138;
        case 0x1c5148u: goto label_1c5148;
        case 0x1c5158u: goto label_1c5158;
        case 0x1c5168u: goto label_1c5168;
        case 0x1c5178u: goto label_1c5178;
        case 0x1c5188u: goto label_1c5188;
        case 0x1c519cu: goto label_1c519c;
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51c4u: goto label_1c51c4;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5224u: goto label_1c5224;
        case 0x1c5238u: goto label_1c5238;
        default: break;
    }

    ctx->pc = 0x1c50c8u;

    // 0x1c50c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c50d0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C50D0u;
    SET_GPR_U32(ctx, 31, 0x1C50D8u);
    ctx->pc = 0x1C50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D0u;
    // 0x1c50d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C50D0u, 0x1C50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D8u;
label_1c50d8:
    // 0x1c50d8: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c50d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c50dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c50e0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1c50e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c50e4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C50E4u;
    {
        const bool branch_taken_0x1c50e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50E4u;
        // 0x1c50e8: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50e4) {
            ctx->pc = 0x1C5080u;
            return;
        }
    }
    ctx->pc = 0x1C50ECu;
    // 0x1c50ec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1c50f0: 0xc04c258  jal         func_130960
    ctx->pc = 0x1C50F0u;
    SET_GPR_U32(ctx, 31, 0x1C50F8u);
    ctx->pc = 0x1C50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50F0u;
    // 0x1c50f4: 0x24841ef8  addiu       $a0, $a0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130960u, 0x1C50F0u, 0x1C50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50F8u;
label_1c50f8:
    // 0x1c50f8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1c50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1c50fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5100: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c5100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c5104: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c5108: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c510c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C510Cu;
    SET_GPR_U32(ctx, 31, 0x1C5114u);
    ctx->pc = 0x1C5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C510Cu;
    // 0x1c5110: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C510Cu, 0x1C5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5114u;
label_1c5114:
    // 0x1c5114: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c5114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c5118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c511c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5120: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5120u;
    SET_GPR_U32(ctx, 31, 0x1C5128u);
    ctx->pc = 0x1C5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5120u;
    // 0x1c5124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5120u, 0x1C5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5128u;
label_1c5128:
    // 0x1c5128: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c512c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5130: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5130u;
    SET_GPR_U32(ctx, 31, 0x1C5138u);
    ctx->pc = 0x1C5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5130u;
    // 0x1c5134: 0x24a55480  addiu       $a1, $a1, 0x5480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5130u, 0x1C5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5138u;
label_1c5138:
    // 0x1c5138: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c513c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5140: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5140u;
    SET_GPR_U32(ctx, 31, 0x1C5148u);
    ctx->pc = 0x1C5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5140u;
    // 0x1c5144: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5140u, 0x1C5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5148u;
label_1c5148:
    // 0x1c5148: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c514c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5150: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5150u;
    SET_GPR_U32(ctx, 31, 0x1C5158u);
    ctx->pc = 0x1C5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5150u;
    // 0x1c5154: 0x24a55480  addiu       $a1, $a1, 0x5480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5150u, 0x1C5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5158u;
label_1c5158:
    // 0x1c5158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5160: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5160u;
    SET_GPR_U32(ctx, 31, 0x1C5168u);
    ctx->pc = 0x1C5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5160u;
    // 0x1c5164: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5160u, 0x1C5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5168u;
label_1c5168:
    // 0x1c5168: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c516c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5170: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5170u;
    SET_GPR_U32(ctx, 31, 0x1C5178u);
    ctx->pc = 0x1C5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5170u;
    // 0x1c5174: 0x24a55480  addiu       $a1, $a1, 0x5480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5170u, 0x1C5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5178u;
label_1c5178:
    // 0x1c5178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5180: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5180u;
    SET_GPR_U32(ctx, 31, 0x1C5188u);
    ctx->pc = 0x1C5184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5180u;
    // 0x1c5184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5180u, 0x1C5188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5188u;
label_1c5188:
    // 0x1c5188: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c518c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5190: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c5194: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5194u;
    SET_GPR_U32(ctx, 31, 0x1C519Cu);
    ctx->pc = 0x1C5198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5194u;
    // 0x1c5198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5194u, 0x1C519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519Cu;
label_1c519c:
    // 0x1c519c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c519cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c51a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c51a8: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C51A8u;
    SET_GPR_U32(ctx, 31, 0x1C51B0u);
    ctx->pc = 0x1C51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A8u;
    // 0x1c51ac: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C51A8u, 0x1C51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B0u;
label_1c51b0:
    // 0x1c51b0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c51b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b8: 0x24a55490  addiu       $a1, $a1, 0x5490
    ctx->pc = 0x1c51b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21648));
    // 0x1c51bc: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C51BCu;
    SET_GPR_U32(ctx, 31, 0x1C51C4u);
    ctx->pc = 0x1C51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51BCu;
    // 0x1c51c0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C51BCu, 0x1C51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51C4u;
label_1c51c4:
    // 0x1c51c4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c51c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c51c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51cc: 0x24a55660  addiu       $a1, $a1, 0x5660
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22112));
    // 0x1c51d0: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C51D0u;
    SET_GPR_U32(ctx, 31, 0x1C51D8u);
    ctx->pc = 0x1C51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51D0u;
    // 0x1c51d4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C51D0u, 0x1C51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D8u;
label_1c51d8:
    // 0x1c51d8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1c51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1c51dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c51dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c51e0: 0x8c22f7e0  lw          $v0, -0x820($at)
    ctx->pc = 0x1c51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7E0u));
    // 0x1c51e4: 0x14510016  bne         $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C51E4u;
    {
        const bool branch_taken_0x1c51e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E4u;
        // 0x1c51e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e4) {
            ctx->pc = 0x1C5240u;
            return;
        }
    }
    ctx->pc = 0x1C51ECu;
    // 0x1c51ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c51f4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C51F4u;
    SET_GPR_U32(ctx, 31, 0x1C51FCu);
    ctx->pc = 0x1C51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F4u;
    // 0x1c51f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C51F4u, 0x1C51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51FCu;
label_1c51fc:
    // 0x1c51fc: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c51fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5204: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5208: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5208u;
    SET_GPR_U32(ctx, 31, 0x1C5210u);
    ctx->pc = 0x1C520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5208u;
    // 0x1c520c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5208u, 0x1C5210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5210u;
label_1c5210:
    // 0x1c5210: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5214: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c521c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C521Cu;
    SET_GPR_U32(ctx, 31, 0x1C5224u);
    ctx->pc = 0x1C5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C521Cu;
    // 0x1c5220: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C521Cu, 0x1C5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5224u;
label_1c5224:
    // 0x1c5224: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5230: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5230u;
    SET_GPR_U32(ctx, 31, 0x1C5238u);
    ctx->pc = 0x1C5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5230u;
    // 0x1c5234: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5230u, 0x1C5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5238u;
label_1c5238:
    // 0x1c5238: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5238u;
    {
        const bool branch_taken_0x1c5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5238u;
        // 0x1c523c: 0xa0400008  sb          $zero, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5238) {
            ctx->pc = 0x1C528Cu;
            return;
        }
    }
    ctx->pc = 0x1C5240u;
}
