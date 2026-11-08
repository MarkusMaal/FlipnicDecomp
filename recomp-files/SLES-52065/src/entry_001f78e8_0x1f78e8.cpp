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

// Function: entry_001f78e8
// Address: 0x1f78e8 - 0x1f7900
void entry_001f78e8_0x1f78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f78e8_0x1f78e8");
#endif

    switch (ctx->pc) {
        case 0x1f78f0u: goto label_1f78f0;
        default: break;
    }

    ctx->pc = 0x1f78e8u;

    // 0x1f78e8: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F78E8u;
    SET_GPR_U32(ctx, 31, 0x1F78F0u);
    ctx->pc = 0x1F78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78E8u;
    // 0x1f78ec: 0x2604d680  addiu       $a0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F78E8u, 0x1F78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78F0u;
label_1f78f0:
    // 0x1f78f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F78F0u;
    {
        const bool branch_taken_0x1f78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F0u;
        // 0x1f78f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f0) {
            ctx->pc = 0x1F78E0u;
            return;
        }
    }
    ctx->pc = 0x1F78F8u;
    // 0x1f78f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F78F8u;
    {
        const bool branch_taken_0x1f78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F8u;
        // 0x1f78fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f8) {
            ctx->pc = 0x1F7910u;
            return;
        }
    }
    ctx->pc = 0x1F7900u;
}
