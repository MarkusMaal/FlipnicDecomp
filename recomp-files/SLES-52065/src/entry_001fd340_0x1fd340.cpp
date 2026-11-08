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

// Function: entry_001fd340
// Address: 0x1fd340 - 0x1fd370
void entry_001fd340_0x1fd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd340_0x1fd340");
#endif

    switch (ctx->pc) {
        case 0x1fd34cu: goto label_1fd34c;
        default: break;
    }

    ctx->pc = 0x1fd340u;

    // 0x1fd340: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd344: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD344u;
    SET_GPR_U32(ctx, 31, 0x1FD34Cu);
    ctx->pc = 0x1FD348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD344u;
    // 0x1fd348: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD344u, 0x1FD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD34Cu;
label_1fd34c:
    // 0x1fd34c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd350: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD350u;
    {
        const bool branch_taken_0x1fd350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD350u;
        // 0x1fd354: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd350) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FD358u;
    // 0x1fd358: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD358u;
        // 0x1fd35c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD374u;
            return;
        }
    }
    ctx->pc = 0x1FD360u;
    // 0x1fd360: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD360u;
    {
        const bool branch_taken_0x1fd360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD360u;
        // 0x1fd364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd360) {
            ctx->pc = 0x1FD370u;
            return;
        }
    }
    ctx->pc = 0x1FD368u;
    // 0x1fd368: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD368u;
    SET_GPR_U32(ctx, 31, 0x1FD370u);
    ctx->pc = 0x1FD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD368u;
    // 0x1fd36c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD368u, 0x1FD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD370u;
}
