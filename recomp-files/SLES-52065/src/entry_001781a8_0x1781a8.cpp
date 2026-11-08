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

// Function: entry_001781a8
// Address: 0x1781a8 - 0x1781c4
void entry_001781a8_0x1781a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781a8_0x1781a8");
#endif

    ctx->pc = 0x1781a8u;

    // 0x1781a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1781ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1781ACu;
    {
        const bool branch_taken_0x1781ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781ACu;
        // 0x1781b0: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781ac) {
            ctx->pc = 0x1781C4u;
            return;
        }
    }
    ctx->pc = 0x1781B4u;
    // 0x1781b4: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1781b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1781b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1781bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1781BCu;
    {
        const bool branch_taken_0x1781bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781BCu;
        // 0x1781c0: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781bc) {
            ctx->pc = 0x1781CCu;
            return;
        }
    }
    ctx->pc = 0x1781C4u;
}
