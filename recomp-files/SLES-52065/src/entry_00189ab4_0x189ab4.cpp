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

// Function: entry_00189ab4
// Address: 0x189ab4 - 0x189abc
void entry_00189ab4_0x189ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ab4_0x189ab4");
#endif

    ctx->pc = 0x189ab4u;

    // 0x189ab4: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x189AB4u;
    {
        const bool branch_taken_0x189ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AB4u;
        // 0x189ab8: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ab4) {
            ctx->pc = 0x189DFCu;
            return;
        }
    }
    ctx->pc = 0x189ABCu;
}
