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

// Function: entry_001a2364
// Address: 0x1a2364 - 0x1a2388
void entry_001a2364_0x1a2364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2364_0x1a2364");
#endif

    ctx->pc = 0x1a2364u;

    // 0x1a2364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2368: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A2388u;
            return;
        }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a2374: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1a2374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a2378: 0xace20674  sw          $v0, 0x674($a3)
    ctx->pc = 0x1a2378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1652), GPR_U32(ctx, 2));
    // 0x1a237c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1a2380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2380u;
    {
        const bool branch_taken_0x1a2380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2380u;
        // 0x1a2384: 0xace00774  sw          $zero, 0x774($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2380) {
            ctx->pc = 0x1A2390u;
            return;
        }
    }
    ctx->pc = 0x1A2388u;
}
