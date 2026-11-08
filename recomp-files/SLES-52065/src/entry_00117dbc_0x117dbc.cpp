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

// Function: entry_00117dbc
// Address: 0x117dbc - 0x117df0
void entry_00117dbc_0x117dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117dbc_0x117dbc");
#endif

    switch (ctx->pc) {
        case 0x117dccu: goto label_117dcc;
        case 0x117ddcu: goto label_117ddc;
        default: break;
    }

    ctx->pc = 0x117dbcu;

    // 0x117dbc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117dc0: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x117dc4: 0xc07efaa  jal         func_1FBEA8
    ctx->pc = 0x117DC4u;
    SET_GPR_U32(ctx, 31, 0x117DCCu);
    ctx->pc = 0x117DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DC4u;
    // 0x117dc8: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x117DC4u, 0x117DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DCCu;
label_117dcc:
    // 0x117dcc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd4: 0xc080702  jal         func_201C08
    ctx->pc = 0x117DD4u;
    SET_GPR_U32(ctx, 31, 0x117DDCu);
    ctx->pc = 0x117DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DD4u;
    // 0x117dd8: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x117DD4u, 0x117DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DDCu;
label_117ddc:
    // 0x117ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117de0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117de4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x117de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x117de8: 0x2484d980  addiu       $a0, $a0, -0x2680
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x117dec: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x117decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x117df0u;
}
