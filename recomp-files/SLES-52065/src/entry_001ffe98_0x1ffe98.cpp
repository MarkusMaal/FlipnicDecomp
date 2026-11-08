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

// Function: entry_001ffe98
// Address: 0x1ffe98 - 0x1ffeb0
void entry_001ffe98_0x1ffe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe98_0x1ffe98");
#endif

    ctx->pc = 0x1ffe98u;

    // 0x1ffe98: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE9Cu;
    {
        const bool branch_taken_0x1ffe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE9Cu;
        // 0x1ffea0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe9c) {
            ctx->pc = 0x1FFEB0u;
            return;
        }
    }
    ctx->pc = 0x1FFEA4u;
    // 0x1ffea4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ffea8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ffeac: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1ffeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x1ffeb0u;
}
