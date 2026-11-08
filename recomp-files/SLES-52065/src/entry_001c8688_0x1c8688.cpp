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

// Function: entry_001c8688
// Address: 0x1c8688 - 0x1c86b0
void entry_001c8688_0x1c8688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8688_0x1c8688");
#endif

    switch (ctx->pc) {
        case 0x1c8690u: goto label_1c8690;
        case 0x1c86a8u: goto label_1c86a8;
        default: break;
    }

    ctx->pc = 0x1c8688u;

    // 0x1c8688: 0xc06e944  jal         func_1BA510
    ctx->pc = 0x1C8688u;
    SET_GPR_U32(ctx, 31, 0x1C8690u);
    ctx->pc = 0x1C868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8688u;
    // 0x1c868c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA510u, 0x1C8688u, 0x1C8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8690u;
label_1c8690:
    // 0x1c8690: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8698: 0x24a559b0  addiu       $a1, $a1, 0x59B0
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    // 0x1c869c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c86a0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C86A0u;
    SET_GPR_U32(ctx, 31, 0x1C86A8u);
    ctx->pc = 0x1C86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86A0u;
    // 0x1c86a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C86A0u, 0x1C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86A8u;
label_1c86a8:
    // 0x1c86a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C86A8u;
    {
        const bool branch_taken_0x1c86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86a8) {
            ctx->pc = 0x1C86C0u;
            return;
        }
    }
    ctx->pc = 0x1C86B0u;
}
