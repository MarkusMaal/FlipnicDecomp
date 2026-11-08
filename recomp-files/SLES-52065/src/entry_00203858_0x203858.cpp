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

// Function: entry_00203858
// Address: 0x203858 - 0x20388c
void entry_00203858_0x203858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203858_0x203858");
#endif

    switch (ctx->pc) {
        case 0x203880u: goto label_203880;
        default: break;
    }

    ctx->pc = 0x203858u;

    // 0x203858: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20385c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20385Cu;
    {
        const bool branch_taken_0x20385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20385c) {
            ctx->pc = 0x2038ACu;
            return;
        }
    }
    ctx->pc = 0x203864u;
    // 0x203864: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x203868: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20386c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20386cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x203870: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x203870u;
    {
        const bool branch_taken_0x203870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203870) {
            ctx->pc = 0x203874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203870u;
            // 0x203874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20388Cu;
            return;
        }
    }
    ctx->pc = 0x203878u;
    // 0x203878: 0xc080dae  jal         func_2036B8
    ctx->pc = 0x203878u;
    SET_GPR_U32(ctx, 31, 0x203880u);
    ctx->pc = 0x20387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203878u;
    // 0x20387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2036B8u, 0x203878u, 0x203880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203880u;
label_203880:
    // 0x203880: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203880u;
    {
        const bool branch_taken_0x203880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203880u;
        // 0x203884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203880) {
            ctx->pc = 0x20391Cu;
            return;
        }
    }
    ctx->pc = 0x203888u;
    // 0x203888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x20388cu;
}
