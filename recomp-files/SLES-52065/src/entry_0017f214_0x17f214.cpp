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

// Function: entry_0017f214
// Address: 0x17f214 - 0x17f238
void entry_0017f214_0x17f214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f214_0x17f214");
#endif

    switch (ctx->pc) {
        case 0x17f22cu: goto label_17f22c;
        default: break;
    }

    ctx->pc = 0x17f214u;

    // 0x17f214: 0x0  nop
    ctx->pc = 0x17f214u;
    // NOP
    // 0x17f218: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F218u;
    {
        const bool branch_taken_0x17f218 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f218) {
            ctx->pc = 0x17F238u;
            return;
        }
    }
    ctx->pc = 0x17F220u;
    // 0x17f220: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f224: 0xc04c6f0  jal         func_131BC0
    ctx->pc = 0x17F224u;
    SET_GPR_U32(ctx, 31, 0x17F22Cu);
    ctx->pc = 0x17F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F224u;
    // 0x17f228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17F224u, 0x17F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F22Cu;
label_17f22c:
    // 0x17f22c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f230: 0xc04c6f0  jal         func_131BC0
    ctx->pc = 0x17F230u;
    SET_GPR_U32(ctx, 31, 0x17F238u);
    ctx->pc = 0x17F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F230u;
    // 0x17f234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17F230u, 0x17F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F238u;
}
