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

// Function: entry_001fd850
// Address: 0x1fd850 - 0x1fd87c
void entry_001fd850_0x1fd850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd850_0x1fd850");
#endif

    switch (ctx->pc) {
        case 0x1fd860u: goto label_1fd860;
        default: break;
    }

    ctx->pc = 0x1fd850u;

    // 0x1fd850: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd858: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD858u;
    SET_GPR_U32(ctx, 31, 0x1FD860u);
    ctx->pc = 0x1FD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD858u;
    // 0x1fd85c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD858u, 0x1FD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD860u;
label_1fd860:
    // 0x1fd860: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd864: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1fd864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd868: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd86c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fd870: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1fd870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fd874: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1fd874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1fd878: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fd878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1fd87cu;
}
