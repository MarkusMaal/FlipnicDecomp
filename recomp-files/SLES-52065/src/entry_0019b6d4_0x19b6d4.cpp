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

// Function: entry_0019b6d4
// Address: 0x19b6d4 - 0x19b6f0
void entry_0019b6d4_0x19b6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6d4_0x19b6d4");
#endif

    ctx->pc = 0x19b6d4u;

label_19b6d4:
    // 0x19b6d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19b6d8:
    if (ctx->pc == 0x19B6D8u) {
        ctx->pc = 0x19B6DCu;
        goto label_19b6dc;
    }
    ctx->pc = 0x19B6D4u;
    {
        const bool branch_taken_0x19b6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6d4) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B6DCu;
label_19b6dc:
    // 0x19b6dc: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19b6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19b6e0:
    // 0x19b6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b6e4:
    // 0x19b6e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19b6e8:
    // 0x19b6e8: 0x320f809  jalr        $t9
label_19b6ec:
    if (ctx->pc == 0x19B6ECu) {
        ctx->pc = 0x19B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6E8u;
        // 0x19b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6F0u;
        goto label_fallthrough_0x19b6e8;
    }
    ctx->pc = 0x19B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B6F0u);
        ctx->pc = 0x19B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6E8u;
        // 0x19b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B6E8u, 0x19B6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19b6e8:
    ctx->pc = 0x19B6F0u;
}
