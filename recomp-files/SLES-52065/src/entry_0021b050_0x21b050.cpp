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

// Function: entry_0021b050
// Address: 0x21b050 - 0x21b068
void entry_0021b050_0x21b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b050_0x21b050");
#endif

    switch (ctx->pc) {
        case 0x21b058u: goto label_21b058;
        case 0x21b064u: goto label_21b064;
        default: break;
    }

    ctx->pc = 0x21b050u;

label_21b050:
    // 0x21b050: 0x40f809  jalr        $v0
label_21b054:
    if (ctx->pc == 0x21B054u) {
        ctx->pc = 0x21B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B050u;
        // 0x21b054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B058u;
        goto label_21b058;
    }
    ctx->pc = 0x21B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B058u);
        ctx->pc = 0x21B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B050u;
        // 0x21b054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B050u, 0x21B058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B058u;
label_21b058:
    // 0x21b058: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_21b05c:
    // 0x21b05c: 0x40f809  jalr        $v0
label_21b060:
    if (ctx->pc == 0x21B060u) {
        ctx->pc = 0x21B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B05Cu;
        // 0x21b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B064u;
        goto label_21b064;
    }
    ctx->pc = 0x21B05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B064u);
        ctx->pc = 0x21B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B05Cu;
        // 0x21b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B05Cu, 0x21B064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B064u;
label_21b064:
    // 0x21b064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x21b068u;
}
