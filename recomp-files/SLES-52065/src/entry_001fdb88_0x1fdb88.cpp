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

// Function: entry_001fdb88
// Address: 0x1fdb88 - 0x1fdb98
void entry_001fdb88_0x1fdb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb88_0x1fdb88");
#endif

    ctx->pc = 0x1fdb88u;

    // 0x1fdb88: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1fdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1fdb8c: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1fdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1fdb90: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1fdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1fdb94: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1fdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    ctx->pc = 0x1fdb98u;
}
