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

// Function: entry_0018aa0c
// Address: 0x18aa0c - 0x18aa34
void entry_0018aa0c_0x18aa0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa0c_0x18aa0c");
#endif

    switch (ctx->pc) {
        case 0x18aa28u: goto label_18aa28;
        default: break;
    }

    ctx->pc = 0x18aa0cu;

    // 0x18aa0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa10: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x18aa14: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18aa18: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18aa1c: 0xac730040  sw          $s3, 0x40($v1)
    ctx->pc = 0x18aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 19));
    // 0x18aa20: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AA20u;
    SET_GPR_U32(ctx, 31, 0x18AA28u);
    ctx->pc = 0x18AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA20u;
    // 0x18aa24: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AA20u, 0x18AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA28u;
label_18aa28:
    // 0x18aa28: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x18aa2c: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AA2Cu;
    SET_GPR_U32(ctx, 31, 0x18AA34u);
    ctx->pc = 0x18AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA2Cu;
    // 0x18aa30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AA2Cu, 0x18AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA34u;
}
