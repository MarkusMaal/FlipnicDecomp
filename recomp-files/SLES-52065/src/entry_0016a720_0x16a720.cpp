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

// Function: entry_0016a720
// Address: 0x16a720 - 0x16a728
void entry_0016a720_0x16a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a720_0x16a720");
#endif

    ctx->pc = 0x16a720u;

    // 0x16a720: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16a724: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    ctx->pc = 0x16a728u;
}
