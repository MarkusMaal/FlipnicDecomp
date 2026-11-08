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

// Function: entry_0015cb40
// Address: 0x15cb40 - 0x15cb50
void entry_0015cb40_0x15cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb40_0x15cb40");
#endif

    ctx->pc = 0x15cb40u;

    // 0x15cb40: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x15cb40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cb44: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CB44u;
    {
        const bool branch_taken_0x15cb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb44) {
            ctx->pc = 0x15CB6Cu;
            return;
        }
    }
    ctx->pc = 0x15CB4Cu;
    // 0x15cb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15cb50u;
}
