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

// Function: entry_001ca06c
// Address: 0x1ca06c - 0x1ca090
void entry_001ca06c_0x1ca06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca06c_0x1ca06c");
#endif

    switch (ctx->pc) {
        case 0x1ca07cu: goto label_1ca07c;
        default: break;
    }

    ctx->pc = 0x1ca06cu;

    // 0x1ca06c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca074: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA074u;
    SET_GPR_U32(ctx, 31, 0x1CA07Cu);
    ctx->pc = 0x1CA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA074u;
    // 0x1ca078: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA074u, 0x1CA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA07Cu;
label_1ca07c:
    // 0x1ca07c: 0x26e30008  addiu       $v1, $s7, 0x8
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1ca080: 0x2e3082a  slt         $at, $s7, $v1
    ctx->pc = 0x1ca080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ca084: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x1CA084u;
    {
        const bool branch_taken_0x1ca084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA084u;
        // 0x1ca088: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca084) {
            ctx->pc = 0x1CA288u;
            return;
        }
    }
    ctx->pc = 0x1CA08Cu;
    // 0x1ca08c: 0x17f040  sll         $fp, $s7, 1
    ctx->pc = 0x1ca08cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x1ca090u;
}
