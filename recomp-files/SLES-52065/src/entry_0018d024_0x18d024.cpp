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

// Function: entry_0018d024
// Address: 0x18d024 - 0x18d048
void entry_0018d024_0x18d024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d024_0x18d024");
#endif

    ctx->pc = 0x18d024u;

    // 0x18d024: 0xc6400488  lwc1        $f0, 0x488($s2)
    ctx->pc = 0x18d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d030: 0x0  nop
    ctx->pc = 0x18d030u;
    // NOP
    // 0x18d034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d038: 0x0  nop
    ctx->pc = 0x18d038u;
    // NOP
    // 0x18d03c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D03Cu;
    {
        const bool branch_taken_0x18d03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d03c) {
            ctx->pc = 0x18D048u;
            return;
        }
    }
    ctx->pc = 0x18D044u;
    // 0x18d044: 0xe6410488  swc1        $f1, 0x488($s2)
    ctx->pc = 0x18d044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
    ctx->pc = 0x18d048u;
}
