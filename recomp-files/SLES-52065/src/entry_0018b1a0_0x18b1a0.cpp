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

// Function: entry_0018b1a0
// Address: 0x18b1a0 - 0x18b1c4
void entry_0018b1a0_0x18b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b1a0_0x18b1a0");
#endif

    ctx->pc = 0x18b1a0u;

    // 0x18b1a0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x18b1a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18b1a8: 0x80630acc  lb          $v1, 0xACC($v1)
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2764)));
    // 0x18b1ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1ACu;
    {
        const bool branch_taken_0x18b1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1ac) {
            ctx->pc = 0x18B1C4u;
            return;
        }
    }
    ctx->pc = 0x18B1B4u;
    // 0x18b1b4: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x18b1b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18b1bc: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B1BCu;
    SET_GPR_U32(ctx, 31, 0x18B1C4u);
    ctx->pc = 0x18B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1BCu;
    // 0x18b1c0: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B1BCu, 0x18B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1C4u;
}
