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

// Function: entry_001385f8
// Address: 0x1385f8 - 0x138620
void entry_001385f8_0x1385f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385f8_0x1385f8");
#endif

    ctx->pc = 0x1385f8u;

    // 0x1385f8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1385fc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x138600: 0x8f948594  lw          $s4, -0x7A6C($gp)
    ctx->pc = 0x138600u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x138604: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x138604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138608: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138608u;
    {
        const bool branch_taken_0x138608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138608u;
        // 0x13860c: 0x959821  addu        $s3, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138608) {
            ctx->pc = 0x138620u;
            return;
        }
    }
    ctx->pc = 0x138610u;
    // 0x138610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x138614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138618: 0xc04e948  jal         func_13A520
    ctx->pc = 0x138618u;
    SET_GPR_U32(ctx, 31, 0x138620u);
    ctx->pc = 0x13861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138618u;
    // 0x13861c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x138618u, 0x138620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138620u;
}
