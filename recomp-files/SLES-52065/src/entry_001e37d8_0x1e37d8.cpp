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

// Function: entry_001e37d8
// Address: 0x1e37d8 - 0x1e380c
void entry_001e37d8_0x1e37d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e37d8_0x1e37d8");
#endif

    switch (ctx->pc) {
        case 0x1e37f4u: goto label_1e37f4;
        default: break;
    }

    ctx->pc = 0x1e37d8u;

    // 0x1e37d8: 0x92420040  lbu         $v0, 0x40($s2)
    ctx->pc = 0x1e37d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1e37dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E37DCu;
    {
        const bool branch_taken_0x1e37dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37dc) {
            ctx->pc = 0x1E380Cu;
            return;
        }
    }
    ctx->pc = 0x1E37E4u;
    // 0x1e37e4: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E37E4u;
    {
        const bool branch_taken_0x1e37e4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E4u;
        // 0x1e37e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37e4) {
            ctx->pc = 0x1E380Cu;
            return;
        }
    }
    ctx->pc = 0x1E37ECu;
    // 0x1e37ec: 0xc079574  jal         func_1E55D0
    ctx->pc = 0x1E37ECu;
    SET_GPR_U32(ctx, 31, 0x1E37F4u);
    ctx->pc = 0x1E55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55D0u, 0x1E37ECu, 0x1E37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37F4u;
label_1e37f4:
    // 0x1e37f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E37F4u;
    {
        const bool branch_taken_0x1e37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F4u;
        // 0x1e37f8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f4) {
            ctx->pc = 0x1E380Cu;
            return;
        }
    }
    ctx->pc = 0x1E37FCu;
    // 0x1e37fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e37fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3800: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e3800u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e3804: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1E3804u;
    {
        const bool branch_taken_0x1e3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3804u;
        // 0x1e3808: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3804) {
            ctx->pc = 0x1E38F4u;
            return;
        }
    }
    ctx->pc = 0x1E380Cu;
}
