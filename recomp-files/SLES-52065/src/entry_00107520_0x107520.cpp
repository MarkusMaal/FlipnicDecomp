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

// Function: entry_00107520
// Address: 0x107520 - 0x10754c
void entry_00107520_0x107520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107520_0x107520");
#endif

    switch (ctx->pc) {
        case 0x10752cu: goto label_10752c;
        case 0x10753cu: goto label_10753c;
        default: break;
    }

    ctx->pc = 0x107520u;

    // 0x107520: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x107520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107524: 0xc05f750  jal         func_17DD40
    ctx->pc = 0x107524u;
    SET_GPR_U32(ctx, 31, 0x10752Cu);
    ctx->pc = 0x107528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107524u;
    // 0x107528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DD40u, 0x107524u, 0x10752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10752Cu;
label_10752c:
    // 0x10752c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x107530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107534: 0xc062d64  jal         func_18B590
    ctx->pc = 0x107534u;
    SET_GPR_U32(ctx, 31, 0x10753Cu);
    ctx->pc = 0x107538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107534u;
    // 0x107538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B590u, 0x107534u, 0x10753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10753Cu;
label_10753c:
    // 0x10753c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10753cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107544: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x107544u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x107548: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x107548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10754cu;
}
