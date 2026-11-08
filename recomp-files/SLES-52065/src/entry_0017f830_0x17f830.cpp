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

// Function: entry_0017f830
// Address: 0x17f830 - 0x17f848
void entry_0017f830_0x17f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f830_0x17f830");
#endif

    ctx->pc = 0x17f830u;

    // 0x17f830: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F830u;
    {
        const bool branch_taken_0x17f830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f830) {
            ctx->pc = 0x17F848u;
            return;
        }
    }
    ctx->pc = 0x17F838u;
    // 0x17f838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f83c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17f840: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f844: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17f844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x17f848u;
}
