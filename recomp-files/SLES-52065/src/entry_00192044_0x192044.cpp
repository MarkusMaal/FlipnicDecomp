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

// Function: entry_00192044
// Address: 0x192044 - 0x192054
void entry_00192044_0x192044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192044_0x192044");
#endif

    ctx->pc = 0x192044u;

    // 0x192044: 0x0  nop
    ctx->pc = 0x192044u;
    // NOP
    // 0x192048: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x192048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19204c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x19204Cu;
    {
        const bool branch_taken_0x19204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19204Cu;
        // 0x192050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19204c) {
            ctx->pc = 0x191FD0u;
            return;
        }
    }
    ctx->pc = 0x192054u;
}
