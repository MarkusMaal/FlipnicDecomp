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

// Function: entry_001c1018
// Address: 0x1c1018 - 0x1c1030
void entry_001c1018_0x1c1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1018_0x1c1018");
#endif

    ctx->pc = 0x1c1018u;

    // 0x1c1018: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1c1018u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c101c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c101cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1020: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c1024: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1c1024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1028: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1028u;
    {
        const bool branch_taken_0x1c1028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1028u;
        // 0x1c102c: 0xa0400084  sb          $zero, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1028) {
            ctx->pc = 0x1C1090u;
            return;
        }
    }
    ctx->pc = 0x1C1030u;
}
