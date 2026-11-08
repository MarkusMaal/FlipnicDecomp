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

// Function: entry_0012eb84
// Address: 0x12eb84 - 0x12eba0
void entry_0012eb84_0x12eb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb84_0x12eb84");
#endif

    switch (ctx->pc) {
        case 0x12eb8cu: goto label_12eb8c;
        default: break;
    }

    ctx->pc = 0x12eb84u;

    // 0x12eb84: 0xc04bbe0  jal         func_12EF80
    ctx->pc = 0x12EB84u;
    SET_GPR_U32(ctx, 31, 0x12EB8Cu);
    ctx->pc = 0x12EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB84u;
    // 0x12eb88: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF80u, 0x12EB84u, 0x12EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB8Cu;
label_12eb8c:
    // 0x12eb8c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12eb90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB90u;
    {
        const bool branch_taken_0x12eb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb90) {
            ctx->pc = 0x12EBA0u;
            return;
        }
    }
    ctx->pc = 0x12EB98u;
    // 0x12eb98: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EB98u;
    SET_GPR_U32(ctx, 31, 0x12EBA0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EB98u, 0x12EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBA0u;
}
