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

// Function: entry_001234e4
// Address: 0x1234e4 - 0x123510
void entry_001234e4_0x1234e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234e4_0x1234e4");
#endif

    ctx->pc = 0x1234e4u;

    // 0x1234e4: 0x0  nop
    ctx->pc = 0x1234e4u;
    // NOP
    // 0x1234e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1234ec: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1234ECu;
    {
        const bool branch_taken_0x1234ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1234ec) {
            ctx->pc = 0x123510u;
            return;
        }
    }
    ctx->pc = 0x1234F4u;
    // 0x1234f4: 0x10c0ff3e  beqz        $a2, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x1234F4u;
    {
        const bool branch_taken_0x1234f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234f4) {
            ctx->pc = 0x1231F0u;
            return;
        }
    }
    ctx->pc = 0x1234FCu;
    // 0x1234fc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123500: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123504: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123508: 0x1060ff39  beqz        $v1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x123508u;
    {
        const bool branch_taken_0x123508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123508) {
            ctx->pc = 0x1231F0u;
            return;
        }
    }
    ctx->pc = 0x123510u;
}
