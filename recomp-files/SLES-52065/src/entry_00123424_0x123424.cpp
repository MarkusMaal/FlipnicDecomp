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

// Function: entry_00123424
// Address: 0x123424 - 0x123444
void entry_00123424_0x123424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123424_0x123424");
#endif

    ctx->pc = 0x123424u;

    // 0x123424: 0x0  nop
    ctx->pc = 0x123424u;
    // NOP
    // 0x123428: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123428u;
    {
        const bool branch_taken_0x123428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123428) {
            ctx->pc = 0x123444u;
            return;
        }
    }
    ctx->pc = 0x123430u;
    // 0x123430: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123438: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12343c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12343Cu;
    {
        const bool branch_taken_0x12343c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12343c) {
            ctx->pc = 0x123478u;
            return;
        }
    }
    ctx->pc = 0x123444u;
}
