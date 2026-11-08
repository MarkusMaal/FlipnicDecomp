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

// Function: entry_0019953c
// Address: 0x19953c - 0x199574
void entry_0019953c_0x19953c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019953c_0x19953c");
#endif

    switch (ctx->pc) {
        case 0x199544u: goto label_199544;
        case 0x19955cu: goto label_19955c;
        default: break;
    }

    ctx->pc = 0x19953cu;

    // 0x19953c: 0xc04b220  jal         func_12C880
    ctx->pc = 0x19953Cu;
    SET_GPR_U32(ctx, 31, 0x199544u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x19953Cu, 0x199544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199544u;
label_199544:
    // 0x199544: 0x3c033f28  lui         $v1, 0x3F28
    ctx->pc = 0x199544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16168 << 16));
    // 0x199548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19954c: 0x3462f5c3  ori         $v0, $v1, 0xF5C3
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x199550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199554: 0xc04b5f0  jal         func_12D7C0
    ctx->pc = 0x199554u;
    SET_GPR_U32(ctx, 31, 0x19955Cu);
    ctx->pc = 0x12D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7C0u, 0x199554u, 0x19955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19955Cu;
label_19955c:
    // 0x19955c: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x19955cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x199560: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199560u;
    {
        const bool branch_taken_0x199560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199560u;
        // 0x199564: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199560) {
            ctx->pc = 0x199574u;
            return;
        }
    }
    ctx->pc = 0x199568u;
    // 0x199568: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x199568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x19956c: 0x90242eb5  lbu         $a0, 0x2EB5($at)
    ctx->pc = 0x19956cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x199570: 0x0  nop
    ctx->pc = 0x199570u;
    // NOP
    ctx->pc = 0x199574u;
}
