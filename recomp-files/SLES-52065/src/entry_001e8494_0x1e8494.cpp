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

// Function: entry_001e8494
// Address: 0x1e8494 - 0x1e84a4
void entry_001e8494_0x1e8494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8494_0x1e8494");
#endif

    ctx->pc = 0x1e8494u;

    // 0x1e8494: 0x0  nop
    ctx->pc = 0x1e8494u;
    // NOP
    // 0x1e8498: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e8498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e849c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E849Cu;
    {
        const bool branch_taken_0x1e849c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E849Cu;
        // 0x1e84a0: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e849c) {
            ctx->pc = 0x1E8474u;
            return;
        }
    }
    ctx->pc = 0x1E84A4u;
}
