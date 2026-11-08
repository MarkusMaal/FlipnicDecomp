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

// Function: entry_00130750
// Address: 0x130750 - 0x130774
void entry_00130750_0x130750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130750_0x130750");
#endif

    switch (ctx->pc) {
        case 0x13076cu: goto label_13076c;
        default: break;
    }

    ctx->pc = 0x130750u;

label_130750:
    // 0x130750: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_130754:
    if (ctx->pc == 0x130754u) {
        ctx->pc = 0x130758u;
        goto label_130758;
    }
    ctx->pc = 0x130750u;
    {
        const bool branch_taken_0x130750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x130750) {
            ctx->pc = 0x13079Cu;
            return;
        }
    }
    ctx->pc = 0x130758u;
label_130758:
    // 0x130758: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13075c:
    // 0x13075c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130760:
    // 0x130760: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x130760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130764:
    // 0x130764: 0x320f809  jalr        $t9
label_130768:
    if (ctx->pc == 0x130768u) {
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13076Cu;
        goto label_13076c;
    }
    ctx->pc = 0x130764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13076Cu);
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130764u, 0x13076Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13076Cu;
label_13076c:
    // 0x13076c: 0x1000000b  b           . + 4 + (0xB << 2)
label_130770:
    if (ctx->pc == 0x130770u) {
        ctx->pc = 0x130774u;
        goto label_fallthrough_0x13076c;
    }
    ctx->pc = 0x13076Cu;
    {
        const bool branch_taken_0x13076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13076c) {
            ctx->pc = 0x13079Cu;
            return;
        }
    }
label_fallthrough_0x13076c:
    ctx->pc = 0x130774u;
}
