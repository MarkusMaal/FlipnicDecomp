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

// Function: FUN_00192fe0
// Address: 0x192fe0 - 0x193024
void FUN_00192fe0_0x192fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192fe0_0x192fe0");
#endif

    switch (ctx->pc) {
        case 0x193004u: goto label_193004;
        default: break;
    }

    ctx->pc = 0x192fe0u;

    // 0x192fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192fec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192ff0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x192ff4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x192ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x192ff8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x192ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x192ffc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x192FFCu;
    SET_GPR_U32(ctx, 31, 0x193004u);
    ctx->pc = 0x193000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FFCu;
    // 0x193000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x192FFCu, 0x193004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193004u;
label_193004:
    // 0x193004: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193008: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x193008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19300c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193010: 0xa06001d3  sb          $zero, 0x1D3($v1)
    ctx->pc = 0x193010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x193014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19301c: 0x3e00008  jr          $ra
    ctx->pc = 0x19301Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19301Cu;
        // 0x193020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19301Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193024u;
}
