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

// Function: entry_001a2e64
// Address: 0x1a2e64 - 0x1a2ea0
void entry_001a2e64_0x1a2e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2e64_0x1a2e64");
#endif

    switch (ctx->pc) {
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e90u: goto label_1a2e90;
        default: break;
    }

    ctx->pc = 0x1a2e64u;

    // 0x1a2e64: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2e68: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a2e6c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2e70: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2E70u;
    SET_GPR_U32(ctx, 31, 0x1A2E78u);
    ctx->pc = 0x1A2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E70u;
    // 0x1a2e74: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E70u, 0x1A2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E78u;
label_1a2e78:
    // 0x1a2e78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e7c: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2e80: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a2e84: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2e88: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2E88u;
    SET_GPR_U32(ctx, 31, 0x1A2E90u);
    ctx->pc = 0x1A2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E88u;
    // 0x1a2e8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E88u, 0x1A2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0xaf92861c  sw          $s2, -0x79E4($gp)
    ctx->pc = 0x1a2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936092), GPR_U32(ctx, 18));
    // 0x1a2e94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2e98: 0xaf828620  sw          $v0, -0x79E0($gp)
    ctx->pc = 0x1a2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 2));
    // 0x1a2e9c: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1a2ea0u;
}
