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

// Function: entry_0017805c
// Address: 0x17805c - 0x178068
void entry_0017805c_0x17805c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017805c_0x17805c");
#endif

    ctx->pc = 0x17805cu;

    // 0x17805c: 0x0  nop
    ctx->pc = 0x17805cu;
    // NOP
    // 0x178060: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x178064: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x178064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x178068u;
}
