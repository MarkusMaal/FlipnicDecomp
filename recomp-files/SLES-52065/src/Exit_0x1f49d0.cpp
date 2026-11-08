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

// Function: Exit
// Address: 0x1f49d0 - 0x1f49f8
void Exit_0x1f49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exit_0x1f49d0");
#endif

    switch (ctx->pc) {
        case 0x1f49e4u: goto label_1f49e4;
        default: break;
    }

    ctx->pc = 0x1f49d0u;

    // 0x1f49d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f49d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f49d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f49dc: 0xc07d244  jal         func_1F4910
    ctx->pc = 0x1F49DCu;
    SET_GPR_U32(ctx, 31, 0x1F49E4u);
    ctx->pc = 0x1F49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49DCu;
    // 0x1f49e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4910u, 0x1F49DCu, 0x1F49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49E4u;
label_1f49e4:
    // 0x1f49e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f49e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f49ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f49ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f49f0: 0x807ac90  j           func_1EB240
    ctx->pc = 0x1F49F0u;
    ctx->pc = 0x1F49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49F0u;
    // 0x1f49f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB240u;
    ps2__Exit_0x1eb240(rdram, ctx, runtime); return;
    ctx->pc = 0x1F49F8u;
}
