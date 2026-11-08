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

// Function: entry_0015034c
// Address: 0x15034c - 0x150370
void entry_0015034c_0x15034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015034c_0x15034c");
#endif

    ctx->pc = 0x15034cu;

    // 0x15034c: 0x0  nop
    ctx->pc = 0x15034cu;
    // NOP
    // 0x150350: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150354: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x150354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150358: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x150358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15035c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x15035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x150360: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150364: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x150364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15036c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x15036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    ctx->pc = 0x150370u;
}
