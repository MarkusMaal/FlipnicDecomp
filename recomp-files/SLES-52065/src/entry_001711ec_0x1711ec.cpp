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

// Function: entry_001711ec
// Address: 0x1711ec - 0x1711fc
void entry_001711ec_0x1711ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001711ec_0x1711ec");
#endif

    ctx->pc = 0x1711ecu;

    // 0x1711ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1711ECu;
    {
        const bool branch_taken_0x1711ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711ECu;
        // 0x1711f0: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711ec) {
            ctx->pc = 0x1711FCu;
            return;
        }
    }
    ctx->pc = 0x1711F4u;
    // 0x1711f4: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1711f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1711f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1711f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1711fcu;
}
