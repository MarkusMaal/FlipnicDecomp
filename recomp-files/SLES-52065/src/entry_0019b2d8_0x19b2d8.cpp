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

// Function: entry_0019b2d8
// Address: 0x19b2d8 - 0x19b318
void entry_0019b2d8_0x19b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b2d8_0x19b2d8");
#endif

    switch (ctx->pc) {
        case 0x19b300u: goto label_19b300;
        case 0x19b314u: goto label_19b314;
        default: break;
    }

    ctx->pc = 0x19b2d8u;

label_19b2d8:
    // 0x19b2d8: 0xae200320  sw          $zero, 0x320($s1)
    ctx->pc = 0x19b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 0));
label_19b2dc:
    // 0x19b2dc: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b2e0:
    // 0x19b2e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b2e4:
    if (ctx->pc == 0x19B2E4u) {
        ctx->pc = 0x19B2E8u;
        goto label_19b2e8;
    }
    ctx->pc = 0x19B2E0u;
    {
        const bool branch_taken_0x19b2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b2e0) {
            ctx->pc = 0x19B318u;
            return;
        }
    }
    ctx->pc = 0x19B2E8u;
label_19b2e8:
    // 0x19b2e8: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b2ec:
    // 0x19b2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b2f0:
    // 0x19b2f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b2f4:
    // 0x19b2f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b2f8:
    // 0x19b2f8: 0x320f809  jalr        $t9
label_19b2fc:
    if (ctx->pc == 0x19B2FCu) {
        ctx->pc = 0x19B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F8u;
        // 0x19b2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B300u;
        goto label_19b300;
    }
    ctx->pc = 0x19B2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B300u);
        ctx->pc = 0x19B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F8u;
        // 0x19b2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2F8u, 0x19B300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B300u;
label_19b300:
    // 0x19b300: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b304:
    // 0x19b304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b308:
    // 0x19b308: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b30c:
    // 0x19b30c: 0x320f809  jalr        $t9
label_19b310:
    if (ctx->pc == 0x19B310u) {
        ctx->pc = 0x19B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B30Cu;
        // 0x19b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B314u;
        goto label_19b314;
    }
    ctx->pc = 0x19B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B314u);
        ctx->pc = 0x19B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B30Cu;
        // 0x19b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B30Cu, 0x19B314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B314u;
label_19b314:
    // 0x19b314: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    ctx->pc = 0x19b318u;
}
