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

// Function: entry_001bdaf0
// Address: 0x1bdaf0 - 0x1bdb0c
void entry_001bdaf0_0x1bdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdaf0_0x1bdaf0");
#endif

    ctx->pc = 0x1bdaf0u;

    // 0x1bdaf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdaf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdaf8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1bdaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1bdafc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdb00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bdb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb04: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDB04u;
    SET_GPR_U32(ctx, 31, 0x1BDB0Cu);
    ctx->pc = 0x1BDB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB04u;
    // 0x1bdb08: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDB04u, 0x1BDB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB0Cu;
}
