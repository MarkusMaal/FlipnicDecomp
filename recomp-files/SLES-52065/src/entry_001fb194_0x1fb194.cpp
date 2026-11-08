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

// Function: entry_001fb194
// Address: 0x1fb194 - 0x1fb19c
void entry_001fb194_0x1fb194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb194_0x1fb194");
#endif

    ctx->pc = 0x1fb194u;

    // 0x1fb194: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1FB194u;
    {
        const bool branch_taken_0x1fb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB194u;
        // 0x1fb198: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb194) {
            ctx->pc = 0x1FB380u;
            return;
        }
    }
    ctx->pc = 0x1FB19Cu;
}
