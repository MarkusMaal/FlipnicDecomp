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

// Function: entry_0019abb8
// Address: 0x19abb8 - 0x19abdc
void entry_0019abb8_0x19abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abb8_0x19abb8");
#endif

    ctx->pc = 0x19abb8u;

label_19abb8:
    // 0x19abb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19abbc:
    if (ctx->pc == 0x19ABBCu) {
        ctx->pc = 0x19ABC0u;
        goto label_19abc0;
    }
    ctx->pc = 0x19ABB8u;
    {
        const bool branch_taken_0x19abb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abb8) {
            ctx->pc = 0x19ABDCu;
            return;
        }
    }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19abc4:
    if (ctx->pc == 0x19ABC4u) {
        ctx->pc = 0x19ABC8u;
        goto label_19abc8;
    }
    ctx->pc = 0x19ABC0u;
    {
        const bool branch_taken_0x19abc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abc0) {
            ctx->pc = 0x19ABDCu;
            return;
        }
    }
    ctx->pc = 0x19ABC8u;
label_19abc8:
    // 0x19abc8: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19abc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19abcc:
    // 0x19abcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19abd0:
    // 0x19abd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19abd4:
    // 0x19abd4: 0x320f809  jalr        $t9
label_19abd8:
    if (ctx->pc == 0x19ABD8u) {
        ctx->pc = 0x19ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABD4u;
        // 0x19abd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABDCu;
        goto label_fallthrough_0x19abd4;
    }
    ctx->pc = 0x19ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19ABDCu);
        ctx->pc = 0x19ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABD4u;
        // 0x19abd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABD4u, 0x19ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19abd4:
    ctx->pc = 0x19ABDCu;
}
