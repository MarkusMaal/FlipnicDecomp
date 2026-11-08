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

// Function: entry_001e0148
// Address: 0x1e0148 - 0x1e0168
void entry_001e0148_0x1e0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0148_0x1e0148");
#endif

    switch (ctx->pc) {
        case 0x1e0164u: goto label_1e0164;
        default: break;
    }

    ctx->pc = 0x1e0148u;

    // 0x1e0148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e014c: 0x8fc8a084  lw          $t0, -0x5F7C($fp)
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942852)));
    // 0x1e0150: 0x24a538b0  addiu       $a1, $a1, 0x38B0
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
    // 0x1e0154: 0xde260030  ld          $a2, 0x30($s1)
    ctx->pc = 0x1e0154u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e0158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e015c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E015Cu;
    SET_GPR_U32(ctx, 31, 0x1E0164u);
    ctx->pc = 0x1E0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E015Cu;
    // 0x1e0160: 0x8c67a080  lw          $a3, -0x5F80($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E015Cu, 0x1E0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0164u;
label_1e0164:
    // 0x1e0164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e0168u;
}
