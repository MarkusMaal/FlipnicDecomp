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

// Function: FUN_00193030
// Address: 0x193030 - 0x193078
void FUN_00193030_0x193030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193030_0x193030");
#endif

    switch (ctx->pc) {
        case 0x193054u: goto label_193054;
        default: break;
    }

    ctx->pc = 0x193030u;

    // 0x193030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19303c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193040: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x193040u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193044: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x193044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x193048: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19304c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x19304Cu;
    SET_GPR_U32(ctx, 31, 0x193054u);
    ctx->pc = 0x193050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19304Cu;
    // 0x193050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x19304Cu, 0x193054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193054u;
label_193054:
    // 0x193054: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x193058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19305c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x193060: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193064: 0xa06401d3  sb          $a0, 0x1D3($v1)
    ctx->pc = 0x193064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
    // 0x193068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19306c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19306cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193070: 0x3e00008  jr          $ra
    ctx->pc = 0x193070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193070u;
        // 0x193074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193078u;
}
