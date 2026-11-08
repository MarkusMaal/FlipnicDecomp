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

// Function: entry_001ca4bc
// Address: 0x1ca4bc - 0x1ca4ec
void entry_001ca4bc_0x1ca4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4bc_0x1ca4bc");
#endif

    switch (ctx->pc) {
        case 0x1ca4ccu: goto label_1ca4cc;
        case 0x1ca4e4u: goto label_1ca4e4;
        default: break;
    }

    ctx->pc = 0x1ca4bcu;

    // 0x1ca4bc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca4c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca4c4: 0xc0730dc  jal         func_1CC370
    ctx->pc = 0x1CA4C4u;
    SET_GPR_U32(ctx, 31, 0x1CA4CCu);
    ctx->pc = 0x1CA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C4u;
    // 0x1ca4c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC370u, 0x1CA4C4u, 0x1CA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4CCu;
label_1ca4cc:
    // 0x1ca4cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca4d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ca4d4: 0x90450084  lbu         $a1, 0x84($v0)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ca4d8: 0x9046008c  lbu         $a2, 0x8C($v0)
    ctx->pc = 0x1ca4d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ca4dc: 0xc07154c  jal         func_1C5530
    ctx->pc = 0x1CA4DCu;
    SET_GPR_U32(ctx, 31, 0x1CA4E4u);
    ctx->pc = 0x1CA4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4DCu;
    // 0x1ca4e0: 0x9044007c  lbu         $a0, 0x7C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5530u, 0x1CA4DCu, 0x1CA4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4E4u;
label_1ca4e4:
    // 0x1ca4e4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1ca4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4e8: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1ca4ecu;
}
