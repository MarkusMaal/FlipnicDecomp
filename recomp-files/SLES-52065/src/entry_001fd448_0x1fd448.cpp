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

// Function: entry_001fd448
// Address: 0x1fd448 - 0x1fd45c
void entry_001fd448_0x1fd448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd448_0x1fd448");
#endif

    switch (ctx->pc) {
        case 0x1fd458u: goto label_1fd458;
        default: break;
    }

    ctx->pc = 0x1fd448u;

    // 0x1fd448: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD448u;
    {
        const bool branch_taken_0x1fd448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd448) {
            ctx->pc = 0x1FD44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD448u;
            // 0x1fd44c: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD45Cu;
            return;
        }
    }
    ctx->pc = 0x1FD450u;
    // 0x1fd450: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x1FD450u;
    SET_GPR_U32(ctx, 31, 0x1FD458u);
    ctx->pc = 0x1FD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD450u;
    // 0x1fd454: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FD450u, 0x1FD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD458u;
label_1fd458:
    // 0x1fd458: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1fd45cu;
}
