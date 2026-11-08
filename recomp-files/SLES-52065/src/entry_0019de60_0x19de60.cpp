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

// Function: entry_0019de60
// Address: 0x19de60 - 0x19de88
void entry_0019de60_0x19de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de60_0x19de60");
#endif

    switch (ctx->pc) {
        case 0x19de7cu: goto label_19de7c;
        default: break;
    }

    ctx->pc = 0x19de60u;

    // 0x19de60: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19de64: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19de64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19de68: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19DE68u;
    {
        const bool branch_taken_0x19de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE68u;
        // 0x19de6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de68) {
            ctx->pc = 0x19DDDCu;
            return;
        }
    }
    ctx->pc = 0x19DE70u;
    // 0x19de70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de74: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19DE74u;
    SET_GPR_U32(ctx, 31, 0x19DE7Cu);
    ctx->pc = 0x19DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE74u;
    // 0x19de78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DE74u, 0x19DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x19DE7Cu;
    {
        const bool branch_taken_0x19de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de7c) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DE84u;
    // 0x19de84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19de84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19de88u;
}
