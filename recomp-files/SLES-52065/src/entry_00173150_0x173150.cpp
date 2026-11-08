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

// Function: entry_00173150
// Address: 0x173150 - 0x17315c
void entry_00173150_0x173150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173150_0x173150");
#endif

    ctx->pc = 0x173150u;

    // 0x173150: 0xc6201464  lwc1        $f0, 0x1464($s1)
    ctx->pc = 0x173150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173154: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x173154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x173158: 0xe6201464  swc1        $f0, 0x1464($s1)
    ctx->pc = 0x173158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
    ctx->pc = 0x17315cu;
}
