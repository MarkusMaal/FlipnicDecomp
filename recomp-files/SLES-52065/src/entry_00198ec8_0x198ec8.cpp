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

// Function: entry_00198ec8
// Address: 0x198ec8 - 0x198eec
void entry_00198ec8_0x198ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ec8_0x198ec8");
#endif

    switch (ctx->pc) {
        case 0x198ed0u: goto label_198ed0;
        default: break;
    }

    ctx->pc = 0x198ec8u;

    // 0x198ec8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x198EC8u;
    SET_GPR_U32(ctx, 31, 0x198ED0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x198EC8u, 0x198ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ED0u;
label_198ed0:
    // 0x198ed0: 0xae820810  sw          $v0, 0x810($s4)
    ctx->pc = 0x198ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2064), GPR_U32(ctx, 2));
    // 0x198ed4: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x198ed8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198ED8u;
    {
        const bool branch_taken_0x198ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ed8) {
            ctx->pc = 0x198EECu;
            return;
        }
    }
    ctx->pc = 0x198EE0u;
    // 0x198ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ee4: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x198EE4u;
    SET_GPR_U32(ctx, 31, 0x198EECu);
    ctx->pc = 0x198EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EE4u;
    // 0x198ee8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x198EE4u, 0x198EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EECu;
}
