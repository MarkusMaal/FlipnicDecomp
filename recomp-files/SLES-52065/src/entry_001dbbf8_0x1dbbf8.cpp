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

// Function: entry_001dbbf8
// Address: 0x1dbbf8 - 0x1dbc38
void entry_001dbbf8_0x1dbbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbbf8_0x1dbbf8");
#endif

    switch (ctx->pc) {
        case 0x1dbc00u: goto label_1dbc00;
        default: break;
    }

    ctx->pc = 0x1dbbf8u;

    // 0x1dbbf8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DBBF8u;
    SET_GPR_U32(ctx, 31, 0x1DBC00u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DBBF8u, 0x1DBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC00u;
label_1dbc00:
    // 0x1dbc00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc04: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1dbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1dbc08: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dbc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dbc0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DBC0Cu;
    {
        const bool branch_taken_0x1dbc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC0Cu;
        // 0x1dbc10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc0c) {
            ctx->pc = 0x1DBC78u;
            return;
        }
    }
    ctx->pc = 0x1DBC14u;
    // 0x1dbc14: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dbc18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dbc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbc20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbc24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbc28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbc2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbc30: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dbc34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1dbc38u;
}
