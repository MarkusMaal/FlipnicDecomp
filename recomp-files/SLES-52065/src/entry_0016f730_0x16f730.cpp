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

// Function: entry_0016f730
// Address: 0x16f730 - 0x16f73c
void entry_0016f730_0x16f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f730_0x16f730");
#endif

    ctx->pc = 0x16f730u;

    // 0x16f730: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16f734: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x16f734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x16f738: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x16f73cu;
}
