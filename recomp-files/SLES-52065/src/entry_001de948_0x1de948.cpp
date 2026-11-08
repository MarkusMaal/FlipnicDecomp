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

// Function: entry_001de948
// Address: 0x1de948 - 0x1de94c
void entry_001de948_0x1de948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de948_0x1de948");
#endif

    ctx->pc = 0x1de948u;

    // 0x1de948: 0x31020400  andi        $v0, $t0, 0x400
    ctx->pc = 0x1de948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
    ctx->pc = 0x1de94cu;
}
