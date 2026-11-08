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

// Function: entry_00127a00
// Address: 0x127a00 - 0x127a10
void entry_00127a00_0x127a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127a00_0x127a00");
#endif

    ctx->pc = 0x127a00u;

    // 0x127a00: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x127A00u;
    {
        const bool branch_taken_0x127a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a00) {
            ctx->pc = 0x127A10u;
            return;
        }
    }
    ctx->pc = 0x127A08u;
    // 0x127a08: 0xc05fbe8  jal         func_17EFA0
    ctx->pc = 0x127A08u;
    SET_GPR_U32(ctx, 31, 0x127A10u);
    ctx->pc = 0x127A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A08u;
    // 0x127a0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFA0u, 0x127A08u, 0x127A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A10u;
}
