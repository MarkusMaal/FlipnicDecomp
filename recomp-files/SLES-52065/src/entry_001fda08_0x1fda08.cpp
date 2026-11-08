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

// Function: entry_001fda08
// Address: 0x1fda08 - 0x1fda14
void entry_001fda08_0x1fda08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda08_0x1fda08");
#endif

    ctx->pc = 0x1fda08u;

    // 0x1fda08: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1fda08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda0c: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1fda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x1fda10: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1fda10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x1fda14u;
}
