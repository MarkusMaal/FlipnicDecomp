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

// Function: entry_0017cd9c
// Address: 0x17cd9c - 0x17cdb8
void entry_0017cd9c_0x17cd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd9c_0x17cd9c");
#endif

    ctx->pc = 0x17cd9cu;

    // 0x17cd9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17cd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cda0: 0x0  nop
    ctx->pc = 0x17cda0u;
    // NOP
    // 0x17cda4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cda8: 0x0  nop
    ctx->pc = 0x17cda8u;
    // NOP
    // 0x17cdac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDACu;
    {
        const bool branch_taken_0x17cdac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDACu;
        // 0x17cdb0: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdac) {
            ctx->pc = 0x17CDB8u;
            return;
        }
    }
    ctx->pc = 0x17CDB4u;
    // 0x17cdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x17cdb8u;
}
