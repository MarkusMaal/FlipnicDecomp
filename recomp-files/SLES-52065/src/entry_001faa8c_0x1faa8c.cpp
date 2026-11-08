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

// Function: entry_001faa8c
// Address: 0x1faa8c - 0x1faab0
void entry_001faa8c_0x1faa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa8c_0x1faa8c");
#endif

    ctx->pc = 0x1faa8cu;

    // 0x1faa8c: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FAA8Cu;
    {
        const bool branch_taken_0x1faa8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA8Cu;
        // 0x1faa90: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa8c) {
            ctx->pc = 0x1FAB98u;
            return;
        }
    }
    ctx->pc = 0x1FAA94u;
    // 0x1faa94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa98: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faa9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faaa0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAAA0u;
    {
        const bool branch_taken_0x1faaa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAA0u;
        // 0x1faaa4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaa0) {
            ctx->pc = 0x1FAAD4u;
            return;
        }
    }
    ctx->pc = 0x1FAAA8u;
    // 0x1faaa8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1faaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1faaac: 0x0  nop
    ctx->pc = 0x1faaacu;
    // NOP
    ctx->pc = 0x1faab0u;
}
