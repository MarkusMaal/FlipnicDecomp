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

// Function: entry_00116a80
// Address: 0x116a80 - 0x116a9c
void entry_00116a80_0x116a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a80_0x116a80");
#endif

    ctx->pc = 0x116a80u;

    // 0x116a80: 0x2881026f  slti        $at, $a0, 0x26F
    ctx->pc = 0x116a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x116a84: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x116A84u;
    {
        const bool branch_taken_0x116a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A84u;
        // 0x116a88: 0x45080  sll         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a84) {
            ctx->pc = 0x116AECu;
            return;
        }
    }
    ctx->pc = 0x116A8Cu;
    // 0x116a8c: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x116a90: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116a94: 0x2529cce0  addiu       $t1, $t1, -0x3320
    ctx->pc = 0x116a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954208));
    // 0x116a98: 0x27858018  addiu       $a1, $gp, -0x7FE8
    ctx->pc = 0x116a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
    ctx->pc = 0x116a9cu;
}
