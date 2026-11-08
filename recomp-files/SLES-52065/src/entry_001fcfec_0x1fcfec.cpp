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

// Function: entry_001fcfec
// Address: 0x1fcfec - 0x1fd00c
void entry_001fcfec_0x1fcfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcfec_0x1fcfec");
#endif

    switch (ctx->pc) {
        case 0x1fd008u: goto label_1fd008;
        default: break;
    }

    ctx->pc = 0x1fcfecu;

    // 0x1fcfec: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1FCFECu;
    {
        const bool branch_taken_0x1fcfec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFECu;
        // 0x1fcff0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfec) {
            ctx->pc = 0x1FD244u;
            return;
        }
    }
    ctx->pc = 0x1FCFF4u;
    // 0x1fcff4: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFF4u;
    {
        const bool branch_taken_0x1fcff4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF4u;
        // 0x1fcff8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcff4) {
            ctx->pc = 0x1FD00Cu;
            return;
        }
    }
    ctx->pc = 0x1FCFFCu;
    // 0x1fcffc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd000: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD000u;
    SET_GPR_U32(ctx, 31, 0x1FD008u);
    ctx->pc = 0x1FD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD000u;
    // 0x1fd004: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD000u, 0x1FD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD008u;
label_1fd008:
    // 0x1fd008: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1fd00cu;
}
