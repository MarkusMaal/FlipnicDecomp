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

// Function: entry_0012e99c
// Address: 0x12e99c - 0x12e9ac
void entry_0012e99c_0x12e99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e99c_0x12e99c");
#endif

    ctx->pc = 0x12e99cu;

    // 0x12e99c: 0x0  nop
    ctx->pc = 0x12e99cu;
    // NOP
    // 0x12e9a0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12e9a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e9a4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x12E9A4u;
    {
        const bool branch_taken_0x12e9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A4u;
        // 0x12e9a8: 0x3c0103ff  lui         $at, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a4) {
            ctx->pc = 0x12E97Cu;
            return;
        }
    }
    ctx->pc = 0x12E9ACu;
}
