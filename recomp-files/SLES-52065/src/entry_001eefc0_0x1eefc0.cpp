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

// Function: entry_001eefc0
// Address: 0x1eefc0 - 0x1eefd8
void entry_001eefc0_0x1eefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eefc0_0x1eefc0");
#endif

    switch (ctx->pc) {
        case 0x1eefd4u: goto label_1eefd4;
        default: break;
    }

    ctx->pc = 0x1eefc0u;

    // 0x1eefc0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eefc4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1eefc8: 0x8e24a468  lw          $a0, -0x5B98($s1)
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    // 0x1eefcc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEFCCu;
    SET_GPR_U32(ctx, 31, 0x1EEFD4u);
    ctx->pc = 0x1EEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFCCu;
    // 0x1eefd0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEFCCu, 0x1EEFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFD4u;
label_1eefd4:
    // 0x1eefd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eefd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eefd8u;
}
