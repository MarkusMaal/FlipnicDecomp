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

// Function: entry_0011ae14
// Address: 0x11ae14 - 0x11ae2c
void entry_0011ae14_0x11ae14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ae14_0x11ae14");
#endif

    switch (ctx->pc) {
        case 0x11ae1cu: goto label_11ae1c;
        case 0x11ae24u: goto label_11ae24;
        default: break;
    }

    ctx->pc = 0x11ae14u;

    // 0x11ae14: 0xc046dd4  jal         func_11B750
    ctx->pc = 0x11AE14u;
    SET_GPR_U32(ctx, 31, 0x11AE1Cu);
    ctx->pc = 0x11AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE14u;
    // 0x11ae18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x11AE14u, 0x11AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE1Cu;
label_11ae1c:
    // 0x11ae1c: 0xc040150  jal         func_100540
    ctx->pc = 0x11AE1Cu;
    SET_GPR_U32(ctx, 31, 0x11AE24u);
    ctx->pc = 0x11AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE1Cu;
    // 0x11ae20: 0x8e040528  lw          $a0, 0x528($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11AE1Cu, 0x11AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE24u;
label_11ae24:
    // 0x11ae24: 0xa20003c4  sb          $zero, 0x3C4($s0)
    ctx->pc = 0x11ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ae28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11ae2cu;
}
