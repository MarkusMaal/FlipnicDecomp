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

// Function: entry_0019df10
// Address: 0x19df10 - 0x19df38
void entry_0019df10_0x19df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df10_0x19df10");
#endif

    switch (ctx->pc) {
        case 0x19df2cu: goto label_19df2c;
        default: break;
    }

    ctx->pc = 0x19df10u;

    // 0x19df10: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19df14: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19df14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19df18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x19DF18u;
    {
        const bool branch_taken_0x19df18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF18u;
        // 0x19df1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df18) {
            ctx->pc = 0x19DE98u;
            return;
        }
    }
    ctx->pc = 0x19DF20u;
    // 0x19df20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19df20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df24: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19DF24u;
    SET_GPR_U32(ctx, 31, 0x19DF2Cu);
    ctx->pc = 0x19DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF24u;
    // 0x19df28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DF24u, 0x19DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF2Cu;
label_19df2c:
    // 0x19df2c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x19DF2Cu;
    {
        const bool branch_taken_0x19df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df2c) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DF34u;
    // 0x19df34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19df34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19df38u;
}
