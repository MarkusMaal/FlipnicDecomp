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

// Function: entry_0019323c
// Address: 0x19323c - 0x193254
void entry_0019323c_0x19323c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019323c_0x19323c");
#endif

    switch (ctx->pc) {
        case 0x19324cu: goto label_19324c;
        default: break;
    }

    ctx->pc = 0x19323cu;

label_19323c:
    // 0x19323c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193240:
    // 0x193240: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193244:
    // 0x193244: 0x320f809  jalr        $t9
label_193248:
    if (ctx->pc == 0x193248u) {
        ctx->pc = 0x193248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193244u;
        // 0x193248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19324Cu;
        goto label_19324c;
    }
    ctx->pc = 0x193244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19324Cu);
        ctx->pc = 0x193248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193244u;
        // 0x193248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193244u, 0x19324Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19324Cu;
label_19324c:
    // 0x19324c: 0x10000012  b           . + 4 + (0x12 << 2)
label_193250:
    if (ctx->pc == 0x193250u) {
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19324Cu;
        // 0x193250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193254u;
        goto label_fallthrough_0x19324c;
    }
    ctx->pc = 0x19324Cu;
    {
        const bool branch_taken_0x19324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19324Cu;
        // 0x193250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19324c) {
            ctx->pc = 0x193298u;
            return;
        }
    }
label_fallthrough_0x19324c:
    ctx->pc = 0x193254u;
}
