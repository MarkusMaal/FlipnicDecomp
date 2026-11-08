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

// Function: entry_0019db60
// Address: 0x19db60 - 0x19dbac
void entry_0019db60_0x19db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019db60_0x19db60");
#endif

    ctx->pc = 0x19db60u;

    // 0x19db60: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x19db60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x19db64: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x19db64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19db68: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19db6c: 0x8e430684  lw          $v1, 0x684($s2)
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
    // 0x19db70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19db74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19db74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19db78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19db7c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19db80: 0xa04601f9  sb          $a2, 0x1F9($v0)
    ctx->pc = 0x19db80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 6));
    // 0x19db84: 0x8e450684  lw          $a1, 0x684($s2)
    ctx->pc = 0x19db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
    // 0x19db88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19db8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19db90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19db94: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19db98: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x19db9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DB9Cu;
    {
        const bool branch_taken_0x19db9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db9c) {
            ctx->pc = 0x19DBACu;
            return;
        }
    }
    ctx->pc = 0x19DBA4u;
    // 0x19dba4: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x19DBA4u;
    SET_GPR_U32(ctx, 31, 0x19DBACu);
    ctx->pc = 0x19DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBA4u;
    // 0x19dba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DBA4u, 0x19DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBACu;
}
