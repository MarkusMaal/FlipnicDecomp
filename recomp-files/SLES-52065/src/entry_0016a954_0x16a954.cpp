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

// Function: entry_0016a954
// Address: 0x16a954 - 0x16a96c
void entry_0016a954_0x16a954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a954_0x16a954");
#endif

    ctx->pc = 0x16a954u;

    // 0x16a954: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a954u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a958: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a95c: 0x0  nop
    ctx->pc = 0x16a95cu;
    // NOP
    // 0x16a960: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A960u;
    {
        const bool branch_taken_0x16a960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a960) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A968u;
    // 0x16a968: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x16a968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x16a96cu;
}
