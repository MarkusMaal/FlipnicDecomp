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

// Function: entry_00176a24
// Address: 0x176a24 - 0x176a44
void entry_00176a24_0x176a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a24_0x176a24");
#endif

    ctx->pc = 0x176a24u;

    // 0x176a24: 0x0  nop
    ctx->pc = 0x176a24u;
    // NOP
    // 0x176a28: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x176a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176a2c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x176a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176a34: 0x0  nop
    ctx->pc = 0x176a34u;
    // NOP
    // 0x176a38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x176A38u;
    {
        const bool branch_taken_0x176a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A38u;
        // 0x176a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a38) {
            ctx->pc = 0x176A44u;
            return;
        }
    }
    ctx->pc = 0x176A40u;
    // 0x176a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176a44u;
}
