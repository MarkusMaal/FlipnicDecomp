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

// Function: entry_0018b7fc
// Address: 0x18b7fc - 0x18b81c
void entry_0018b7fc_0x18b7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7fc_0x18b7fc");
#endif

    switch (ctx->pc) {
        case 0x18b80cu: goto label_18b80c;
        default: break;
    }

    ctx->pc = 0x18b7fcu;

label_18b7fc:
    // 0x18b7fc: 0x8ea60020  lw          $a2, 0x20($s5)
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b804: 0xc053224  jal         func_14C890
    ctx->pc = 0x18B804u;
    SET_GPR_U32(ctx, 31, 0x18B80Cu);
    ctx->pc = 0x18B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B804u;
    // 0x18b808: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C890u, 0x18B804u, 0x18B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B80Cu;
label_18b80c:
    // 0x18b80c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18b810: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x18b810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b814: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B814u;
    {
        const bool branch_taken_0x18b814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B814u;
        // 0x18b818: 0x26b50024  addiu       $s5, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b814) {
            ctx->pc = 0x18B7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b7fc;
        }
    }
    ctx->pc = 0x18B81Cu;
}
