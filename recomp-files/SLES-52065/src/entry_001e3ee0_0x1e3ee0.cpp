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

// Function: entry_001e3ee0
// Address: 0x1e3ee0 - 0x1e3f10
void entry_001e3ee0_0x1e3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3ee0_0x1e3ee0");
#endif

    switch (ctx->pc) {
        case 0x1e3efcu: goto label_1e3efc;
        default: break;
    }

    ctx->pc = 0x1e3ee0u;

label_1e3ee0:
    // 0x1e3ee0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3ee4:
    // 0x1e3ee4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e3ee8:
    if (ctx->pc == 0x1E3EE8u) {
        ctx->pc = 0x1E3EECu;
        goto label_1e3eec;
    }
    ctx->pc = 0x1E3EE4u;
    {
        const bool branch_taken_0x1e3ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ee4) {
            ctx->pc = 0x1E3F28u;
            return;
        }
    }
    ctx->pc = 0x1E3EECu;
label_1e3eec:
    // 0x1e3eec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e3eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ef0:
    // 0x1e3ef0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e3ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e3ef4:
    // 0x1e3ef4: 0x320f809  jalr        $t9
label_1e3ef8:
    if (ctx->pc == 0x1E3EF8u) {
        ctx->pc = 0x1E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EF4u;
        // 0x1e3ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EFCu;
        goto label_1e3efc;
    }
    ctx->pc = 0x1E3EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3EFCu);
        ctx->pc = 0x1E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EF4u;
        // 0x1e3ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3EF4u, 0x1E3EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3EFCu;
label_1e3efc:
    // 0x1e3efc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3f00:
    // 0x1e3f00: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e3f04:
    if (ctx->pc == 0x1E3F04u) {
        ctx->pc = 0x1E3F08u;
        goto label_1e3f08;
    }
    ctx->pc = 0x1E3F00u;
    {
        const bool branch_taken_0x1e3f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3f00) {
            ctx->pc = 0x1E3F10u;
            return;
        }
    }
    ctx->pc = 0x1E3F08u;
label_1e3f08:
    // 0x1e3f08: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e3f0c:
    if (ctx->pc == 0x1E3F0Cu) {
        ctx->pc = 0x1E3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F08u;
        // 0x1e3f0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F10u;
        goto label_fallthrough_0x1e3f08;
    }
    ctx->pc = 0x1E3F08u;
    {
        const bool branch_taken_0x1e3f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F08u;
        // 0x1e3f0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f08) {
            ctx->pc = 0x1E3FDCu;
            return;
        }
    }
label_fallthrough_0x1e3f08:
    ctx->pc = 0x1E3F10u;
}
