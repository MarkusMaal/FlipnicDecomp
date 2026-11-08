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

// Function: entry_0015c350
// Address: 0x15c350 - 0x15c384
void entry_0015c350_0x15c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c350_0x15c350");
#endif

    switch (ctx->pc) {
        case 0x15c374u: goto label_15c374;
        default: break;
    }

    ctx->pc = 0x15c350u;

    // 0x15c350: 0x680000c  bltz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x15C350u;
    {
        const bool branch_taken_0x15c350 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x15C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C350u;
        // 0x15c354: 0x2f31021  addu        $v0, $s7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c350) {
            ctx->pc = 0x15C384u;
            return;
        }
    }
    ctx->pc = 0x15C358u;
    // 0x15c358: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c35c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c360: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c364: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C364u;
    {
        const bool branch_taken_0x15c364 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C364u;
        // 0x15c368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c364) {
            ctx->pc = 0x15C384u;
            return;
        }
    }
    ctx->pc = 0x15C36Cu;
    // 0x15c36c: 0xc080796  jal         func_201E58
    ctx->pc = 0x15C36Cu;
    SET_GPR_U32(ctx, 31, 0x15C374u);
    ctx->pc = 0x15C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C36Cu;
    // 0x15c370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x15C36Cu, 0x15C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C374u;
label_15c374:
    // 0x15c374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C374u;
    {
        const bool branch_taken_0x15c374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c374) {
            ctx->pc = 0x15C384u;
            return;
        }
    }
    ctx->pc = 0x15C37Cu;
    // 0x15c37c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C37Cu;
    {
        const bool branch_taken_0x15c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C37Cu;
        // 0x15c380: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c37c) {
            ctx->pc = 0x15C39Cu;
            return;
        }
    }
    ctx->pc = 0x15C384u;
}
