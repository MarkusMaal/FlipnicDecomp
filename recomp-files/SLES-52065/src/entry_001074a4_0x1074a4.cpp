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

// Function: entry_001074a4
// Address: 0x1074a4 - 0x1074b4
void entry_001074a4_0x1074a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001074a4_0x1074a4");
#endif

    ctx->pc = 0x1074a4u;

    // 0x1074a4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1074A4u;
    {
        const bool branch_taken_0x1074a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074A4u;
        // 0x1074a8: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074a4) {
            ctx->pc = 0x1074B4u;
            return;
        }
    }
    ctx->pc = 0x1074ACu;
    // 0x1074ac: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1074acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1074b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1074b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1074b4u;
}
