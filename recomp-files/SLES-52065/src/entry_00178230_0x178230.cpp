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

// Function: entry_00178230
// Address: 0x178230 - 0x178234
void entry_00178230_0x178230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178230_0x178230");
#endif

    ctx->pc = 0x178230u;

    // 0x178230: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x178230u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x178234u;
}
