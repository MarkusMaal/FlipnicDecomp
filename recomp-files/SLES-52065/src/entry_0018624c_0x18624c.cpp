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

// Function: entry_0018624c
// Address: 0x18624c - 0x186260
void entry_0018624c_0x18624c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018624c_0x18624c");
#endif

    ctx->pc = 0x18624cu;

    // 0x18624c: 0x0  nop
    ctx->pc = 0x18624cu;
    // NOP
    // 0x186250: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x186250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x186254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x186258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18625c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18625cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x186260u;
}
