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

// Function: entry_0018aa34
// Address: 0x18aa34 - 0x18aa70
void entry_0018aa34_0x18aa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa34_0x18aa34");
#endif

    switch (ctx->pc) {
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa5cu: goto label_18aa5c;
        default: break;
    }

    ctx->pc = 0x18aa34u;

label_18aa34:
    // 0x18aa34: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x18AA34u;
    SET_GPR_U32(ctx, 31, 0x18AA3Cu);
    ctx->pc = 0x18AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA34u;
    // 0x18aa38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x18AA34u, 0x18AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA3Cu;
label_18aa3c:
    // 0x18aa3c: 0x0  nop
    ctx->pc = 0x18aa3cu;
    // NOP
    // 0x18aa40: 0x0  nop
    ctx->pc = 0x18aa40u;
    // NOP
    // 0x18aa44: 0x0  nop
    ctx->pc = 0x18aa44u;
    // NOP
    // 0x18aa48: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AA48u;
    {
        const bool branch_taken_0x18aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa48) {
            ctx->pc = 0x18AA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa34;
        }
    }
    ctx->pc = 0x18AA50u;
    // 0x18aa50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa54: 0xc047988  jal         func_11E620
    ctx->pc = 0x18AA54u;
    SET_GPR_U32(ctx, 31, 0x18AA5Cu);
    ctx->pc = 0x18AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA54u;
    // 0x18aa58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x18AA54u, 0x18AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA5Cu;
label_18aa5c:
    // 0x18aa5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18aa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa60: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA60u;
    {
        const bool branch_taken_0x18aa60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA60u;
        // 0x18aa64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa60) {
            ctx->pc = 0x18AA70u;
            return;
        }
    }
    ctx->pc = 0x18AA68u;
    // 0x18aa68: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18AA68u;
    {
        const bool branch_taken_0x18aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA68u;
        // 0x18aa6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa68) {
            ctx->pc = 0x18AB4Cu;
            return;
        }
    }
    ctx->pc = 0x18AA70u;
}
