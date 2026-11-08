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

// Function: entry_0014860c
// Address: 0x14860c - 0x148630
void entry_0014860c_0x14860c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014860c_0x14860c");
#endif

    ctx->pc = 0x14860cu;

    // 0x14860c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14860cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148610: 0x0  nop
    ctx->pc = 0x148610u;
    // NOP
    // 0x148614: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x148614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148618: 0x0  nop
    ctx->pc = 0x148618u;
    // NOP
    // 0x14861c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14861Cu;
    {
        const bool branch_taken_0x14861c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14861Cu;
        // 0x148620: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14861c) {
            ctx->pc = 0x148630u;
            return;
        }
    }
    ctx->pc = 0x148624u;
    // 0x148624: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148624u;
    {
        const bool branch_taken_0x148624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148624u;
        // 0x148628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148624) {
            ctx->pc = 0x148654u;
            return;
        }
    }
    ctx->pc = 0x14862Cu;
    // 0x14862c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x148630u;
}
