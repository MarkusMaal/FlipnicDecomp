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

// Function: entry_001e573c
// Address: 0x1e573c - 0x1e5750
void entry_001e573c_0x1e573c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e573c_0x1e573c");
#endif

    ctx->pc = 0x1e573cu;

    // 0x1e573c: 0x0  nop
    ctx->pc = 0x1e573cu;
    // NOP
    // 0x1e5740: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1e5744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5748: 0x1062ffa9  beq         $v1, $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1E5748u;
    {
        const bool branch_taken_0x1e5748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5748u;
        // 0x1e574c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5748) {
            ctx->pc = 0x1E55F0u;
            return;
        }
    }
    ctx->pc = 0x1E5750u;
}
