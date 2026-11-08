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

// Function: entry_00124cf8
// Address: 0x124cf8 - 0x124d24
void entry_00124cf8_0x124cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124cf8_0x124cf8");
#endif

    switch (ctx->pc) {
        case 0x124d0cu: goto label_124d0c;
        case 0x124d14u: goto label_124d14;
        case 0x124d20u: goto label_124d20;
        default: break;
    }

    ctx->pc = 0x124cf8u;

    // 0x124cf8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x124cfc: 0x24a5ead0  addiu       $a1, $a1, -0x1530
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961872));
    // 0x124d00: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124d04: 0xc0805c8  jal         func_201720
    ctx->pc = 0x124D04u;
    SET_GPR_U32(ctx, 31, 0x124D0Cu);
    ctx->pc = 0x124D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D04u;
    // 0x124d08: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x124D04u, 0x124D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D0Cu;
label_124d0c:
    // 0x124d0c: 0xc080d98  jal         func_203660
    ctx->pc = 0x124D0Cu;
    SET_GPR_U32(ctx, 31, 0x124D14u);
    ctx->pc = 0x124D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D0Cu;
    // 0x124d10: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x124D0Cu, 0x124D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D14u;
label_124d14:
    // 0x124d14: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x124d18: 0xc046c14  jal         func_11B050
    ctx->pc = 0x124D18u;
    SET_GPR_U32(ctx, 31, 0x124D20u);
    ctx->pc = 0x124D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D18u;
    // 0x124d1c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x124D18u, 0x124D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D20u;
label_124d20:
    // 0x124d20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x124d24u;
}
