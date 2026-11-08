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

// Function: entry_001033c4
// Address: 0x1033c4 - 0x1033d4
void entry_001033c4_0x1033c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001033c4_0x1033c4");
#endif

    switch (ctx->pc) {
        case 0x1033d0u: goto label_1033d0;
        default: break;
    }

    ctx->pc = 0x1033c4u;

    // 0x1033c4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1033c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1033c8: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1033C8u;
    SET_GPR_U32(ctx, 31, 0x1033D0u);
    ctx->pc = 0x1033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033C8u;
    // 0x1033cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1033C8u, 0x1033D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1033d4u;
}
