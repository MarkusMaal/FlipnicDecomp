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

// Function: entry_001233b8
// Address: 0x1233b8 - 0x1233d8
void entry_001233b8_0x1233b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001233b8_0x1233b8");
#endif

    ctx->pc = 0x1233b8u;

    // 0x1233b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1233bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233BCu;
    {
        const bool branch_taken_0x1233bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1233bc) {
            ctx->pc = 0x1233D8u;
            return;
        }
    }
    ctx->pc = 0x1233C4u;
    // 0x1233c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1233c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1233c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1233c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1233cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1233ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1233d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1233D0u;
    {
        const bool branch_taken_0x1233d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233d0) {
            ctx->pc = 0x123424u;
            return;
        }
    }
    ctx->pc = 0x1233D8u;
}
