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

// Function: entry_0014880c
// Address: 0x14880c - 0x148840
void entry_0014880c_0x14880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014880c_0x14880c");
#endif

    ctx->pc = 0x14880cu;

    // 0x14880c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x14880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148810: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x148810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148818: 0x0  nop
    ctx->pc = 0x148818u;
    // NOP
    // 0x14881c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14881Cu;
    {
        const bool branch_taken_0x14881c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14881c) {
            ctx->pc = 0x148840u;
            return;
        }
    }
    ctx->pc = 0x148824u;
    // 0x148824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x148824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148828: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x148828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14882c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148830: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148834: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148838: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x148838u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14883c: 0x0  nop
    ctx->pc = 0x14883cu;
    // NOP
    ctx->pc = 0x148840u;
}
