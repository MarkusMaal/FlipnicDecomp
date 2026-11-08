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

// Function: entry_0011a268
// Address: 0x11a268 - 0x11a2ac
void entry_0011a268_0x11a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a268_0x11a268");
#endif

    switch (ctx->pc) {
        case 0x11a270u: goto label_11a270;
        case 0x11a28cu: goto label_11a28c;
        default: break;
    }

    ctx->pc = 0x11a268u;

label_11a268:
    // 0x11a268: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x11A268u;
    SET_GPR_U32(ctx, 31, 0x11A270u);
    ctx->pc = 0x11A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A268u;
    // 0x11a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x11A268u, 0x11A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A270u;
label_11a270:
    // 0x11a270: 0x0  nop
    ctx->pc = 0x11a270u;
    // NOP
    // 0x11a274: 0x0  nop
    ctx->pc = 0x11a274u;
    // NOP
    // 0x11a278: 0x0  nop
    ctx->pc = 0x11a278u;
    // NOP
    // 0x11a27c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a268;
        }
    }
    ctx->pc = 0x11A284u;
    // 0x11a284: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A284u;
    SET_GPR_U32(ctx, 31, 0x11A28Cu);
    ctx->pc = 0x11A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A284u;
    // 0x11a288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A284u, 0x11A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A28Cu;
label_11a28c:
    // 0x11a28c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a294: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11a298: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x11a298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x11a29c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a2a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11a2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11A2A4u;
    {
        const bool branch_taken_0x11a2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A4u;
        // 0x11a2a8: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a4) {
            ctx->pc = 0x11A2C0u;
            return;
        }
    }
    ctx->pc = 0x11A2ACu;
}
