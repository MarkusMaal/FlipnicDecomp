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

// Function: entry_0016b38c
// Address: 0x16b38c - 0x16b3a8
void entry_0016b38c_0x16b38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b38c_0x16b38c");
#endif

    ctx->pc = 0x16b38cu;

    // 0x16b38c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b38cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b394: 0x0  nop
    ctx->pc = 0x16b394u;
    // NOP
    // 0x16b398: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x16B398u;
    {
        const bool branch_taken_0x16b398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b398) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B3A0u;
    // 0x16b3a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16B3A0u;
    {
        const bool branch_taken_0x16b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3A0u;
        // 0x16b3a4: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3a0) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B3A8u;
}
