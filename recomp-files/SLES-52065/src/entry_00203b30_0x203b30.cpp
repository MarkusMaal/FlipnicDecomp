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

// Function: entry_00203b30
// Address: 0x203b30 - 0x203b60
void entry_00203b30_0x203b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b30_0x203b30");
#endif

    switch (ctx->pc) {
        case 0x203b58u: goto label_203b58;
        default: break;
    }

    ctx->pc = 0x203b30u;

    // 0x203b30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203b34: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203B34u;
    {
        const bool branch_taken_0x203b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B34u;
        // 0x203b38: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b34) {
            ctx->pc = 0x203B60u;
            return;
        }
    }
    ctx->pc = 0x203B3Cu;
    // 0x203b3c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x203b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203b40: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x203b44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203B44u;
    {
        const bool branch_taken_0x203b44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x203B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B44u;
        // 0x203b48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b44) {
            ctx->pc = 0x203B60u;
            return;
        }
    }
    ctx->pc = 0x203B4Cu;
    // 0x203b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b50: 0xc080e5e  jal         func_203978
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203978u, 0x203B50u, 0x203B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x203B58u;
    {
        const bool branch_taken_0x203b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B58u;
        // 0x203b5c: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b58) {
            ctx->pc = 0x204F94u;
            return;
        }
    }
    ctx->pc = 0x203B60u;
}
