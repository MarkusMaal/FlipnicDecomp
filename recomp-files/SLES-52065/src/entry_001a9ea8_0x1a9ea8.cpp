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

// Function: entry_001a9ea8
// Address: 0x1a9ea8 - 0x1a9ef8
void entry_001a9ea8_0x1a9ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9ea8_0x1a9ea8");
#endif

    switch (ctx->pc) {
        case 0x1a9ed0u: goto label_1a9ed0;
        default: break;
    }

    ctx->pc = 0x1a9ea8u;

label_1a9ea8:
    // 0x1a9ea8: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9eac:
    // 0x1a9eac: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x1a9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1a9eb0:
    // 0x1a9eb0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9eb4:
    // 0x1a9eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9eb8:
    // 0x1a9eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9ebc:
    // 0x1a9ebc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9ec0:
    // 0x1a9ec0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9ec4:
    // 0x1a9ec4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9ec8:
    // 0x1a9ec8: 0x320f809  jalr        $t9
label_1a9ecc:
    if (ctx->pc == 0x1A9ECCu) {
        ctx->pc = 0x1A9ED0u;
        goto label_1a9ed0;
    }
    ctx->pc = 0x1A9EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9EC8u, 0x1A9ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9ED0u;
label_1a9ed0:
    // 0x1a9ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9ed4:
    // 0x1a9ed4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9ed8:
    // 0x1a9ed8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a9edc:
    if (ctx->pc == 0x1A9EDCu) {
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EE0u;
        goto label_1a9ee0;
    }
    ctx->pc = 0x1A9ED8u;
    {
        const bool branch_taken_0x1a9ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ed8) {
            ctx->pc = 0x1A9EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ea8;
        }
    }
    ctx->pc = 0x1A9EE0u;
label_1a9ee0:
    // 0x1a9ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9ee4:
    // 0x1a9ee4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9ee8:
    // 0x1a9ee8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1a9eec:
    if (ctx->pc == 0x1A9EECu) {
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EF0u;
        goto label_1a9ef0;
    }
    ctx->pc = 0x1A9EE8u;
    {
        const bool branch_taken_0x1a9ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ee8) {
            ctx->pc = 0x1A9E38u;
            return;
        }
    }
    ctx->pc = 0x1A9EF0u;
label_1a9ef0:
    // 0x1a9ef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9ef4:
    // 0x1a9ef4: 0xaea206c4  sw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 2));
    ctx->pc = 0x1a9ef8u;
}
