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

// Function: entry_00121eb4
// Address: 0x121eb4 - 0x121ed8
void entry_00121eb4_0x121eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121eb4_0x121eb4");
#endif

    ctx->pc = 0x121eb4u;

label_121eb4:
    // 0x121eb4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_121eb8:
    // 0x121eb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_121ebc:
    if (ctx->pc == 0x121EBCu) {
        ctx->pc = 0x121EC0u;
        goto label_121ec0;
    }
    ctx->pc = 0x121EB8u;
    {
        const bool branch_taken_0x121eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121eb8) {
            ctx->pc = 0x121ED8u;
            return;
        }
    }
    ctx->pc = 0x121EC0u;
label_121ec0:
    // 0x121ec0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121ec4:
    // 0x121ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121ec8:
    // 0x121ec8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_121ecc:
    // 0x121ecc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121ed0:
    // 0x121ed0: 0x320f809  jalr        $t9
label_121ed4:
    if (ctx->pc == 0x121ED4u) {
        ctx->pc = 0x121ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED0u;
        // 0x121ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ED8u;
        goto label_fallthrough_0x121ed0;
    }
    ctx->pc = 0x121ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121ED8u);
        ctx->pc = 0x121ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED0u;
        // 0x121ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121ED0u, 0x121ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x121ed0:
    ctx->pc = 0x121ED8u;
}
