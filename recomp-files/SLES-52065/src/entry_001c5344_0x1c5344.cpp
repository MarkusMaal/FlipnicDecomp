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

// Function: entry_001c5344
// Address: 0x1c5344 - 0x1c5384
void entry_001c5344_0x1c5344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5344_0x1c5344");
#endif

    switch (ctx->pc) {
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5360u: goto label_1c5360;
        case 0x1c5370u: goto label_1c5370;
        case 0x1c5380u: goto label_1c5380;
        default: break;
    }

    ctx->pc = 0x1c5344u;

    // 0x1c5344: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5348: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5348u;
    SET_GPR_U32(ctx, 31, 0x1C5350u);
    ctx->pc = 0x1C534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5348u;
    // 0x1c534c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5348u, 0x1C5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5350u;
label_1c5350:
    // 0x1c5350: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5358: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5358u;
    SET_GPR_U32(ctx, 31, 0x1C5360u);
    ctx->pc = 0x1C535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5358u;
    // 0x1c535c: 0x24a55470  addiu       $a1, $a1, 0x5470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5358u, 0x1C5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5360u;
label_1c5360:
    // 0x1c5360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5364: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5368: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5368u;
    SET_GPR_U32(ctx, 31, 0x1C5370u);
    ctx->pc = 0x1C536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5368u;
    // 0x1c536c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5368u, 0x1C5370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5370u;
label_1c5370:
    // 0x1c5370: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5378: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5378u;
    SET_GPR_U32(ctx, 31, 0x1C5380u);
    ctx->pc = 0x1C537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5378u;
    // 0x1c537c: 0x24a55470  addiu       $a1, $a1, 0x5470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5378u, 0x1C5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5380u;
label_1c5380:
    // 0x1c5380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1c5384u;
}
