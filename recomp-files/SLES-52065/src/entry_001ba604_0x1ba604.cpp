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

// Function: entry_001ba604
// Address: 0x1ba604 - 0x1ba62c
void entry_001ba604_0x1ba604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba604_0x1ba604");
#endif

    switch (ctx->pc) {
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba620u: goto label_1ba620;
        default: break;
    }

    ctx->pc = 0x1ba604u;

    // 0x1ba604: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1ba604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1ba608: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1BA608u;
    SET_GPR_U32(ctx, 31, 0x1BA610u);
    ctx->pc = 0x1BA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA608u;
    // 0x1ba60c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1BA608u, 0x1BA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA610u;
label_1ba610:
    // 0x1ba610: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba614: 0x8c252ef0  lw          $a1, 0x2EF0($at)
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF0u));
    // 0x1ba618: 0xc062c10  jal         func_18B040
    ctx->pc = 0x1BA618u;
    SET_GPR_U32(ctx, 31, 0x1BA620u);
    ctx->pc = 0x1BA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA618u;
    // 0x1ba61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B040u, 0x1BA618u, 0x1BA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA620u;
label_1ba620:
    // 0x1ba620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba624: 0xa223001c  sb          $v1, 0x1C($s1)
    ctx->pc = 0x1ba624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba628: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x1ba628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    ctx->pc = 0x1ba62cu;
}
