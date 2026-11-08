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

// Function: entry_00153f80
// Address: 0x153f80 - 0x153fa8
void entry_00153f80_0x153f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153f80_0x153f80");
#endif

    ctx->pc = 0x153f80u;

    // 0x153f80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153f84: 0x0  nop
    ctx->pc = 0x153f84u;
    // NOP
    // 0x153f88: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x153f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f8c: 0x0  nop
    ctx->pc = 0x153f8cu;
    // NOP
    // 0x153f90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x153F90u;
    {
        const bool branch_taken_0x153f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F90u;
        // 0x153f94: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f90) {
            ctx->pc = 0x153FA8u;
            return;
        }
    }
    ctx->pc = 0x153F98u;
    // 0x153f98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x153f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153fa0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x153FA0u;
    {
        const bool branch_taken_0x153fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fa0) {
            ctx->pc = 0x1540B4u;
            return;
        }
    }
    ctx->pc = 0x153FA8u;
}
