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

// Function: FUN_0010f3b0
// Address: 0x10f3b0 - 0x10f40c
void FUN_0010f3b0_0x10f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f3b0_0x10f3b0");
#endif

    switch (ctx->pc) {
        case 0x10f3e4u: goto label_10f3e4;
        case 0x10f3f4u: goto label_10f3f4;
        default: break;
    }

    ctx->pc = 0x10f3b0u;

    // 0x10f3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f3b4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x10f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x10f3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f3c0: 0x90860220  lbu         $a2, 0x220($a0)
    ctx->pc = 0x10f3c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x10f3c4: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x10F3C4u;
    {
        const bool branch_taken_0x10f3c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x10F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3C4u;
        // 0x10f3c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3c4) {
            ctx->pc = 0x10F3FCu;
            goto label_10f3fc;
        }
    }
    ctx->pc = 0x10F3CCu;
    // 0x10f3cc: 0xa2050220  sb          $a1, 0x220($s0)
    ctx->pc = 0x10f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 5));
    // 0x10f3d0: 0x92020220  lbu         $v0, 0x220($s0)
    ctx->pc = 0x10f3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x10f3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F3D4u;
    {
        const bool branch_taken_0x10f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f3d4) {
            ctx->pc = 0x10F3ECu;
            goto label_10f3ec;
        }
    }
    ctx->pc = 0x10F3DCu;
    // 0x10f3dc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10F3DCu;
    SET_GPR_U32(ctx, 31, 0x10F3E4u);
    ctx->pc = 0x10F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3DCu;
    // 0x10f3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10F3DCu, 0x10F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3E4u;
label_10f3e4:
    // 0x10f3e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10F3E4u;
    {
        const bool branch_taken_0x10f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3E4u;
        // 0x10f3e8: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3e4) {
            ctx->pc = 0x10F3FCu;
            goto label_10f3fc;
        }
    }
    ctx->pc = 0x10F3ECu;
label_10f3ec:
    // 0x10f3ec: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10F3ECu;
    SET_GPR_U32(ctx, 31, 0x10F3F4u);
    ctx->pc = 0x10F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3ECu;
    // 0x10f3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10F3ECu, 0x10F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3F4u;
label_10f3f4:
    // 0x10f3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f3f8: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x10f3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
label_10f3fc:
    // 0x10f3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f404: 0x3e00008  jr          $ra
    ctx->pc = 0x10F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F404u;
        // 0x10f408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F40Cu;
}
