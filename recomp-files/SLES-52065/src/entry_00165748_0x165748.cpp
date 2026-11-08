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

// Function: entry_00165748
// Address: 0x165748 - 0x16575c
void entry_00165748_0x165748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165748_0x165748");
#endif

    ctx->pc = 0x165748u;

    // 0x165748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16574c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x165750: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x165754: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x165754u;
    {
        const bool branch_taken_0x165754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165754u;
        // 0x165758: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165754) {
            ctx->pc = 0x1656C4u;
            return;
        }
    }
    ctx->pc = 0x16575Cu;
}
