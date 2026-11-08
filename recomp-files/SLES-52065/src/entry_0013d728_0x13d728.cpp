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

// Function: entry_0013d728
// Address: 0x13d728 - 0x13d760
void entry_0013d728_0x13d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d728_0x13d728");
#endif

    switch (ctx->pc) {
        case 0x13d730u: goto label_13d730;
        case 0x13d738u: goto label_13d738;
        default: break;
    }

    ctx->pc = 0x13d728u;

    // 0x13d728: 0xc061bd0  jal         func_186F40
    ctx->pc = 0x13D728u;
    SET_GPR_U32(ctx, 31, 0x13D730u);
    ctx->pc = 0x13D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D728u;
    // 0x13d72c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x13D728u, 0x13D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D730u;
label_13d730:
    // 0x13d730: 0xc061b50  jal         func_186D40
    ctx->pc = 0x13D730u;
    SET_GPR_U32(ctx, 31, 0x13D738u);
    ctx->pc = 0x13D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D730u;
    // 0x13d734: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13D730u, 0x13D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D738u;
label_13d738:
    // 0x13d738: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d73c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D768u;
            return;
        }
    }
    ctx->pc = 0x13D744u;
    // 0x13d744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d748: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D748u;
    {
        const bool branch_taken_0x13d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d748) {
            ctx->pc = 0x13D760u;
            return;
        }
    }
    ctx->pc = 0x13D750u;
    // 0x13d750: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x13D750u;
    {
        const bool branch_taken_0x13d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d750) {
            ctx->pc = 0x13D840u;
            return;
        }
    }
    ctx->pc = 0x13D758u;
    // 0x13d758: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D758u;
    {
        const bool branch_taken_0x13d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d758) {
            ctx->pc = 0x13D77Cu;
            return;
        }
    }
    ctx->pc = 0x13D760u;
}
