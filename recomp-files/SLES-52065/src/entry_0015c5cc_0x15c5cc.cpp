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

// Function: entry_0015c5cc
// Address: 0x15c5cc - 0x15c5e8
void entry_0015c5cc_0x15c5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c5cc_0x15c5cc");
#endif

    ctx->pc = 0x15c5ccu;

    // 0x15c5cc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x15c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x15c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c5d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c5d8: 0x0  nop
    ctx->pc = 0x15c5d8u;
    // NOP
    // 0x15c5dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C5DCu;
    {
        const bool branch_taken_0x15c5dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5DCu;
        // 0x15c5e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5dc) {
            ctx->pc = 0x15C5E8u;
            return;
        }
    }
    ctx->pc = 0x15C5E4u;
    // 0x15c5e4: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x15c5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    ctx->pc = 0x15c5e8u;
}
