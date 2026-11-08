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

// Function: FUN_001f4988
// Address: 0x1f4988 - 0x1f49d0
void FUN_001f4988_0x1f4988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4988_0x1f4988");
#endif

    switch (ctx->pc) {
        case 0x1f49a0u: goto label_1f49a0;
        case 0x1f49a8u: goto label_1f49a8;
        default: break;
    }

    ctx->pc = 0x1f4988u;

    // 0x1f4988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f498c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f4990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4998: 0xc07d1fe  jal         func_1F47F8
    ctx->pc = 0x1F4998u;
    SET_GPR_U32(ctx, 31, 0x1F49A0u);
    ctx->pc = 0x1F499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4998u;
    // 0x1f499c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47F8u, 0x1F4998u, 0x1F49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49A0u;
label_1f49a0:
    // 0x1f49a0: 0xc07d244  jal         func_1F4910
    ctx->pc = 0x1F49A0u;
    SET_GPR_U32(ctx, 31, 0x1F49A8u);
    ctx->pc = 0x1F49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49A0u;
    // 0x1f49a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4910u, 0x1F49A0u, 0x1F49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49A8u;
label_1f49a8:
    // 0x1f49a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f49ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f49acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49b0: 0x8c46a800  lw          $a2, -0x5800($v0)
    ctx->pc = 0x1f49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x21A800u));
    // 0x1f49b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f49b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f49b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f49bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f49bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f49c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f49c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f49c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f49c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f49c8: 0x807ac98  j           func_1EB260
    ctx->pc = 0x1F49C8u;
    ctx->pc = 0x1F49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49C8u;
    // 0x1f49cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB260u;
    ps2__LoadExecPS2_0x1eb260(rdram, ctx, runtime); return;
    ctx->pc = 0x1F49D0u;
}
