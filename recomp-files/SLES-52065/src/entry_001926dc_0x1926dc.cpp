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

// Function: entry_001926dc
// Address: 0x1926dc - 0x1926fc
void entry_001926dc_0x1926dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001926dc_0x1926dc");
#endif

    ctx->pc = 0x1926dcu;

label_1926dc:
    // 0x1926dc: 0x0  nop
    ctx->pc = 0x1926dcu;
    // NOP
label_1926e0:
    // 0x1926e0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1926e4:
    if (ctx->pc == 0x1926E4u) {
        ctx->pc = 0x1926E8u;
        goto label_1926e8;
    }
    ctx->pc = 0x1926E0u;
    {
        const bool branch_taken_0x1926e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926e0) {
            ctx->pc = 0x1926FCu;
            return;
        }
    }
    ctx->pc = 0x1926E8u;
label_1926e8:
    // 0x1926e8: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1926e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1926ec:
    // 0x1926ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1926ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1926f0:
    // 0x1926f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1926f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1926f4:
    // 0x1926f4: 0x320f809  jalr        $t9
label_1926f8:
    if (ctx->pc == 0x1926F8u) {
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1926FCu;
        goto label_fallthrough_0x1926f4;
    }
    ctx->pc = 0x1926F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1926FCu);
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926F4u, 0x1926FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1926f4:
    ctx->pc = 0x1926FCu;
}
