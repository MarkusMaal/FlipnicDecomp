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

// Function: FUN_00117cd0
// Address: 0x117cd0 - 0x117d28
void FUN_00117cd0_0x117cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117cd0_0x117cd0");
#endif

    switch (ctx->pc) {
        case 0x117d1cu: goto label_117d1c;
        default: break;
    }

    ctx->pc = 0x117cd0u;

    // 0x117cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117cd4: 0x27848328  addiu       $a0, $gp, -0x7CD8
    ctx->pc = 0x117cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x117cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117cdc: 0x8f858330  lw          $a1, -0x7CD0($gp)
    ctx->pc = 0x117cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x117ce0: 0x8f838334  lw          $v1, -0x7CCC($gp)
    ctx->pc = 0x117ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x117ce4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x117ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x117ce8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x117ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x117cec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117cf0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x117cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x117cf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117CF4u;
    {
        const bool branch_taken_0x117cf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CF4u;
        // 0x117cf8: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cf4) {
            ctx->pc = 0x117D04u;
            goto label_117d04;
        }
    }
    ctx->pc = 0x117CFCu;
    // 0x117cfc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x117cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x117d00: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x117d00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_117d04:
    // 0x117d04: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x117d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x117d08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117D08u;
    {
        const bool branch_taken_0x117d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117d08) {
            ctx->pc = 0x117D1Cu;
            goto label_117d1c;
        }
    }
    ctx->pc = 0x117D10u;
    // 0x117d10: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x117d14: 0xc0458ec  jal         func_1163B0
    ctx->pc = 0x117D14u;
    SET_GPR_U32(ctx, 31, 0x117D1Cu);
    ctx->pc = 0x117D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D14u;
    // 0x117d18: 0x2484e598  addiu       $a0, $a0, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163B0u, 0x117D14u, 0x117D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D1Cu;
label_117d1c:
    // 0x117d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d20: 0x3e00008  jr          $ra
    ctx->pc = 0x117D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D20u;
        // 0x117d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D28u;
}
