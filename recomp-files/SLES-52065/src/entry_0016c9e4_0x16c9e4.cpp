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

// Function: entry_0016c9e4
// Address: 0x16c9e4 - 0x16ca04
void entry_0016c9e4_0x16c9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c9e4_0x16c9e4");
#endif

    ctx->pc = 0x16c9e4u;

label_16c9e4:
    // 0x16c9e4: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16c9e8:
    // 0x16c9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c9ec:
    // 0x16c9ec: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16c9f0:
    // 0x16c9f0: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16c9f4:
    // 0x16c9f4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c9f8:
    // 0x16c9f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c9fc:
    // 0x16c9fc: 0x320f809  jalr        $t9
label_16ca00:
    if (ctx->pc == 0x16CA00u) {
        ctx->pc = 0x16CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9FCu;
        // 0x16ca00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA04u;
        goto label_fallthrough_0x16c9fc;
    }
    ctx->pc = 0x16C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CA04u);
        ctx->pc = 0x16CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9FCu;
        // 0x16ca00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C9FCu, 0x16CA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16c9fc:
    ctx->pc = 0x16CA04u;
}
