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

// Function: entry_001fd61c
// Address: 0x1fd61c - 0x1fd64c
void entry_001fd61c_0x1fd61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd61c_0x1fd61c");
#endif

    switch (ctx->pc) {
        case 0x1fd634u: goto label_1fd634;
        default: break;
    }

    ctx->pc = 0x1fd61cu;

    // 0x1fd61c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd620: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FD620u;
    {
        const bool branch_taken_0x1fd620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD620u;
        // 0x1fd624: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd620) {
            ctx->pc = 0x1FD5F4u;
            return;
        }
    }
    ctx->pc = 0x1FD628u;
    // 0x1fd628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd62c: 0xc07f554  jal         func_1FD550
    ctx->pc = 0x1FD62Cu;
    SET_GPR_U32(ctx, 31, 0x1FD634u);
    ctx->pc = 0x1FD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD62Cu;
    // 0x1fd630: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD550u, 0x1FD62Cu, 0x1FD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD634u;
label_1fd634:
    // 0x1fd634: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FD634u;
    {
        const bool branch_taken_0x1fd634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD634u;
        // 0x1fd638: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd634) {
            ctx->pc = 0x1FD5F0u;
            return;
        }
    }
    ctx->pc = 0x1FD63Cu;
    // 0x1fd63c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1fd63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fd640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd644: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD644u;
    {
        const bool branch_taken_0x1fd644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD644u;
        // 0x1fd648: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd644) {
            ctx->pc = 0x1FD68Cu;
            return;
        }
    }
    ctx->pc = 0x1FD64Cu;
}
