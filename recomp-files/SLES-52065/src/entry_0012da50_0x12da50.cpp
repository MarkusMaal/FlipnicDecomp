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

// Function: entry_0012da50
// Address: 0x12da50 - 0x12dab8
void entry_0012da50_0x12da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da50_0x12da50");
#endif

    switch (ctx->pc) {
        case 0x12da64u: goto label_12da64;
        case 0x12da70u: goto label_12da70;
        case 0x12da80u: goto label_12da80;
        case 0x12da90u: goto label_12da90;
        case 0x12daa4u: goto label_12daa4;
        case 0x12dab0u: goto label_12dab0;
        default: break;
    }

    ctx->pc = 0x12da50u;

    // 0x12da50: 0x938284a4  lbu         $v0, -0x7B5C($gp)
    ctx->pc = 0x12da50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935716)));
    // 0x12da54: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12DA54u;
    {
        const bool branch_taken_0x12da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da54) {
            ctx->pc = 0x12DAE0u;
            return;
        }
    }
    ctx->pc = 0x12DA5Cu;
    // 0x12da5c: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x12DA5Cu;
    SET_GPR_U32(ctx, 31, 0x12DA64u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x12DA5Cu, 0x12DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA64u;
label_12da64:
    // 0x12da64: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x12da68: 0xc080702  jal         func_201C08
    ctx->pc = 0x12DA68u;
    SET_GPR_U32(ctx, 31, 0x12DA70u);
    ctx->pc = 0x12DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA68u;
    // 0x12da6c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12DA68u, 0x12DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA70u;
label_12da70:
    // 0x12da70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12da74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12da78: 0xc080664  jal         func_201990
    ctx->pc = 0x12DA78u;
    SET_GPR_U32(ctx, 31, 0x12DA80u);
    ctx->pc = 0x12DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA78u;
    // 0x12da7c: 0x24a5ec88  addiu       $a1, $a1, -0x1378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x12DA78u, 0x12DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA80u;
label_12da80:
    // 0x12da80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12da84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12da88: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x12DA88u;
    SET_GPR_U32(ctx, 31, 0x12DA90u);
    ctx->pc = 0x12DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA88u;
    // 0x12da8c: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x12DA88u, 0x12DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA90u;
label_12da90:
    // 0x12da90: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12da94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12da98: 0x248430b0  addiu       $a0, $a0, 0x30B0
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    // 0x12da9c: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x12DA9Cu;
    SET_GPR_U32(ctx, 31, 0x12DAA4u);
    ctx->pc = 0x12DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA9Cu;
    // 0x12daa0: 0x24a5ec98  addiu       $a1, $a1, -0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x12DA9Cu, 0x12DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA4u;
label_12daa4:
    // 0x12daa4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12daa8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DAA8u;
    SET_GPR_U32(ctx, 31, 0x12DAB0u);
    ctx->pc = 0x12DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAA8u;
    // 0x12daac: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DAA8u, 0x12DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAB0u;
label_12dab0:
    // 0x12dab0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DAB0u;
    {
        const bool branch_taken_0x12dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dab0) {
            ctx->pc = 0x12DAD4u;
            return;
        }
    }
    ctx->pc = 0x12DAB8u;
}
