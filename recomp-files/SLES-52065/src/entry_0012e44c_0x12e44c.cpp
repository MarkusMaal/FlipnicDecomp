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

// Function: entry_0012e44c
// Address: 0x12e44c - 0x12e458
void entry_0012e44c_0x12e44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e44c_0x12e44c");
#endif

    ctx->pc = 0x12e44cu;

    // 0x12e44c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x12e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e450: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x12e450u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x12e454: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x12e458u;
}
