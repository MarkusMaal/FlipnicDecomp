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

// Function: entry_00133e38
// Address: 0x133e38 - 0x133e68
void entry_00133e38_0x133e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e38_0x133e38");
#endif

    switch (ctx->pc) {
        case 0x133e40u: goto label_133e40;
        case 0x133e50u: goto label_133e50;
        default: break;
    }

    ctx->pc = 0x133e38u;

    // 0x133e38: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x133E38u;
    SET_GPR_U32(ctx, 31, 0x133E40u);
    ctx->pc = 0x133E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E38u;
    // 0x133e3c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x133E38u, 0x133E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E40u;
label_133e40:
    // 0x133e40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133E40u;
    {
        const bool branch_taken_0x133e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e40) {
            ctx->pc = 0x133E68u;
            return;
        }
    }
    ctx->pc = 0x133E48u;
    // 0x133e48: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x133E48u;
    SET_GPR_U32(ctx, 31, 0x133E50u);
    ctx->pc = 0x133E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E48u;
    // 0x133e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x133E48u, 0x133E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E50u;
label_133e50:
    // 0x133e50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x133e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x133e54: 0x24428cd0  addiu       $v0, $v0, -0x7330
    ctx->pc = 0x133e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x133e58: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x133e58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x133e5c: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x133e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    // 0x133e60: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x133e60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
    // 0x133e64: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x133e64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
    ctx->pc = 0x133e68u;
}
