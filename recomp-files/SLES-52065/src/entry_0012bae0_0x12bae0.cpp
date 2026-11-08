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

// Function: entry_0012bae0
// Address: 0x12bae0 - 0x12bb04
void entry_0012bae0_0x12bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bae0_0x12bae0");
#endif

    ctx->pc = 0x12bae0u;

label_12bae0:
    // 0x12bae0: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x12bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_12bae4:
    // 0x12bae4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x12bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12bae8:
    // 0x12bae8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_12baec:
    if (ctx->pc == 0x12BAECu) {
        ctx->pc = 0x12BAF0u;
        goto label_12baf0;
    }
    ctx->pc = 0x12BAE8u;
    {
        const bool branch_taken_0x12bae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bae8) {
            ctx->pc = 0x12BB04u;
            return;
        }
    }
    ctx->pc = 0x12BAF0u;
label_12baf0:
    // 0x12baf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12baf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12baf4:
    // 0x12baf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12baf8:
    // 0x12baf8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12bafc:
    // 0x12bafc: 0x320f809  jalr        $t9
label_12bb00:
    if (ctx->pc == 0x12BB00u) {
        ctx->pc = 0x12BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAFCu;
        // 0x12bb00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB04u;
        goto label_fallthrough_0x12bafc;
    }
    ctx->pc = 0x12BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12BB04u);
        ctx->pc = 0x12BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAFCu;
        // 0x12bb00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAFCu, 0x12BB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x12bafc:
    ctx->pc = 0x12BB04u;
}
