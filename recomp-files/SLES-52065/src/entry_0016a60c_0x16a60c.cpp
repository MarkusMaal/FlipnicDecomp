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

// Function: entry_0016a60c
// Address: 0x16a60c - 0x16a628
void entry_0016a60c_0x16a60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a60c_0x16a60c");
#endif

    ctx->pc = 0x16a60cu;

    // 0x16a60c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a60cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a610: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a614: 0x0  nop
    ctx->pc = 0x16a614u;
    // NOP
    // 0x16a618: 0x450000d4  bc1f        . + 4 + (0xD4 << 2)
    ctx->pc = 0x16A618u;
    {
        const bool branch_taken_0x16a618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a618) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A620u;
    // 0x16a620: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x16A620u;
    {
        const bool branch_taken_0x16a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A620u;
        // 0x16a624: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a620) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A628u;
}
