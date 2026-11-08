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

// Function: entry_001d7334
// Address: 0x1d7334 - 0x1d7340
void entry_001d7334_0x1d7334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7334_0x1d7334");
#endif

    ctx->pc = 0x1d7334u;

    // 0x1d7334: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7334u;
    {
        const bool branch_taken_0x1d7334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7334) {
            ctx->pc = 0x1D7338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7334u;
            // 0x1d7338: 0x92650005  lbu         $a1, 0x5($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7340u;
            return;
        }
    }
    ctx->pc = 0x1D733Cu;
    // 0x1d733c: 0x92c5000e  lbu         $a1, 0xE($s6)
    ctx->pc = 0x1d733cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 14)));
    ctx->pc = 0x1d7340u;
}
