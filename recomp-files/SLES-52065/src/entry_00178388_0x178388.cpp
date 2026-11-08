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

// Function: entry_00178388
// Address: 0x178388 - 0x17838c
void entry_00178388_0x178388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178388_0x178388");
#endif

    ctx->pc = 0x178388u;

    // 0x178388: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x178388u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x17838cu;
}
