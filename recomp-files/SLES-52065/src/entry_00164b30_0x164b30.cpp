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

// Function: entry_00164b30
// Address: 0x164b30 - 0x164b38
void entry_00164b30_0x164b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b30_0x164b30");
#endif

    ctx->pc = 0x164b30u;

    // 0x164b30: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164C60u;
            return;
        }
    }
    ctx->pc = 0x164B38u;
}
