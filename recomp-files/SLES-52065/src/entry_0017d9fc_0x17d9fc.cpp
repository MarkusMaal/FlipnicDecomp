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

// Function: entry_0017d9fc
// Address: 0x17d9fc - 0x17da30
void entry_0017d9fc_0x17d9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d9fc_0x17d9fc");
#endif

    switch (ctx->pc) {
        case 0x17da14u: goto label_17da14;
        case 0x17da2cu: goto label_17da2c;
        default: break;
    }

    ctx->pc = 0x17d9fcu;

    // 0x17d9fc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17da00: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    // 0x17da04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17da04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17da08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da0c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DA0Cu;
    SET_GPR_U32(ctx, 31, 0x17DA14u);
    ctx->pc = 0x17DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA0Cu;
    // 0x17da10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA0Cu, 0x17DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA14u;
label_17da14:
    // 0x17da14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17da18: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x17da1c: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    // 0x17da20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17da20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da24: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DA24u;
    SET_GPR_U32(ctx, 31, 0x17DA2Cu);
    ctx->pc = 0x17DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA24u;
    // 0x17da28: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA24u, 0x17DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA2Cu;
label_17da2c:
    // 0x17da2c: 0x8f82864c  lw          $v0, -0x79B4($gp)
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
    ctx->pc = 0x17da30u;
}
