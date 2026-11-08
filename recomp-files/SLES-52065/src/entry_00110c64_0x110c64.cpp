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

// Function: entry_00110c64
// Address: 0x110c64 - 0x110c74
void entry_00110c64_0x110c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c64_0x110c64");
#endif

    ctx->pc = 0x110c64u;

    // 0x110c64: 0x0  nop
    ctx->pc = 0x110c64u;
    // NOP
    // 0x110c68: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x110c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110c6c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x110C6Cu;
    {
        const bool branch_taken_0x110c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C6Cu;
        // 0x110c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c6c) {
            ctx->pc = 0x110C24u;
            return;
        }
    }
    ctx->pc = 0x110C74u;
}
