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

// Function: entry_001c1064
// Address: 0x1c1064 - 0x1c1090
void entry_001c1064_0x1c1064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1064_0x1c1064");
#endif

    switch (ctx->pc) {
        case 0x1c1078u: goto label_1c1078;
        case 0x1c1088u: goto label_1c1088;
        default: break;
    }

    ctx->pc = 0x1c1064u;

    // 0x1c1064: 0x0  nop
    ctx->pc = 0x1c1064u;
    // NOP
    // 0x1c1068: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c106c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1070: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1070u;
    SET_GPR_U32(ctx, 31, 0x1C1078u);
    ctx->pc = 0x1C1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1070u;
    // 0x1c1074: 0x24a53f30  addiu       $a1, $a1, 0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1070u, 0x1C1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1078u;
label_1c1078:
    // 0x1c1078: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c107c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1080: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1080u;
    SET_GPR_U32(ctx, 31, 0x1C1088u);
    ctx->pc = 0x1C1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1080u;
    // 0x1c1084: 0x24a53f30  addiu       $a1, $a1, 0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1080u, 0x1C1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1c1088u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c108c: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c108cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c1090u;
}
