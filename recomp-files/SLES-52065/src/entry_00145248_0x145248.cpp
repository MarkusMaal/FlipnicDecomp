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

// Function: entry_00145248
// Address: 0x145248 - 0x145264
void entry_00145248_0x145248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145248_0x145248");
#endif

    switch (ctx->pc) {
        case 0x145254u: goto label_145254;
        default: break;
    }

    ctx->pc = 0x145248u;

    // 0x145248: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14524c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14524Cu;
    SET_GPR_U32(ctx, 31, 0x145254u);
    ctx->pc = 0x145250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14524Cu;
    // 0x145250: 0xae500018  sw          $s0, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14524Cu, 0x145254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145254u;
label_145254:
    // 0x145254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145254u;
    {
        const bool branch_taken_0x145254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145254u;
        // 0x145258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145254) {
            ctx->pc = 0x145264u;
            return;
        }
    }
    ctx->pc = 0x14525Cu;
    // 0x14525c: 0xc0514e4  jal         func_145390
    ctx->pc = 0x14525Cu;
    SET_GPR_U32(ctx, 31, 0x145264u);
    ctx->pc = 0x145260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14525Cu;
    // 0x145260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145390u, 0x14525Cu, 0x145264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145264u;
}
