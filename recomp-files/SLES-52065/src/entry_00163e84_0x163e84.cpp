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

// Function: entry_00163e84
// Address: 0x163e84 - 0x163e90
void entry_00163e84_0x163e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e84_0x163e84");
#endif

    ctx->pc = 0x163e84u;

    // 0x163e84: 0x0  nop
    ctx->pc = 0x163e84u;
    // NOP
    // 0x163e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163e8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x163e90u;
}
