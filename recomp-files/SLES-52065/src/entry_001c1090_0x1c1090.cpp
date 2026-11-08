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

// Function: entry_001c1090
// Address: 0x1c1090 - 0x1c10c0
void entry_001c1090_0x1c1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1090_0x1c1090");
#endif

    switch (ctx->pc) {
        case 0x1c1098u: goto label_1c1098;
        case 0x1c10a0u: goto label_1c10a0;
        default: break;
    }

    ctx->pc = 0x1c1090u;

    // 0x1c1090: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1090u;
    SET_GPR_U32(ctx, 31, 0x1C1098u);
    ctx->pc = 0x1C1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1090u;
    // 0x1c1094: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1090u, 0x1C1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1098u;
label_1c1098:
    // 0x1c1098: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1098u;
    SET_GPR_U32(ctx, 31, 0x1C10A0u);
    ctx->pc = 0x1C109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1098u;
    // 0x1c109c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1098u, 0x1C10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A0u;
label_1c10a0:
    // 0x1c10a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c10a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c10a8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c10ac: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1c10b0: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x1c10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1c10b4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c10b8: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C0EBCu;
            return;
        }
    }
    ctx->pc = 0x1C10C0u;
}
