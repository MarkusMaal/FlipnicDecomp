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

// Function: entry_001aefc8
// Address: 0x1aefc8 - 0x1aeff8
void entry_001aefc8_0x1aefc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aefc8_0x1aefc8");
#endif

    switch (ctx->pc) {
        case 0x1aefe4u: goto label_1aefe4;
        default: break;
    }

    ctx->pc = 0x1aefc8u;

    // 0x1aefc8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1aefcc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1aefccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aefd4: 0x53f021  addu        $fp, $v0, $s3
    ctx->pc = 0x1aefd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1aefd8: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1aefd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1aefdc: 0xc057090  jal         func_15C240
    ctx->pc = 0x1AEFDCu;
    SET_GPR_U32(ctx, 31, 0x1AEFE4u);
    ctx->pc = 0x1AEFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFDCu;
    // 0x1aefe0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x1AEFDCu, 0x1AEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFE4u;
label_1aefe4:
    // 0x1aefe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aefe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefe8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1aefe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aefec: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1aefecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1aeff0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEFF0u;
    {
        const bool branch_taken_0x1aeff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFF0u;
        // 0x1aeff4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeff0) {
            ctx->pc = 0x1AF044u;
            return;
        }
    }
    ctx->pc = 0x1AEFF8u;
}
