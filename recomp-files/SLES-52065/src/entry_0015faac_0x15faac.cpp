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

// Function: entry_0015faac
// Address: 0x15faac - 0x15fabc
void entry_0015faac_0x15faac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015faac_0x15faac");
#endif

    ctx->pc = 0x15faacu;

    // 0x15faac: 0x0  nop
    ctx->pc = 0x15faacu;
    // NOP
    // 0x15fab0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15fab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15fab4: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x15FAB4u;
    {
        const bool branch_taken_0x15fab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fab4) {
            ctx->pc = 0x15F9C4u;
            return;
        }
    }
    ctx->pc = 0x15FABCu;
}
