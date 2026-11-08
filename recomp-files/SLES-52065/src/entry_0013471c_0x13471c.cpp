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

// Function: entry_0013471c
// Address: 0x13471c - 0x13475c
void entry_0013471c_0x13471c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013471c_0x13471c");
#endif

    switch (ctx->pc) {
        case 0x134740u: goto label_134740;
        case 0x134758u: goto label_134758;
        default: break;
    }

    ctx->pc = 0x13471cu;

    // 0x13471c: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x134720: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x134720u;
    {
        const bool branch_taken_0x134720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134720) {
            ctx->pc = 0x1348A0u;
            return;
        }
    }
    ctx->pc = 0x134728u;
    // 0x134728: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x134728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13472c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13472cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x134730: 0x24a5eeb0  addiu       $a1, $a1, -0x1150
    ctx->pc = 0x134730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    // 0x134734: 0x14f02b  sltu        $fp, $zero, $s4
    ctx->pc = 0x134734u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x134738: 0xc080874  jal         func_2021D0
    ctx->pc = 0x134738u;
    SET_GPR_U32(ctx, 31, 0x134740u);
    ctx->pc = 0x13473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134738u;
    // 0x13473c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134738u, 0x134740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134740u;
label_134740:
    // 0x134740: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134744: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x134744u;
    {
        const bool branch_taken_0x134744 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x134748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134744u;
        // 0x134748: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134744) {
            ctx->pc = 0x13475Cu;
            return;
        }
    }
    ctx->pc = 0x13474Cu;
    // 0x13474c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x13474cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x134750: 0xc080748  jal         func_201D20
    ctx->pc = 0x134750u;
    SET_GPR_U32(ctx, 31, 0x134758u);
    ctx->pc = 0x134754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134750u;
    // 0x134754: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134750u, 0x134758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134758u;
label_134758:
    // 0x134758: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x13475cu;
}
