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

// Function: entry_001a70fc
// Address: 0x1a70fc - 0x1a7128
void entry_001a70fc_0x1a70fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a70fc_0x1a70fc");
#endif

    switch (ctx->pc) {
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7114u: goto label_1a7114;
        default: break;
    }

    ctx->pc = 0x1a70fcu;

    // 0x1a70fc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A70FCu;
    SET_GPR_U32(ctx, 31, 0x1A7104u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A70FCu, 0x1A7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7104u;
label_1a7104:
    // 0x1a7104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7108: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a710c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A710Cu;
    SET_GPR_U32(ctx, 31, 0x1A7114u);
    ctx->pc = 0x1A7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A710Cu;
    // 0x1a7110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A710Cu, 0x1A7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7114u;
label_1a7114:
    // 0x1a7114: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a711c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7120: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1a7120u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a7124: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x1a7124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a7128u;
}
