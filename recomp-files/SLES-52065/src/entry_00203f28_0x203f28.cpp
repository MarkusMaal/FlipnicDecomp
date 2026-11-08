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

// Function: entry_00203f28
// Address: 0x203f28 - 0x203f44
void entry_00203f28_0x203f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f28_0x203f28");
#endif

    switch (ctx->pc) {
        case 0x203f30u: goto label_203f30;
        default: break;
    }

    ctx->pc = 0x203f28u;

    // 0x203f28: 0xc07ecf6  jal         func_1FB3D8
    ctx->pc = 0x203F28u;
    SET_GPR_U32(ctx, 31, 0x203F30u);
    ctx->pc = 0x203F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F28u;
    // 0x203f2c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB3D8u, 0x203F28u, 0x203F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F30u;
label_203f30:
    // 0x203f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F30u;
    {
        const bool branch_taken_0x203f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F30u;
        // 0x203f34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f30) {
            ctx->pc = 0x203F44u;
            return;
        }
    }
    ctx->pc = 0x203F38u;
    // 0x203f38: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203f3c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x203F3Cu;
    {
        const bool branch_taken_0x203f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F3Cu;
        // 0x203f40: 0x245351a8  addiu       $s3, $v0, 0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f3c) {
            ctx->pc = 0x204378u;
            return;
        }
    }
    ctx->pc = 0x203F44u;
}
