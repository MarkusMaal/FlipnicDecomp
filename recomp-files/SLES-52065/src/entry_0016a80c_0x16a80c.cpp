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

// Function: entry_0016a80c
// Address: 0x16a80c - 0x16a828
void entry_0016a80c_0x16a80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a80c_0x16a80c");
#endif

    ctx->pc = 0x16a80cu;

    // 0x16a80c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a80cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a810: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a814: 0x0  nop
    ctx->pc = 0x16a814u;
    // NOP
    // 0x16a818: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x16A818u;
    {
        const bool branch_taken_0x16a818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a818) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A820u;
    // 0x16a820: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x16A820u;
    {
        const bool branch_taken_0x16a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A820u;
        // 0x16a824: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a820) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A828u;
}
