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

// Function: entry_00133a4c
// Address: 0x133a4c - 0x133a6c
void entry_00133a4c_0x133a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133a4c_0x133a4c");
#endif

    switch (ctx->pc) {
        case 0x133a68u: goto label_133a68;
        default: break;
    }

    ctx->pc = 0x133a4cu;

label_133a4c:
    // 0x133a4c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_133a50:
    if (ctx->pc == 0x133A50u) {
        ctx->pc = 0x133A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A4Cu;
        // 0x133a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A54u;
        goto label_133a54;
    }
    ctx->pc = 0x133A4Cu;
    {
        const bool branch_taken_0x133a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A4Cu;
        // 0x133a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a4c) {
            ctx->pc = 0x133A6Cu;
            return;
        }
    }
    ctx->pc = 0x133A54u;
label_133a54:
    // 0x133a54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_133a58:
    // 0x133a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133a5c:
    // 0x133a5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_133a60:
    // 0x133a60: 0x320f809  jalr        $t9
label_133a64:
    if (ctx->pc == 0x133A64u) {
        ctx->pc = 0x133A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A60u;
        // 0x133a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A68u;
        goto label_133a68;
    }
    ctx->pc = 0x133A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133A68u);
        ctx->pc = 0x133A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A60u;
        // 0x133a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133A60u, 0x133A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133A68u;
label_133a68:
    // 0x133a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133a6cu;
}
