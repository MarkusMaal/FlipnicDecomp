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

// Function: entry_00164874
// Address: 0x164874 - 0x16487c
void entry_00164874_0x164874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164874_0x164874");
#endif

    ctx->pc = 0x164874u;

    // 0x164874: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x164874u;
    {
        const bool branch_taken_0x164874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164874) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x16487Cu;
}
