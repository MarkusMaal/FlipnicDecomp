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

// Function: entry_0019226c
// Address: 0x19226c - 0x19227c
void entry_0019226c_0x19226c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019226c_0x19226c");
#endif

    ctx->pc = 0x19226cu;

    // 0x19226c: 0x0  nop
    ctx->pc = 0x19226cu;
    // NOP
    // 0x192270: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x192270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x192274: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x192274u;
    {
        const bool branch_taken_0x192274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192274u;
        // 0x192278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192274) {
            ctx->pc = 0x1921F8u;
            return;
        }
    }
    ctx->pc = 0x19227Cu;
}
