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

// Function: entry_00111ff8
// Address: 0x111ff8 - 0x112004
void entry_00111ff8_0x111ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111ff8_0x111ff8");
#endif

    ctx->pc = 0x111ff8u;

    // 0x111ff8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111ffc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111FFCu;
    {
        const bool branch_taken_0x111ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FFCu;
        // 0x112000: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ffc) {
            ctx->pc = 0x111FC0u;
            return;
        }
    }
    ctx->pc = 0x112004u;
}
