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

// Function: entry_001304c8
// Address: 0x1304c8 - 0x13051c
void entry_001304c8_0x1304c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001304c8_0x1304c8");
#endif

    switch (ctx->pc) {
        case 0x1304d8u: goto label_1304d8;
        case 0x1304f8u: goto label_1304f8;
        case 0x130514u: goto label_130514;
        default: break;
    }

    ctx->pc = 0x1304c8u;

    // 0x1304c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1304c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1304cc: 0x24a5ed70  addiu       $a1, $a1, -0x1290
    ctx->pc = 0x1304ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962544));
    // 0x1304d0: 0xc080796  jal         func_201E58
    ctx->pc = 0x1304D0u;
    SET_GPR_U32(ctx, 31, 0x1304D8u);
    ctx->pc = 0x1304D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304D0u;
    // 0x1304d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1304D0u, 0x1304D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304D8u;
label_1304d8:
    // 0x1304d8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1304D8u;
    {
        const bool branch_taken_0x1304d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1304d8) {
            ctx->pc = 0x130558u;
            return;
        }
    }
    ctx->pc = 0x1304E0u;
    // 0x1304e0: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x1304e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1304E4u;
    {
        const bool branch_taken_0x1304e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1304e4) {
            ctx->pc = 0x13051Cu;
            return;
        }
    }
    ctx->pc = 0x1304ECu;
    // 0x1304ec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1304ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1304f0: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x1304F0u;
    SET_GPR_U32(ctx, 31, 0x1304F8u);
    ctx->pc = 0x1304F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304F0u;
    // 0x1304f4: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x1304F0u, 0x1304F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F8u;
label_1304f8:
    // 0x1304f8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1304f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1304fc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130500: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x130504: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130508: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x13050c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13050Cu;
    SET_GPR_U32(ctx, 31, 0x130514u);
    ctx->pc = 0x130510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13050Cu;
    // 0x130510: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13050Cu, 0x130514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130518: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130518u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13051cu;
}
