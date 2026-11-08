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

// Function: entry_00197360
// Address: 0x197360 - 0x197388
void entry_00197360_0x197360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197360_0x197360");
#endif

    switch (ctx->pc) {
        case 0x197378u: goto label_197378;
        case 0x197380u: goto label_197380;
        default: break;
    }

    ctx->pc = 0x197360u;

label_197360:
    // 0x197360: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197364:
    // 0x197364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197368:
    // 0x197368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19736c:
    // 0x19736c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197370:
    // 0x197370: 0x320f809  jalr        $t9
label_197374:
    if (ctx->pc == 0x197374u) {
        ctx->pc = 0x197374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197370u;
        // 0x197374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197378u;
        goto label_197378;
    }
    ctx->pc = 0x197370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197378u);
        ctx->pc = 0x197374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197370u;
        // 0x197374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197370u, 0x197378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197378u;
label_197378:
    // 0x197378: 0xc063e14  jal         func_18F850
label_19737c:
    if (ctx->pc == 0x19737Cu) {
        ctx->pc = 0x19737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197378u;
        // 0x19737c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197380u;
        goto label_197380;
    }
    ctx->pc = 0x197378u;
    SET_GPR_U32(ctx, 31, 0x197380u);
    ctx->pc = 0x19737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197378u;
    // 0x19737c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x197378u, 0x197380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197380u;
label_197380:
    // 0x197380: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_197384:
    if (ctx->pc == 0x197384u) {
        ctx->pc = 0x197388u;
        goto label_fallthrough_0x197380;
    }
    ctx->pc = 0x197380u;
    {
        const bool branch_taken_0x197380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197380) {
            ctx->pc = 0x197660u;
            return;
        }
    }
label_fallthrough_0x197380:
    ctx->pc = 0x197388u;
}
