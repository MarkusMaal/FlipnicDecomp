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

// Function: entry_001042dc
// Address: 0x1042dc - 0x104318
void entry_001042dc_0x1042dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001042dc_0x1042dc");
#endif

    switch (ctx->pc) {
        case 0x1042e4u: goto label_1042e4;
        case 0x1042f4u: goto label_1042f4;
        default: break;
    }

    ctx->pc = 0x1042dcu;

    // 0x1042dc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1042DCu;
    SET_GPR_U32(ctx, 31, 0x1042E4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1042DCu, 0x1042E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042E4u;
label_1042e4:
    // 0x1042e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1042E4u;
    {
        const bool branch_taken_0x1042e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042E4u;
        // 0x1042e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042e4) {
            ctx->pc = 0x104318u;
            return;
        }
    }
    ctx->pc = 0x1042ECu;
    // 0x1042ec: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1042ECu;
    SET_GPR_U32(ctx, 31, 0x1042F4u);
    ctx->pc = 0x1042F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042ECu;
    // 0x1042f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1042ECu, 0x1042F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042F4u;
label_1042f4:
    // 0x1042f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042f8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1042f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1042fc: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104300: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x104300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x104304: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104308: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10430c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10430cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104310: 0x2442a0d0  addiu       $v0, $v0, -0x5F30
    ctx->pc = 0x104310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942928));
    // 0x104314: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104318u;
}
