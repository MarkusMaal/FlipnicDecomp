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

// Function: entry_001fb488
// Address: 0x1fb488 - 0x1fb4a4
void entry_001fb488_0x1fb488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb488_0x1fb488");
#endif

    ctx->pc = 0x1fb488u;

    // 0x1fb488: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB488u;
    {
        const bool branch_taken_0x1fb488 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB488u;
        // 0x1fb48c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb488) {
            ctx->pc = 0x1FB4A4u;
            return;
        }
    }
    ctx->pc = 0x1FB490u;
    // 0x1fb490: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb494: 0xc4414d74  lwc1        $f1, 0x4D74($v0)
    ctx->pc = 0x1fb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb498: 0xc4604d84  lwc1        $f0, 0x4D84($v1)
    ctx->pc = 0x1fb498u;
    { uint32_t bits = FAST_READ32(0x224D84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb49c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1FB49Cu;
    {
        const bool branch_taken_0x1fb49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB49Cu;
        // 0x1fb4a0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb49c) {
            ctx->pc = 0x1FB6CCu;
            return;
        }
    }
    ctx->pc = 0x1FB4A4u;
}
