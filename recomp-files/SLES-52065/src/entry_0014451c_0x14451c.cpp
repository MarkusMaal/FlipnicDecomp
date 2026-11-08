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

// Function: entry_0014451c
// Address: 0x14451c - 0x14454c
void entry_0014451c_0x14451c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014451c_0x14451c");
#endif

    switch (ctx->pc) {
        case 0x144528u: goto label_144528;
        case 0x144534u: goto label_144534;
        default: break;
    }

    ctx->pc = 0x14451cu;

    // 0x14451c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x144520: 0xc0505fc  jal         func_1417F0
    ctx->pc = 0x144520u;
    SET_GPR_U32(ctx, 31, 0x144528u);
    ctx->pc = 0x144524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144520u;
    // 0x144524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417F0u, 0x144520u, 0x144528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144528u;
label_144528:
    // 0x144528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14452c: 0xc04cec4  jal         func_133B10
    ctx->pc = 0x14452Cu;
    SET_GPR_U32(ctx, 31, 0x144534u);
    ctx->pc = 0x144530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14452Cu;
    // 0x144530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B10u, 0x14452Cu, 0x144534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144534u;
label_144534:
    // 0x144534: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x144534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x144538: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x144538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14453c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14453Cu;
    {
        const bool branch_taken_0x14453c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x144540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14453Cu;
        // 0x144540: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14453c) {
            ctx->pc = 0x144550u;
            return;
        }
    }
    ctx->pc = 0x144544u;
    // 0x144544: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144544u;
    SET_GPR_U32(ctx, 31, 0x14454Cu);
    ctx->pc = 0x144548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144544u;
    // 0x144548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144544u, 0x14454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14454Cu;
}
