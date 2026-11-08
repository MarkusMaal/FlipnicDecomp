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

// Function: entry_0014ea50
// Address: 0x14ea50 - 0x14ea8c
void entry_0014ea50_0x14ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea50_0x14ea50");
#endif

    switch (ctx->pc) {
        case 0x14ea84u: goto label_14ea84;
        default: break;
    }

    ctx->pc = 0x14ea50u;

    // 0x14ea50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ea54: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x14ea54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14ea58: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x14EA58u;
    {
        const bool branch_taken_0x14ea58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA58u;
        // 0x14ea5c: 0x3c014000  lui         $at, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea58) {
            ctx->pc = 0x14EAE8u;
            return;
        }
    }
    ctx->pc = 0x14EA60u;
    // 0x14ea60: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14ea64: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EA64u;
    {
        const bool branch_taken_0x14ea64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ea64) {
            ctx->pc = 0x14EA8Cu;
            return;
        }
    }
    ctx->pc = 0x14EA6Cu;
    // 0x14ea6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14ea70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ea74: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14ea78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ea7c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EA7Cu;
    SET_GPR_U32(ctx, 31, 0x14EA84u);
    ctx->pc = 0x14EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA7Cu;
    // 0x14ea80: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EA7Cu, 0x14EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA84u;
label_14ea84:
    // 0x14ea84: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EA84u;
    SET_GPR_U32(ctx, 31, 0x14EA8Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EA84u, 0x14EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA8Cu;
}
