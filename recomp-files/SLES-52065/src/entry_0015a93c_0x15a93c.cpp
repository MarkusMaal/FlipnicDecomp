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

// Function: entry_0015a93c
// Address: 0x15a93c - 0x15a964
void entry_0015a93c_0x15a93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a93c_0x15a93c");
#endif

    switch (ctx->pc) {
        case 0x15a950u: goto label_15a950;
        default: break;
    }

    ctx->pc = 0x15a93cu;

label_15a93c:
    // 0x15a93c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a940:
    // 0x15a940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a944:
    // 0x15a944: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15a948:
    // 0x15a948: 0x320f809  jalr        $t9
label_15a94c:
    if (ctx->pc == 0x15A94Cu) {
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A950u;
        goto label_15a950;
    }
    ctx->pc = 0x15A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15A950u);
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A948u, 0x15A950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A950u;
label_15a950:
    // 0x15a950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a954:
    // 0x15a954: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_15a958:
    if (ctx->pc == 0x15A958u) {
        ctx->pc = 0x15A95Cu;
        goto label_15a95c;
    }
    ctx->pc = 0x15A954u;
    {
        const bool branch_taken_0x15a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a954) {
            ctx->pc = 0x15A968u;
            return;
        }
    }
    ctx->pc = 0x15A95Cu;
label_15a95c:
    // 0x15a95c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15a960:
    if (ctx->pc == 0x15A960u) {
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A964u;
        goto label_fallthrough_0x15a95c;
    }
    ctx->pc = 0x15A95Cu;
    {
        const bool branch_taken_0x15a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a95c) {
            ctx->pc = 0x15A968u;
            return;
        }
    }
label_fallthrough_0x15a95c:
    ctx->pc = 0x15A964u;
}
