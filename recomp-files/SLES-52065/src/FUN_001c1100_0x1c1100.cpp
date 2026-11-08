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

// Function: FUN_001c1100
// Address: 0x1c1100 - 0x1c1164
void FUN_001c1100_0x1c1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1100_0x1c1100");
#endif

    switch (ctx->pc) {
        case 0x1c111cu: goto label_1c111c;
        default: break;
    }

    ctx->pc = 0x1c1100u;

    // 0x1c1100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1104: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c1108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c110c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1110: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c1114: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C1114u;
    SET_GPR_U32(ctx, 31, 0x1C111Cu);
    ctx->pc = 0x1C1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1114u;
    // 0x1c1118: 0x245010c8  addiu       $s0, $v0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C1114u, 0x1C111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C111Cu;
label_1c111c:
    // 0x1c111c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1120: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c1124: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1c1128: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x1c1128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1c112c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C112Cu;
    {
        const bool branch_taken_0x1c112c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C112Cu;
        // 0x1c1130: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c112c) {
            ctx->pc = 0x1C113Cu;
            goto label_1c113c;
        }
    }
    ctx->pc = 0x1C1134u;
    // 0x1c1134: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1c1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c1138: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1c113c:
    // 0x1c113c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c1140: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x1c1140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x1c1144: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1144u;
    {
        const bool branch_taken_0x1c1144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1144u;
        // 0x1c1148: 0x210ff  dsra32      $v0, $v0, 3 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1144) {
            ctx->pc = 0x1C1154u;
            goto label_1c1154;
        }
    }
    ctx->pc = 0x1C114Cu;
    // 0x1c114c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c1150: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1c1154:
    // 0x1c1154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c115c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C115Cu;
        // 0x1c1160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1164u;
}
