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

// Function: entry_00122d60
// Address: 0x122d60 - 0x122d68
void entry_00122d60_0x122d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d60_0x122d60");
#endif

    ctx->pc = 0x122d60u;

    // 0x122d60: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d64: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x122d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x122d68u;
}
