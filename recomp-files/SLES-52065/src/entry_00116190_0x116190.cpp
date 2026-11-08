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

// Function: entry_00116190
// Address: 0x116190 - 0x1161b8
void entry_00116190_0x116190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116190_0x116190");
#endif

    switch (ctx->pc) {
        case 0x116198u: goto label_116198;
        case 0x1161a4u: goto label_1161a4;
        case 0x1161acu: goto label_1161ac;
        default: break;
    }

    ctx->pc = 0x116190u;

    // 0x116190: 0xc062d50  jal         func_18B540
    ctx->pc = 0x116190u;
    SET_GPR_U32(ctx, 31, 0x116198u);
    ctx->pc = 0x116194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116190u;
    // 0x116194: 0xa3828488  sb          $v0, -0x7B78($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935688), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x116190u, 0x116198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116198u;
label_116198:
    // 0x116198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11619c: 0xc062948  jal         func_18A520
    ctx->pc = 0x11619Cu;
    SET_GPR_U32(ctx, 31, 0x1161A4u);
    ctx->pc = 0x1161A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11619Cu;
    // 0x1161a0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x11619Cu, 0x1161A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161A4u;
label_1161a4:
    // 0x1161a4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1161A4u;
    SET_GPR_U32(ctx, 31, 0x1161ACu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1161A4u, 0x1161ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161ACu;
label_1161ac:
    // 0x1161ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1161acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161b0: 0xc062994  jal         func_18A650
    ctx->pc = 0x1161B0u;
    SET_GPR_U32(ctx, 31, 0x1161B8u);
    ctx->pc = 0x1161B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161B0u;
    // 0x1161b4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1161B0u, 0x1161B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161B8u;
}
