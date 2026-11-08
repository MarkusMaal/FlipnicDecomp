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

// Function: entry_00123260
// Address: 0x123260 - 0x123280
void entry_00123260_0x123260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123260_0x123260");
#endif

    ctx->pc = 0x123260u;

    // 0x123260: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123264: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123264u;
    {
        const bool branch_taken_0x123264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123264) {
            ctx->pc = 0x123280u;
            return;
        }
    }
    ctx->pc = 0x12326Cu;
    // 0x12326c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123270: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123274: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123278: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x123278u;
    {
        const bool branch_taken_0x123278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123278) {
            ctx->pc = 0x1232ACu;
            return;
        }
    }
    ctx->pc = 0x123280u;
}
