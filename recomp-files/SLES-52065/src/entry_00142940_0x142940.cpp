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

// Function: entry_00142940
// Address: 0x142940 - 0x142968
void entry_00142940_0x142940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142940_0x142940");
#endif

    ctx->pc = 0x142940u;

    // 0x142940: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142944: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142948: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142948u;
    {
        const bool branch_taken_0x142948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142948) {
            ctx->pc = 0x142968u;
            return;
        }
    }
    ctx->pc = 0x142950u;
    // 0x142950: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142954: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x142958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14295c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142960: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142960u;
    SET_GPR_U32(ctx, 31, 0x142968u);
    ctx->pc = 0x142964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142960u;
    // 0x142964: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142960u, 0x142968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142968u;
}
