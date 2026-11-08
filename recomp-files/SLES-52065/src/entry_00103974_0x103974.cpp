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

// Function: entry_00103974
// Address: 0x103974 - 0x1039bc
void entry_00103974_0x103974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103974_0x103974");
#endif

    switch (ctx->pc) {
        case 0x10397cu: goto label_10397c;
        case 0x10398cu: goto label_10398c;
        case 0x1039b8u: goto label_1039b8;
        default: break;
    }

    ctx->pc = 0x103974u;

    // 0x103974: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103974u;
    SET_GPR_U32(ctx, 31, 0x10397Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103974u, 0x10397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10397Cu;
label_10397c:
    // 0x10397c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10397c) {
            ctx->pc = 0x1039BCu;
            return;
        }
    }
    ctx->pc = 0x103984u;
    // 0x103984: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103984u;
    SET_GPR_U32(ctx, 31, 0x10398Cu);
    ctx->pc = 0x103988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103984u;
    // 0x103988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103984u, 0x10398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10398Cu;
label_10398c:
    // 0x10398c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103990: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103994: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103998: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x10399c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10399cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1039a0: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1039a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1039a4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1039a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1039a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1039ac: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1039acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1039b0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x1039B0u;
    SET_GPR_U32(ctx, 31, 0x1039B8u);
    ctx->pc = 0x1039B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039B0u;
    // 0x1039b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x1039B0u, 0x1039B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039B8u;
label_1039b8:
    // 0x1039b8: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1039b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x1039bcu;
}
