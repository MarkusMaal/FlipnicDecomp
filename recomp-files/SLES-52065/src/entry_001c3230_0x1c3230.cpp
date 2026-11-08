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

// Function: entry_001c3230
// Address: 0x1c3230 - 0x1c3260
void entry_001c3230_0x1c3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3230_0x1c3230");
#endif

    switch (ctx->pc) {
        case 0x1c3238u: goto label_1c3238;
        case 0x1c3254u: goto label_1c3254;
        default: break;
    }

    ctx->pc = 0x1c3230u;

    // 0x1c3230: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C3230u;
    SET_GPR_U32(ctx, 31, 0x1C3238u);
    ctx->pc = 0x1C3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3230u;
    // 0x1c3234: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C3230u, 0x1C3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3238u;
label_1c3238:
    // 0x1c3238: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3238u;
    {
        const bool branch_taken_0x1c3238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3238u;
        // 0x1c323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3238) {
            ctx->pc = 0x1C32B4u;
            return;
        }
    }
    ctx->pc = 0x1C3240u;
    // 0x1c3240: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c3244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3244u;
    {
        const bool branch_taken_0x1c3244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3244u;
        // 0x1c3248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3244) {
            ctx->pc = 0x1C3260u;
            return;
        }
    }
    ctx->pc = 0x1C324Cu;
    // 0x1c324c: 0xc0711c8  jal         func_1C4720
    ctx->pc = 0x1C324Cu;
    SET_GPR_U32(ctx, 31, 0x1C3254u);
    ctx->pc = 0x1C3250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C324Cu;
    // 0x1c3250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4720u, 0x1C324Cu, 0x1C3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3254u;
label_1c3254:
    // 0x1c3254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3258: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3258u;
    {
        const bool branch_taken_0x1c3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3258u;
        // 0x1c325c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3258) {
            ctx->pc = 0x1C32B0u;
            return;
        }
    }
    ctx->pc = 0x1C3260u;
}
