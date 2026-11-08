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

// Function: entry_001e4fc0
// Address: 0x1e4fc0 - 0x1e4ff0
void entry_001e4fc0_0x1e4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4fc0_0x1e4fc0");
#endif

    switch (ctx->pc) {
        case 0x1e4fdcu: goto label_1e4fdc;
        default: break;
    }

    ctx->pc = 0x1e4fc0u;

label_1e4fc0:
    // 0x1e4fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4fc4:
    // 0x1e4fc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e4fc8:
    if (ctx->pc == 0x1E4FC8u) {
        ctx->pc = 0x1E4FCCu;
        goto label_1e4fcc;
    }
    ctx->pc = 0x1E4FC4u;
    {
        const bool branch_taken_0x1e4fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4fc4) {
            ctx->pc = 0x1E5008u;
            return;
        }
    }
    ctx->pc = 0x1E4FCCu;
label_1e4fcc:
    // 0x1e4fcc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e4fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4fd0:
    // 0x1e4fd0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e4fd4:
    // 0x1e4fd4: 0x320f809  jalr        $t9
label_1e4fd8:
    if (ctx->pc == 0x1E4FD8u) {
        ctx->pc = 0x1E4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FD4u;
        // 0x1e4fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FDCu;
        goto label_1e4fdc;
    }
    ctx->pc = 0x1E4FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4FDCu);
        ctx->pc = 0x1E4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FD4u;
        // 0x1e4fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4FD4u, 0x1E4FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4FDCu;
label_1e4fdc:
    // 0x1e4fdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4fe0:
    // 0x1e4fe0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E4FF0u;
            return;
        }
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e4fec:
    if (ctx->pc == 0x1E4FECu) {
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FF0u;
        goto label_fallthrough_0x1e4fe8;
    }
    ctx->pc = 0x1E4FE8u;
    {
        const bool branch_taken_0x1e4fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe8) {
            ctx->pc = 0x1E50BCu;
            return;
        }
    }
label_fallthrough_0x1e4fe8:
    ctx->pc = 0x1E4FF0u;
}
