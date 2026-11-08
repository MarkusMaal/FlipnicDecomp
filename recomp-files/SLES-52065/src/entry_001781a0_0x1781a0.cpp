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

// Function: entry_001781a0
// Address: 0x1781a0 - 0x1781a8
void entry_001781a0_0x1781a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781a0_0x1781a0");
#endif

    ctx->pc = 0x1781a0u;

    // 0x1781a0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1781a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1781a4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1781a4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1781a8u;
}
