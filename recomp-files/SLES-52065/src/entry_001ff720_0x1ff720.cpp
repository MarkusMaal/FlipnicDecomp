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

// Function: entry_001ff720
// Address: 0x1ff720 - 0x1ff73c
void entry_001ff720_0x1ff720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff720_0x1ff720");
#endif

    ctx->pc = 0x1ff720u;

    // 0x1ff720: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff724: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ff72c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF72Cu;
    {
        const bool branch_taken_0x1ff72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff72c) {
            ctx->pc = 0x1FF750u;
            return;
        }
    }
    ctx->pc = 0x1FF734u;
    // 0x1ff734: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1ff73cu;
}
