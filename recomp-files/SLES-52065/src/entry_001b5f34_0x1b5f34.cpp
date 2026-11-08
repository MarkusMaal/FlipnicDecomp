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

// Function: entry_001b5f34
// Address: 0x1b5f34 - 0x1b5f74
void entry_001b5f34_0x1b5f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f34_0x1b5f34");
#endif

    switch (ctx->pc) {
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f68u: goto label_1b5f68;
        default: break;
    }

    ctx->pc = 0x1b5f34u;

    // 0x1b5f34: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1b5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1b5f38: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x1b5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1b5f3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5F3Cu;
    {
        const bool branch_taken_0x1b5f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F3Cu;
        // 0x1b5f40: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f3c) {
            ctx->pc = 0x1B5F74u;
            return;
        }
    }
    ctx->pc = 0x1B5F44u;
    // 0x1b5f44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5F44u;
    {
        const bool branch_taken_0x1b5f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f44) {
            ctx->pc = 0x1B5F74u;
            return;
        }
    }
    ctx->pc = 0x1B5F4Cu;
    // 0x1b5f4c: 0xc06d7f8  jal         func_1B5FE0
    ctx->pc = 0x1B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F54u);
    ctx->pc = 0x1B5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F4Cu;
    // 0x1b5f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FE0u, 0x1B5F4Cu, 0x1B5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F54u;
label_1b5f54:
    // 0x1b5f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5f58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5F58u;
    {
        const bool branch_taken_0x1b5f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f58) {
            ctx->pc = 0x1B5F74u;
            return;
        }
    }
    ctx->pc = 0x1B5F60u;
    // 0x1b5f60: 0xc06d7f8  jal         func_1B5FE0
    ctx->pc = 0x1B5F60u;
    SET_GPR_U32(ctx, 31, 0x1B5F68u);
    ctx->pc = 0x1B5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FE0u, 0x1B5F60u, 0x1B5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F68u;
label_1b5f68:
    // 0x1b5f68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5f6c: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B5F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F74u);
    ctx->pc = 0x1B5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F6Cu;
    // 0x1b5f70: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B5F6Cu, 0x1B5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F74u;
}
