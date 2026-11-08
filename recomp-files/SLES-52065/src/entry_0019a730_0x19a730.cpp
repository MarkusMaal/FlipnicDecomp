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

// Function: entry_0019a730
// Address: 0x19a730 - 0x19a754
void entry_0019a730_0x19a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a730_0x19a730");
#endif

    ctx->pc = 0x19a730u;

label_19a730:
    // 0x19a730: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a734:
    if (ctx->pc == 0x19A734u) {
        ctx->pc = 0x19A738u;
        goto label_19a738;
    }
    ctx->pc = 0x19A730u;
    {
        const bool branch_taken_0x19a730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a730) {
            ctx->pc = 0x19A754u;
            return;
        }
    }
    ctx->pc = 0x19A738u;
label_19a738:
    // 0x19a738: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a73c:
    if (ctx->pc == 0x19A73Cu) {
        ctx->pc = 0x19A740u;
        goto label_19a740;
    }
    ctx->pc = 0x19A738u;
    {
        const bool branch_taken_0x19a738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a738) {
            ctx->pc = 0x19A754u;
            return;
        }
    }
    ctx->pc = 0x19A740u;
label_19a740:
    // 0x19a740: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a744:
    // 0x19a744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a748:
    // 0x19a748: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a74c:
    // 0x19a74c: 0x320f809  jalr        $t9
label_19a750:
    if (ctx->pc == 0x19A750u) {
        ctx->pc = 0x19A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A74Cu;
        // 0x19a750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A754u;
        goto label_fallthrough_0x19a74c;
    }
    ctx->pc = 0x19A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A754u);
        ctx->pc = 0x19A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A74Cu;
        // 0x19a750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A74Cu, 0x19A754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19a74c:
    ctx->pc = 0x19A754u;
}
