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

// Function: entry_00118c60
// Address: 0x118c60 - 0x118cb8
void entry_00118c60_0x118c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118c60_0x118c60");
#endif

    switch (ctx->pc) {
        case 0x118c68u: goto label_118c68;
        case 0x118c70u: goto label_118c70;
        case 0x118c80u: goto label_118c80;
        case 0x118c94u: goto label_118c94;
        case 0x118c9cu: goto label_118c9c;
        case 0x118cacu: goto label_118cac;
        default: break;
    }

    ctx->pc = 0x118c60u;

    // 0x118c60: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C60u;
    SET_GPR_U32(ctx, 31, 0x118C68u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C60u, 0x118C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C68u;
label_118c68:
    // 0x118c68: 0xc062ae0  jal         func_18AB80
    ctx->pc = 0x118C68u;
    SET_GPR_U32(ctx, 31, 0x118C70u);
    ctx->pc = 0x118C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C68u;
    // 0x118c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB80u, 0x118C68u, 0x118C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x118C70u;
    {
        const bool branch_taken_0x118c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c70) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118C78u;
    // 0x118c78: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C78u;
    SET_GPR_U32(ctx, 31, 0x118C80u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C78u, 0x118C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C80u;
label_118c80:
    // 0x118c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x118c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118c88: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x118c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x118c8c: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118C8Cu;
    SET_GPR_U32(ctx, 31, 0x118C94u);
    ctx->pc = 0x118C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C8Cu;
    // 0x118c90: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118C8Cu, 0x118C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C94u;
label_118c94:
    // 0x118c94: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C94u;
    SET_GPR_U32(ctx, 31, 0x118C9Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C94u, 0x118C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C9Cu;
label_118c9c:
    // 0x118c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ca0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x118ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118ca4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x118CA4u;
    SET_GPR_U32(ctx, 31, 0x118CACu);
    ctx->pc = 0x118CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CA4u;
    // 0x118ca8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x118CA4u, 0x118CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CACu;
label_118cac:
    // 0x118cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x118cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118cb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x118CB0u;
    {
        const bool branch_taken_0x118cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CB0u;
        // 0x118cb4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cb0) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118CB8u;
}
