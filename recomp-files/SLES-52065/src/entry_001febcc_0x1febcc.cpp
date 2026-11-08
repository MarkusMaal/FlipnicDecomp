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

// Function: entry_001febcc
// Address: 0x1febcc - 0x1fec08
void entry_001febcc_0x1febcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001febcc_0x1febcc");
#endif

    ctx->pc = 0x1febccu;

    // 0x1febcc: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1febccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1febd0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEBD0u;
    {
        const bool branch_taken_0x1febd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBD0u;
        // 0x1febd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd0) {
            ctx->pc = 0x1FEC08u;
            return;
        }
    }
    ctx->pc = 0x1FEBD8u;
    // 0x1febd8: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1febdc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1febe0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1febe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1febe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1febec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1febecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febf0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1febf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1febf4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1febf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1febf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1febf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1febfc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1febfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1fec00: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEC00u;
    SET_GPR_U32(ctx, 31, 0x1FEC08u);
    ctx->pc = 0x1FEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC00u;
    // 0x1fec04: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEC00u, 0x1FEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC08u;
}
