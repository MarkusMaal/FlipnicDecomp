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

// Function: entry_0015db78
// Address: 0x15db78 - 0x15dba8
void entry_0015db78_0x15db78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db78_0x15db78");
#endif

    switch (ctx->pc) {
        case 0x15db8cu: goto label_15db8c;
        default: break;
    }

    ctx->pc = 0x15db78u;

    // 0x15db78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15db80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db84: 0xc059568  jal         func_1655A0
    ctx->pc = 0x15DB84u;
    SET_GPR_U32(ctx, 31, 0x15DB8Cu);
    ctx->pc = 0x15DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB84u;
    // 0x15db88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x15DB84u, 0x15DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15db8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db90: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x15DB90u;
    {
        const bool branch_taken_0x15db90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB90u;
        // 0x15db94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db90) {
            ctx->pc = 0x15DD1Cu;
            return;
        }
    }
    ctx->pc = 0x15DB98u;
    // 0x15db98: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15db9c: 0x1420004e  bnez        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x15DB9Cu;
    {
        const bool branch_taken_0x15db9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB9Cu;
        // 0x15dba0: 0x260afff8  addiu       $t2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db9c) {
            ctx->pc = 0x15DCD8u;
            return;
        }
    }
    ctx->pc = 0x15DBA4u;
    // 0x15dba4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15dba4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15dba8u;
}
