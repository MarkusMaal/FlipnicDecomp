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

// Function: entry_001ffa30
// Address: 0x1ffa30 - 0x1ffa4c
void entry_001ffa30_0x1ffa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa30_0x1ffa30");
#endif

    ctx->pc = 0x1ffa30u;

    // 0x1ffa30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ffa34: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ffa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ffa38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ffa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ffa3c: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFA3Cu;
    {
        const bool branch_taken_0x1ffa3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffa3c) {
            ctx->pc = 0x1FFA68u;
            return;
        }
    }
    ctx->pc = 0x1FFA44u;
    // 0x1ffa44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ffa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ffa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1ffa4cu;
}
