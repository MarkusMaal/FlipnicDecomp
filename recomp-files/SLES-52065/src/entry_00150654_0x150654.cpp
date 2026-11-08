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

// Function: entry_00150654
// Address: 0x150654 - 0x150658
void entry_00150654_0x150654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150654_0x150654");
#endif

    ctx->pc = 0x150654u;

    // 0x150654: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x150654u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x150658u;
}
