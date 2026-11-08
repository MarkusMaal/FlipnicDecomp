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

// Function: entry_001598e0
// Address: 0x1598e0 - 0x1598e8
void entry_001598e0_0x1598e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001598e0_0x1598e0");
#endif

    ctx->pc = 0x1598e0u;

    // 0x1598e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1598e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1598e4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1598e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1598e8u;
}
