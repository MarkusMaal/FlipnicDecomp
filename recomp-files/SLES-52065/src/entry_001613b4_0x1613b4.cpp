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

// Function: entry_001613b4
// Address: 0x1613b4 - 0x1613cc
void entry_001613b4_0x1613b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613b4_0x1613b4");
#endif

    ctx->pc = 0x1613b4u;

    // 0x1613b4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1613b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1613b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1613b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1613bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1613c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1613c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1613c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1613C4u;
    {
        const bool branch_taken_0x1613c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C4u;
        // 0x1613c8: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c4) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x1613CCu;
}
