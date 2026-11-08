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

// Function: entry_001a075c
// Address: 0x1a075c - 0x1a0798
void entry_001a075c_0x1a075c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a075c_0x1a075c");
#endif

    switch (ctx->pc) {
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0790u: goto label_1a0790;
        default: break;
    }

    ctx->pc = 0x1a075cu;

label_1a075c:
    // 0x1a075c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0760:
    // 0x1a0760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0764:
    // 0x1a0764: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a0764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a0768:
    // 0x1a0768: 0x320f809  jalr        $t9
label_1a076c:
    if (ctx->pc == 0x1A076Cu) {
        ctx->pc = 0x1A0770u;
        goto label_1a0770;
    }
    ctx->pc = 0x1A0768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0768u, 0x1A0770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0774:
    // 0x1a0774: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a0778:
    if (ctx->pc == 0x1A0778u) {
        ctx->pc = 0x1A077Cu;
        goto label_1a077c;
    }
    ctx->pc = 0x1A0774u;
    {
        const bool branch_taken_0x1a0774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0774) {
            ctx->pc = 0x1A0798u;
            return;
        }
    }
    ctx->pc = 0x1A077Cu;
label_1a077c:
    // 0x1a077c: 0xc04be08  jal         func_12F820
label_1a0780:
    if (ctx->pc == 0x1A0780u) {
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0784u;
        goto label_1a0784;
    }
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0788:
    // 0x1a0788: 0xc063e08  jal         func_18F820
label_1a078c:
    if (ctx->pc == 0x1A078Cu) {
        ctx->pc = 0x1A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0788u;
        // 0x1a078c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0790u;
        goto label_1a0790;
    }
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a0794:
    if (ctx->pc == 0x1A0794u) {
        ctx->pc = 0x1A0798u;
        goto label_fallthrough_0x1a0790;
    }
    ctx->pc = 0x1A0790u;
    {
        const bool branch_taken_0x1a0790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0790) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
label_fallthrough_0x1a0790:
    ctx->pc = 0x1A0798u;
}
