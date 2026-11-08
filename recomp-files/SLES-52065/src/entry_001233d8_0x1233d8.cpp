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

// Function: entry_001233d8
// Address: 0x1233d8 - 0x1233f8
void entry_001233d8_0x1233d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001233d8_0x1233d8");
#endif

    ctx->pc = 0x1233d8u;

    // 0x1233d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1233dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233DCu;
    {
        const bool branch_taken_0x1233dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1233dc) {
            ctx->pc = 0x1233F8u;
            return;
        }
    }
    ctx->pc = 0x1233E4u;
    // 0x1233e4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1233e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1233e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1233ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1233ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1233f0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1233F0u;
    {
        const bool branch_taken_0x1233f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233f0) {
            ctx->pc = 0x123424u;
            return;
        }
    }
    ctx->pc = 0x1233F8u;
}
