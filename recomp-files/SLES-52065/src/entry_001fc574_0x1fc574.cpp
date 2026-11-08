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

// Function: entry_001fc574
// Address: 0x1fc574 - 0x1fc590
void entry_001fc574_0x1fc574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc574_0x1fc574");
#endif

    ctx->pc = 0x1fc574u;

    // 0x1fc574: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC574u;
    {
        const bool branch_taken_0x1fc574 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1FC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC574u;
        // 0x1fc578: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc574) {
            ctx->pc = 0x1FC590u;
            return;
        }
    }
    ctx->pc = 0x1FC57Cu;
    // 0x1fc57c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1fc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1fc580: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fc584: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x1fc584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x1fc588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC588u;
    {
        const bool branch_taken_0x1fc588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC588u;
        // 0x1fc58c: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc588) {
            ctx->pc = 0x1FC5A8u;
            return;
        }
    }
    ctx->pc = 0x1FC590u;
}
