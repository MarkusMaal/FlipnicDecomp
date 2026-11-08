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

// Function: entry_0016a90c
// Address: 0x16a90c - 0x16a928
void entry_0016a90c_0x16a90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a90c_0x16a90c");
#endif

    ctx->pc = 0x16a90cu;

    // 0x16a90c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a90cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a914: 0x0  nop
    ctx->pc = 0x16a914u;
    // NOP
    // 0x16a918: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A920u;
    // 0x16a920: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16A920u;
    {
        const bool branch_taken_0x16a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A920u;
        // 0x16a924: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a920) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A928u;
}
