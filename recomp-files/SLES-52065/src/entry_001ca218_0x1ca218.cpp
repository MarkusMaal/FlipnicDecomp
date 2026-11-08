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

// Function: entry_001ca218
// Address: 0x1ca218 - 0x1ca234
void entry_001ca218_0x1ca218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca218_0x1ca218");
#endif

    ctx->pc = 0x1ca218u;

    // 0x1ca218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca21c: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x1ca21cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca220: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca224: 0xa2820008  sb          $v0, 0x8($s4)
    ctx->pc = 0x1ca224u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca228: 0xa062007c  sb          $v0, 0x7C($v1)
    ctx->pc = 0x1ca228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca22c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CA22Cu;
    {
        const bool branch_taken_0x1ca22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0xa0620084  sb          $v0, 0x84($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca22c) {
            ctx->pc = 0x1CA260u;
            return;
        }
    }
    ctx->pc = 0x1CA234u;
}
