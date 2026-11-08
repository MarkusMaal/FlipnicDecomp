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

// Function: entry_00146678
// Address: 0x146678 - 0x14669c
void entry_00146678_0x146678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146678_0x146678");
#endif

    switch (ctx->pc) {
        case 0x146684u: goto label_146684;
        default: break;
    }

    ctx->pc = 0x146678u;

    // 0x146678: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x146678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14667c: 0xc04dd5c  jal         func_137570
    ctx->pc = 0x14667Cu;
    SET_GPR_U32(ctx, 31, 0x146684u);
    ctx->pc = 0x146680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14667Cu;
    // 0x146680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x14667Cu, 0x146684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146684u;
label_146684:
    // 0x146684: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x146684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
    // 0x146688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x146688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14668c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14668Cu;
    {
        const bool branch_taken_0x14668c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14668Cu;
        // 0x146690: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14668c) {
            ctx->pc = 0x1466A0u;
            return;
        }
    }
    ctx->pc = 0x146694u;
    // 0x146694: 0xc0401a4  jal         func_100690
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 31, 0x14669Cu);
    ctx->pc = 0x146698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146694u;
    // 0x146698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x146694u, 0x14669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14669Cu;
}
