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

// Function: entry_001b1298
// Address: 0x1b1298 - 0x1b12c8
void entry_001b1298_0x1b1298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1298_0x1b1298");
#endif

    switch (ctx->pc) {
        case 0x1b12b0u: goto label_1b12b0;
        default: break;
    }

    ctx->pc = 0x1b1298u;

label_1b1298:
    // 0x1b1298: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b129c:
    // 0x1b129c: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b12a0:
    // 0x1b12a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b12a4:
    // 0x1b12a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b12a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b12a8:
    // 0x1b12a8: 0x320f809  jalr        $t9
label_1b12ac:
    if (ctx->pc == 0x1B12ACu) {
        ctx->pc = 0x1B12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A8u;
        // 0x1b12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12B0u;
        goto label_1b12b0;
    }
    ctx->pc = 0x1B12A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B12B0u);
        ctx->pc = 0x1B12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A8u;
        // 0x1b12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B12A8u, 0x1B12B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B12B0u;
label_1b12b0:
    // 0x1b12b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b12b4:
    // 0x1b12b4: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1b12b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b12b8:
    // 0x1b12b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1b12bc:
    if (ctx->pc == 0x1B12BCu) {
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C0u;
        goto label_1b12c0;
    }
    ctx->pc = 0x1B12B8u;
    {
        const bool branch_taken_0x1b12b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12b8) {
            ctx->pc = 0x1B1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1b12c4:
    if (ctx->pc == 0x1B12C4u) {
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C8u;
        goto label_fallthrough_0x1b12c0;
    }
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B152Cu;
            return;
        }
    }
label_fallthrough_0x1b12c0:
    ctx->pc = 0x1B12C8u;
}
