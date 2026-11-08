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

// Function: entry_00126d00
// Address: 0x126d00 - 0x126d14
void entry_00126d00_0x126d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126d00_0x126d00");
#endif

    ctx->pc = 0x126d00u;

    // 0x126d00: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x126d04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x126D04u;
    {
        const bool branch_taken_0x126d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d04) {
            ctx->pc = 0x126D14u;
            return;
        }
    }
    ctx->pc = 0x126D0Cu;
    // 0x126d0c: 0x10c2fff6  beq         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x126D0Cu;
    {
        const bool branch_taken_0x126d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x126d0c) {
            ctx->pc = 0x126CE8u;
            return;
        }
    }
    ctx->pc = 0x126D14u;
}
