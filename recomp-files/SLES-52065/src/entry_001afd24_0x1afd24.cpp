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

// Function: entry_001afd24
// Address: 0x1afd24 - 0x1afd44
void entry_001afd24_0x1afd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd24_0x1afd24");
#endif

    switch (ctx->pc) {
        case 0x1afd3cu: goto label_1afd3c;
        default: break;
    }

    ctx->pc = 0x1afd24u;

    // 0x1afd24: 0x3c33823  subu        $a3, $fp, $v1
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1afd28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1afd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1afd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd30: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1afd34: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1AFD34u;
    SET_GPR_U32(ctx, 31, 0x1AFD3Cu);
    ctx->pc = 0x1AFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD34u;
    // 0x1afd38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1AFD34u, 0x1AFD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD3Cu;
label_1afd3c:
    // 0x1afd3c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1AFD3Cu;
    {
        const bool branch_taken_0x1afd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd3c) {
            ctx->pc = 0x1AFEB0u;
            return;
        }
    }
    ctx->pc = 0x1AFD44u;
}
