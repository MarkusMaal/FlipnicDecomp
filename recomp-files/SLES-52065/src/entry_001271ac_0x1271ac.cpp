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

// Function: entry_001271ac
// Address: 0x1271ac - 0x1271c4
void entry_001271ac_0x1271ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001271ac_0x1271ac");
#endif

    ctx->pc = 0x1271acu;

    // 0x1271ac: 0x0  nop
    ctx->pc = 0x1271acu;
    // NOP
    // 0x1271b0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1271b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1271b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1271B4u;
    {
        const bool branch_taken_0x1271b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271b4) {
            ctx->pc = 0x1271C4u;
            return;
        }
    }
    ctx->pc = 0x1271BCu;
    // 0x1271bc: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1271BCu;
    {
        const bool branch_taken_0x1271bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271bc) {
            ctx->pc = 0x127194u;
            return;
        }
    }
    ctx->pc = 0x1271C4u;
}
