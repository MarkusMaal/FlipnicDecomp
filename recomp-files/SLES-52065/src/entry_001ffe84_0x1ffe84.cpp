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

// Function: entry_001ffe84
// Address: 0x1ffe84 - 0x1ffe98
void entry_001ffe84_0x1ffe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe84_0x1ffe84");
#endif

    ctx->pc = 0x1ffe84u;

    // 0x1ffe84: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1ffe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ffe88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE88u;
    {
        const bool branch_taken_0x1ffe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE88u;
        // 0x1ffe8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe88) {
            ctx->pc = 0x1FFE98u;
            return;
        }
    }
    ctx->pc = 0x1FFE90u;
    // 0x1ffe90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ffe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffe94: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x1ffe98u;
}
