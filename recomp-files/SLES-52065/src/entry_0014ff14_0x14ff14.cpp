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

// Function: entry_0014ff14
// Address: 0x14ff14 - 0x14ff28
void entry_0014ff14_0x14ff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff14_0x14ff14");
#endif

    switch (ctx->pc) {
        case 0x14ff1cu: goto label_14ff1c;
        default: break;
    }

    ctx->pc = 0x14ff14u;

    // 0x14ff14: 0xc080702  jal         func_201C08
    ctx->pc = 0x14FF14u;
    SET_GPR_U32(ctx, 31, 0x14FF1Cu);
    ctx->pc = 0x14FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF14u;
    // 0x14ff18: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x14FF14u, 0x14FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF1Cu;
label_14ff1c:
    // 0x14ff1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ff20: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14ff24: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x14ff28u;
}
