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

// Function: entry_001ffcd8
// Address: 0x1ffcd8 - 0x1ffcfc
void entry_001ffcd8_0x1ffcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffcd8_0x1ffcd8");
#endif

    ctx->pc = 0x1ffcd8u;

label_1ffcd8:
    // 0x1ffcd8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1ffcdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ffce0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1ffce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffce4: 0x0  nop
    ctx->pc = 0x1ffce4u;
    // NOP
    // 0x1ffce8: 0x0  nop
    ctx->pc = 0x1ffce8u;
    // NOP
    // 0x1ffcec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFCECu;
    {
        const bool branch_taken_0x1ffcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcec) {
            ctx->pc = 0x1FFCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffcd8;
        }
    }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFCF4u;
    {
        const bool branch_taken_0x1ffcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCF4u;
        // 0x1ffcf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcf4) {
            ctx->pc = 0x1FFD04u;
            return;
        }
    }
    ctx->pc = 0x1FFCFCu;
}
