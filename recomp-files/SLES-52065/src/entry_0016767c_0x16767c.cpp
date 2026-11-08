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

// Function: entry_0016767c
// Address: 0x16767c - 0x16769c
void entry_0016767c_0x16767c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016767c_0x16767c");
#endif

    ctx->pc = 0x16767cu;

    // 0x16767c: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x16767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167684: 0x0  nop
    ctx->pc = 0x167684u;
    // NOP
    // 0x167688: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x167688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16768c: 0x0  nop
    ctx->pc = 0x16768cu;
    // NOP
    // 0x167690: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167690u;
    {
        const bool branch_taken_0x167690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167690u;
        // 0x167694: 0x3c0341c0  lui         $v1, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167690) {
            ctx->pc = 0x16769Cu;
            return;
        }
    }
    ctx->pc = 0x167698u;
    // 0x167698: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x167698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
    ctx->pc = 0x16769cu;
}
