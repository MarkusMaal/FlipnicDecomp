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

// Function: entry_00208b68
// Address: 0x208b68 - 0x208b8c
void entry_00208b68_0x208b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208b68_0x208b68");
#endif

    ctx->pc = 0x208b68u;

label_208b68:
    // 0x208b68: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x208b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x208b6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x208b70: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x208b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x208b74: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x208b74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x208b78: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x208b78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208b7c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208B7Cu;
    {
        const bool branch_taken_0x208b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b7c) {
            ctx->pc = 0x208B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208b68;
        }
    }
    ctx->pc = 0x208B84u;
    // 0x208b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208B84u;
    {
        const bool branch_taken_0x208b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B84u;
        // 0x208b88: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b84) {
            ctx->pc = 0x208B94u;
            return;
        }
    }
    ctx->pc = 0x208B8Cu;
}
