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

// Function: entry_00203b90
// Address: 0x203b90 - 0x203bd4
void entry_00203b90_0x203b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b90_0x203b90");
#endif

    switch (ctx->pc) {
        case 0x203bb0u: goto label_203bb0;
        default: break;
    }

    ctx->pc = 0x203b90u;

label_203b90:
    // 0x203b90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x203b94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x203b98: 0x8ca4d9ac  lw          $a0, -0x2654($a1)
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x203b9c: 0x8cc7d9b0  lw          $a3, -0x2650($a2)
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x21D9B0u));
    // 0x203ba0: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x203ba4: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203ba8: 0xc07fd90  jal         func_1FF640
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF640u, 0x203BA8u, 0x203BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bb4: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203BB4u;
    {
        const bool branch_taken_0x203bb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB4u;
        // 0x203bb8: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bb4) {
            ctx->pc = 0x203BD4u;
            return;
        }
    }
    ctx->pc = 0x203BBCu;
    // 0x203bbc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x203bc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x203bc4: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x203BC4u;
    {
        const bool branch_taken_0x203bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x203BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC4u;
        // 0x203bc8: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bc4) {
            ctx->pc = 0x203B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b90;
        }
    }
    ctx->pc = 0x203BCCu;
    // 0x203bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x203bd0: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x203bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
    ctx->pc = 0x203bd4u;
}
