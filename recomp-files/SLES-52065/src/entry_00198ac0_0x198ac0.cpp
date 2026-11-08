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

// Function: entry_00198ac0
// Address: 0x198ac0 - 0x198ad4
void entry_00198ac0_0x198ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ac0_0x198ac0");
#endif

    switch (ctx->pc) {
        case 0x198accu: goto label_198acc;
        default: break;
    }

    ctx->pc = 0x198ac0u;

    // 0x198ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ac4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x198AC4u;
    SET_GPR_U32(ctx, 31, 0x198ACCu);
    ctx->pc = 0x198AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AC4u;
    // 0x198ac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198AC4u, 0x198ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ACCu;
label_198acc:
    // 0x198acc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198ACCu;
    {
        const bool branch_taken_0x198acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198acc) {
            ctx->pc = 0x198AFCu;
            return;
        }
    }
    ctx->pc = 0x198AD4u;
}
