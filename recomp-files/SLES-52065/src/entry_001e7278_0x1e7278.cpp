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

// Function: entry_001e7278
// Address: 0x1e7278 - 0x1e7298
void entry_001e7278_0x1e7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7278_0x1e7278");
#endif

    switch (ctx->pc) {
        case 0x1e7284u: goto label_1e7284;
        default: break;
    }

    ctx->pc = 0x1e7278u;

label_1e7278:
    // 0x1e7278: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1e7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1e727c: 0xc07a200  jal         func_1E8800
    ctx->pc = 0x1E727Cu;
    SET_GPR_U32(ctx, 31, 0x1E7284u);
    ctx->pc = 0x1E7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E727Cu;
    // 0x1e7280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8800u, 0x1E727Cu, 0x1E7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7284u;
label_1e7284:
    // 0x1e7284: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e7284u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7288: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e728c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1e728cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e7290: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E7290u;
    {
        const bool branch_taken_0x1e7290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7290) {
            ctx->pc = 0x1E7278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7278;
        }
    }
    ctx->pc = 0x1E7298u;
}
