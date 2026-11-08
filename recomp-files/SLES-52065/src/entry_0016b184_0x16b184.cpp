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

// Function: entry_0016b184
// Address: 0x16b184 - 0x16b1a0
void entry_0016b184_0x16b184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b184_0x16b184");
#endif

    ctx->pc = 0x16b184u;

    // 0x16b184: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b184u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b188: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b18c: 0x0  nop
    ctx->pc = 0x16b18cu;
    // NOP
    // 0x16b190: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x16B190u;
    {
        const bool branch_taken_0x16b190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b190) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B198u;
    // 0x16b198: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x16B198u;
    {
        const bool branch_taken_0x16b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B198u;
        // 0x16b19c: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b198) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B1A0u;
}
