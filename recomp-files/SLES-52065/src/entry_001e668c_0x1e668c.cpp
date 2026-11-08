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

// Function: entry_001e668c
// Address: 0x1e668c - 0x1e66a0
void entry_001e668c_0x1e668c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e668c_0x1e668c");
#endif

    ctx->pc = 0x1e668cu;

    // 0x1e668c: 0x0  nop
    ctx->pc = 0x1e668cu;
    // NOP
    // 0x1e6690: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1e6690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1e6694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6698: 0x1062ffa9  beq         $v1, $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1E6698u;
    {
        const bool branch_taken_0x1e6698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6698u;
        // 0x1e669c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6698) {
            ctx->pc = 0x1E6540u;
            return;
        }
    }
    ctx->pc = 0x1E66A0u;
}
