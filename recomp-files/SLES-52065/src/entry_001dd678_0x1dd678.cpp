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

// Function: entry_001dd678
// Address: 0x1dd678 - 0x1dd680
void entry_001dd678_0x1dd678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd678_0x1dd678");
#endif

    ctx->pc = 0x1dd678u;

    // 0x1dd678: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x1dd67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dd680u;
}
