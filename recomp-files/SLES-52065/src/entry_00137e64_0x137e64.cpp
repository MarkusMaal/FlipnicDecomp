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

// Function: entry_00137e64
// Address: 0x137e64 - 0x137e84
void entry_00137e64_0x137e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e64_0x137e64");
#endif

    ctx->pc = 0x137e64u;

    // 0x137e64: 0x0  nop
    ctx->pc = 0x137e64u;
    // NOP
    // 0x137e68: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x137e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e6c: 0x0  nop
    ctx->pc = 0x137e6cu;
    // NOP
    // 0x137e70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137E70u;
    {
        const bool branch_taken_0x137e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e70) {
            ctx->pc = 0x137E84u;
            return;
        }
    }
    ctx->pc = 0x137E78u;
    // 0x137e78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137e7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E7Cu;
        // 0x137e80: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x137EA8u;
            return;
        }
    }
    ctx->pc = 0x137E84u;
}
