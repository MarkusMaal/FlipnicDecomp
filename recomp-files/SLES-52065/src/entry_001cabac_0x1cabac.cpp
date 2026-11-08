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

// Function: entry_001cabac
// Address: 0x1cabac - 0x1cabd8
void entry_001cabac_0x1cabac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabac_0x1cabac");
#endif

    switch (ctx->pc) {
        case 0x1cabb4u: goto label_1cabb4;
        case 0x1cabc8u: goto label_1cabc8;
        default: break;
    }

    ctx->pc = 0x1cabacu;

    // 0x1cabac: 0xc072e54  jal         func_1CB950
    ctx->pc = 0x1CABACu;
    SET_GPR_U32(ctx, 31, 0x1CABB4u);
    ctx->pc = 0x1CABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABACu;
    // 0x1cabb0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB950u, 0x1CABACu, 0x1CABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABB4u;
label_1cabb4:
    // 0x1cabb4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cabb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabbc: 0x24a57510  addiu       $a1, $a1, 0x7510
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29968));
    // 0x1cabc0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CABC0u;
    SET_GPR_U32(ctx, 31, 0x1CABC8u);
    ctx->pc = 0x1CABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABC0u;
    // 0x1cabc4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CABC0u, 0x1CABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABC8u;
label_1cabc8:
    // 0x1cabc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabcc: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x1cabccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cabd0: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1CABD0u;
    SET_GPR_U32(ctx, 31, 0x1CABD8u);
    ctx->pc = 0x1CABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABD0u;
    // 0x1cabd4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1CABD0u, 0x1CABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABD8u;
}
