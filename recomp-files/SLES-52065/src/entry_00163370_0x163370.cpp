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

// Function: entry_00163370
// Address: 0x163370 - 0x163378
void entry_00163370_0x163370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163370_0x163370");
#endif

    ctx->pc = 0x163370u;

    // 0x163370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x163370u;
    {
        const bool branch_taken_0x163370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163370) {
            ctx->pc = 0x1633B0u;
            return;
        }
    }
    ctx->pc = 0x163378u;
}
