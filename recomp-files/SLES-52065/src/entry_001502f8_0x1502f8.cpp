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

// Function: entry_001502f8
// Address: 0x1502f8 - 0x150320
void entry_001502f8_0x1502f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001502f8_0x1502f8");
#endif

    ctx->pc = 0x1502f8u;

    // 0x1502f8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1502fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150300: 0xc4a100f0  lwc1        $f1, 0xF0($a1)
    ctx->pc = 0x150300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150304: 0x24a700f0  addiu       $a3, $a1, 0xF0
    ctx->pc = 0x150304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x150308: 0xc4a20100  lwc1        $f2, 0x100($a1)
    ctx->pc = 0x150308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15030c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15030cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150310: 0x0  nop
    ctx->pc = 0x150310u;
    // NOP
    // 0x150314: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x150314u;
    {
        const bool branch_taken_0x150314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150314u;
        // 0x150318: 0x24a60100  addiu       $a2, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150314) {
            ctx->pc = 0x150320u;
            return;
        }
    }
    ctx->pc = 0x15031Cu;
    // 0x15031c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15031cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150320u;
}
