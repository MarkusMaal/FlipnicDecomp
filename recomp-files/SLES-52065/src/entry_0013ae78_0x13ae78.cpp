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

// Function: entry_0013ae78
// Address: 0x13ae78 - 0x13ae94
void entry_0013ae78_0x13ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae78_0x13ae78");
#endif

    ctx->pc = 0x13ae78u;

    // 0x13ae78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AE78u;
    {
        const bool branch_taken_0x13ae78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae78) {
            ctx->pc = 0x13AE94u;
            return;
        }
    }
    ctx->pc = 0x13AE80u;
    // 0x13ae80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13ae84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13ae88: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13ae88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ae8c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AE8Cu;
    {
        const bool branch_taken_0x13ae8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae8c) {
            ctx->pc = 0x13AEB4u;
            return;
        }
    }
    ctx->pc = 0x13AE94u;
}
