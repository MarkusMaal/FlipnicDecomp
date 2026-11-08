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

// Function: entry_0020a060
// Address: 0x20a060 - 0x20a06c
void entry_0020a060_0x20a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a060_0x20a060");
#endif

    ctx->pc = 0x20a060u;

    // 0x20a060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20a064: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20a064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x20a068: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20a068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x20a06cu;
}
