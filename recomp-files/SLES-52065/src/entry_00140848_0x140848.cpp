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

// Function: entry_00140848
// Address: 0x140848 - 0x140854
void entry_00140848_0x140848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140848_0x140848");
#endif

    ctx->pc = 0x140848u;

    // 0x140848: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x140848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14084c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x14084cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x140850: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x140850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x140854u;
}
