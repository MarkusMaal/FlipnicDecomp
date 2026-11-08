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

// Function: entry_001c2c38
// Address: 0x1c2c38 - 0x1c2c48
void entry_001c2c38_0x1c2c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2c38_0x1c2c38");
#endif

    ctx->pc = 0x1c2c38u;

    // 0x1c2c38: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1c2c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2C40u;
    {
        const bool branch_taken_0x1c2c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C40u;
        // 0x1c2c44: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c40) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2C48u;
}
