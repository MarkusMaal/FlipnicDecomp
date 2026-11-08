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

// Function: entry_0016b264
// Address: 0x16b264 - 0x16b280
void entry_0016b264_0x16b264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b264_0x16b264");
#endif

    ctx->pc = 0x16b264u;

    // 0x16b264: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b268: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b26c: 0x0  nop
    ctx->pc = 0x16b26cu;
    // NOP
    // 0x16b270: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x16B270u;
    {
        const bool branch_taken_0x16b270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b270) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B278u;
    // 0x16b278: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B278u;
        // 0x16b27c: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B280u;
}
