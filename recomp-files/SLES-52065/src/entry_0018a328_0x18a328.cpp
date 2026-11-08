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

// Function: entry_0018a328
// Address: 0x18a328 - 0x18a33c
void entry_0018a328_0x18a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a328_0x18a328");
#endif

    ctx->pc = 0x18a328u;

    // 0x18a328: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18a328u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a32c: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x18a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a334: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18A334u;
    {
        const bool branch_taken_0x18a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A334u;
        // 0x18a338: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a334) {
            ctx->pc = 0x18A3ACu;
            return;
        }
    }
    ctx->pc = 0x18A33Cu;
}
