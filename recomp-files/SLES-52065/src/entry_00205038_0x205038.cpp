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

// Function: entry_00205038
// Address: 0x205038 - 0x205060
void entry_00205038_0x205038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205038_0x205038");
#endif

    switch (ctx->pc) {
        case 0x205054u: goto label_205054;
        default: break;
    }

    ctx->pc = 0x205038u;

    // 0x205038: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x205038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20503c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20503cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x205040: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x205040) {
            ctx->pc = 0x205044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205040u;
            // 0x205044: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205060u;
            return;
        }
    }
    ctx->pc = 0x205048u;
    // 0x205048: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20504c: 0xc082014  jal         func_208050
    ctx->pc = 0x20504Cu;
    SET_GPR_U32(ctx, 31, 0x205054u);
    ctx->pc = 0x205050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20504Cu;
    // 0x205050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x20504Cu, 0x205054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205054u;
label_205054:
    // 0x205054: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x205058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x205058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20505c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x20505cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x205060u;
}
