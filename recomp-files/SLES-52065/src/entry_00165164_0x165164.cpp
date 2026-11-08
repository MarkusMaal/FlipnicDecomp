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

// Function: entry_00165164
// Address: 0x165164 - 0x165170
void entry_00165164_0x165164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165164_0x165164");
#endif

    ctx->pc = 0x165164u;

    // 0x165164: 0x0  nop
    ctx->pc = 0x165164u;
    // NOP
    // 0x165168: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16516c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16516cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x165170u;
}
