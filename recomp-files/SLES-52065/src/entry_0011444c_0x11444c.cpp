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

// Function: entry_0011444c
// Address: 0x11444c - 0x11446c
void entry_0011444c_0x11444c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011444c_0x11444c");
#endif

    ctx->pc = 0x11444cu;

    // 0x11444c: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x11444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114450: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114458: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x114458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11445c: 0x0  nop
    ctx->pc = 0x11445cu;
    // NOP
    // 0x114460: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x114460u;
    {
        const bool branch_taken_0x114460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114460u;
        // 0x114464: 0xe6400280  swc1        $f0, 0x280($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114460) {
            ctx->pc = 0x11446Cu;
            return;
        }
    }
    ctx->pc = 0x114468u;
    // 0x114468: 0xe6420280  swc1        $f2, 0x280($s2)
    ctx->pc = 0x114468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
    ctx->pc = 0x11446cu;
}
