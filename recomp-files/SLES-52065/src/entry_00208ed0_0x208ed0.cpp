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

// Function: entry_00208ed0
// Address: 0x208ed0 - 0x208ef8
void entry_00208ed0_0x208ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208ed0_0x208ed0");
#endif

    ctx->pc = 0x208ed0u;

    // 0x208ed0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x208ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x208ed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208ed8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208edc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x208EDCu;
    {
        const bool branch_taken_0x208edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EDCu;
        // 0x208ee0: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208edc) {
            ctx->pc = 0x208F20u;
            return;
        }
    }
    ctx->pc = 0x208EE4u;
    // 0x208ee4: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x208ee8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208eec: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x208eecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x208ef0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x208ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x208ef4: 0x0  nop
    ctx->pc = 0x208ef4u;
    // NOP
    ctx->pc = 0x208ef8u;
}
