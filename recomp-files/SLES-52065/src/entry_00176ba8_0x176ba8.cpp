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

// Function: entry_00176ba8
// Address: 0x176ba8 - 0x176bc8
void entry_00176ba8_0x176ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ba8_0x176ba8");
#endif

    ctx->pc = 0x176ba8u;

    // 0x176ba8: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x176ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176bb0: 0x0  nop
    ctx->pc = 0x176bb0u;
    // NOP
    // 0x176bb4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x176bb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176bb8: 0x0  nop
    ctx->pc = 0x176bb8u;
    // NOP
    // 0x176bbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x176BBCu;
    {
        const bool branch_taken_0x176bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bbc) {
            ctx->pc = 0x176BC8u;
            return;
        }
    }
    ctx->pc = 0x176BC4u;
    // 0x176bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x176bc8u;
}
