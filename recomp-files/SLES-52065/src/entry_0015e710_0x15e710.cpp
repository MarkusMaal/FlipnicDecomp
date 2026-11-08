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

// Function: entry_0015e710
// Address: 0x15e710 - 0x15e738
void entry_0015e710_0x15e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e710_0x15e710");
#endif

    ctx->pc = 0x15e710u;

    // 0x15e710: 0x8ee32c1c  lw          $v1, 0x2C1C($s7)
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
    // 0x15e714: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x15e718: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15e71c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15e720: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15e724: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15e728: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e72c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x15e72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15e730: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E730u;
    {
        const bool branch_taken_0x15e730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e730) {
            ctx->pc = 0x15E750u;
            return;
        }
    }
    ctx->pc = 0x15E738u;
}
