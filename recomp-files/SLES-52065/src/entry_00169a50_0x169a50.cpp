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

// Function: entry_00169a50
// Address: 0x169a50 - 0x169a80
void entry_00169a50_0x169a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a50_0x169a50");
#endif

    switch (ctx->pc) {
        case 0x169a6cu: goto label_169a6c;
        case 0x169a78u: goto label_169a78;
        default: break;
    }

    ctx->pc = 0x169a50u;

    // 0x169a50: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x169a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x169a54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a58: 0x8c632798  lw          $v1, 0x2798($v1)
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10136)));
    // 0x169a5c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x169A5Cu;
    {
        const bool branch_taken_0x169a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x169a5c) {
            ctx->pc = 0x169A80u;
            return;
        }
    }
    ctx->pc = 0x169A64u;
    // 0x169a64: 0xc05a7d0  jal         func_169F40
    ctx->pc = 0x169A64u;
    SET_GPR_U32(ctx, 31, 0x169A6Cu);
    ctx->pc = 0x169F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F40u, 0x169A64u, 0x169A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A6Cu;
label_169a6c:
    // 0x169a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a70: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169A70u;
    SET_GPR_U32(ctx, 31, 0x169A78u);
    ctx->pc = 0x169A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A70u;
    // 0x169a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A040u, 0x169A70u, 0x169A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A78u;
label_169a78:
    // 0x169a78: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x169A78u;
    {
        const bool branch_taken_0x169a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a78) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169A80u;
}
