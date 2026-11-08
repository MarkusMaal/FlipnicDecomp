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

// Function: entry_0010e304
// Address: 0x10e304 - 0x10e318
void entry_0010e304_0x10e304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e304_0x10e304");
#endif

    ctx->pc = 0x10e304u;

    // 0x10e304: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E304u;
    {
        const bool branch_taken_0x10e304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e304) {
            ctx->pc = 0x10E318u;
            return;
        }
    }
    ctx->pc = 0x10E30Cu;
    // 0x10e30c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x10e30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x10e310: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x10e310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBFu));
    // 0x10e314: 0x0  nop
    ctx->pc = 0x10e314u;
    // NOP
    ctx->pc = 0x10e318u;
}
