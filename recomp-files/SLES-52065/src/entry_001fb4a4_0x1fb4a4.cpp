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

// Function: entry_001fb4a4
// Address: 0x1fb4a4 - 0x1fb4bc
void entry_001fb4a4_0x1fb4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb4a4_0x1fb4a4");
#endif

    ctx->pc = 0x1fb4a4u;

    // 0x1fb4a4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb4a8: 0xc4404d74  lwc1        $f0, 0x4D74($v0)
    ctx->pc = 0x1fb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb4ac: 0xc4614d84  lwc1        $f1, 0x4D84($v1)
    ctx->pc = 0x1fb4acu;
    { uint32_t bits = FAST_READ32(0x224D84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb4b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fb4b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fb4b4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1FB4B4u;
    {
        const bool branch_taken_0x1fb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B4u;
        // 0x1fb4b8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4b4) {
            ctx->pc = 0x1FB6CCu;
            return;
        }
    }
    ctx->pc = 0x1FB4BCu;
}
