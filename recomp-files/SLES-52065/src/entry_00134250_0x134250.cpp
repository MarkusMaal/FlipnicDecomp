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

// Function: entry_00134250
// Address: 0x134250 - 0x134278
void entry_00134250_0x134250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134250_0x134250");
#endif

    switch (ctx->pc) {
        case 0x13425cu: goto label_13425c;
        case 0x134270u: goto label_134270;
        default: break;
    }

    ctx->pc = 0x134250u;

    // 0x134250: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x134250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x134254: 0xc080702  jal         func_201C08
    ctx->pc = 0x134254u;
    SET_GPR_U32(ctx, 31, 0x13425Cu);
    ctx->pc = 0x134258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134254u;
    // 0x134258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134254u, 0x13425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13425Cu;
label_13425c:
    // 0x13425c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13425Cu;
    {
        const bool branch_taken_0x13425c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x134260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13425Cu;
        // 0x134260: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13425c) {
            ctx->pc = 0x134278u;
            return;
        }
    }
    ctx->pc = 0x134264u;
    // 0x134264: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x134268: 0xc080702  jal         func_201C08
    ctx->pc = 0x134268u;
    SET_GPR_U32(ctx, 31, 0x134270u);
    ctx->pc = 0x13426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134268u;
    // 0x13426c: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134268u, 0x134270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134270u;
label_134270:
    // 0x134270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134270u;
    {
        const bool branch_taken_0x134270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134270u;
        // 0x134274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134270) {
            ctx->pc = 0x1342A8u;
            return;
        }
    }
    ctx->pc = 0x134278u;
}
