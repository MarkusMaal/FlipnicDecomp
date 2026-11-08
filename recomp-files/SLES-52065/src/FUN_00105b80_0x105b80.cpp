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

// Function: FUN_00105b80
// Address: 0x105b80 - 0x105bf0
void FUN_00105b80_0x105b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105b80_0x105b80");
#endif

    switch (ctx->pc) {
        case 0x105bdcu: goto label_105bdc;
        default: break;
    }

    ctx->pc = 0x105b80u;

    // 0x105b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b90: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x105B90u;
    {
        const bool branch_taken_0x105b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B90u;
        // 0x105b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b90) {
            ctx->pc = 0x105BE0u;
            goto label_105be0;
        }
    }
    ctx->pc = 0x105B98u;
    // 0x105b98: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105b9c: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x105b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x105ba0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105BA0u;
    {
        const bool branch_taken_0x105ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BA0u;
        // 0x105ba4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ba0) {
            ctx->pc = 0x105BC4u;
            goto label_105bc4;
        }
    }
    ctx->pc = 0x105BA8u;
    // 0x105ba8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105bac: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x105bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x105bb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105BB0u;
    {
        const bool branch_taken_0x105bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BB0u;
        // 0x105bb4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bb0) {
            ctx->pc = 0x105BC4u;
            goto label_105bc4;
        }
    }
    ctx->pc = 0x105BB8u;
    // 0x105bb8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105bbc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105bc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105bc4:
    // 0x105bc4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105bc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105bc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105bcc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105BCCu;
    {
        const bool branch_taken_0x105bcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BCCu;
        // 0x105bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bcc) {
            ctx->pc = 0x105BDCu;
            goto label_105bdc;
        }
    }
    ctx->pc = 0x105BD4u;
    // 0x105bd4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105BD4u;
    SET_GPR_U32(ctx, 31, 0x105BDCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105BD4u, 0x105BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BDCu;
label_105bdc:
    // 0x105bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105be0:
    // 0x105be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105be8: 0x3e00008  jr          $ra
    ctx->pc = 0x105BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BE8u;
        // 0x105bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105BF0u;
}
