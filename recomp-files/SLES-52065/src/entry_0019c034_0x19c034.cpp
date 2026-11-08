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

// Function: entry_0019c034
// Address: 0x19c034 - 0x19c054
void entry_0019c034_0x19c034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c034_0x19c034");
#endif

    ctx->pc = 0x19c034u;

    // 0x19c034: 0x8e23093c  lw          $v1, 0x93C($s1)
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
    // 0x19c038: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C038u;
    {
        const bool branch_taken_0x19c038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0x8e220928  lw          $v0, 0x928($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c038) {
            ctx->pc = 0x19C054u;
            return;
        }
    }
    ctx->pc = 0x19C040u;
    // 0x19c040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c044: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c048: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19c048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c04c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x19C04Cu;
    SET_GPR_U32(ctx, 31, 0x19C054u);
    ctx->pc = 0x19C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C04Cu;
    // 0x19c050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19C04Cu, 0x19C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C054u;
}
