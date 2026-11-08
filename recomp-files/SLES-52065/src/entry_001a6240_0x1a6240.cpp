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

// Function: entry_001a6240
// Address: 0x1a6240 - 0x1a626c
void entry_001a6240_0x1a6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6240_0x1a6240");
#endif

    switch (ctx->pc) {
        case 0x1a6258u: goto label_1a6258;
        case 0x1a6268u: goto label_1a6268;
        default: break;
    }

    ctx->pc = 0x1a6240u;

    // 0x1a6240: 0x1600ff53  bnez        $s0, . + 4 + (-0xAD << 2)
    ctx->pc = 0x1A6240u;
    {
        const bool branch_taken_0x1a6240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6240) {
            ctx->pc = 0x1A5F90u;
            return;
        }
    }
    ctx->pc = 0x1A6248u;
    // 0x1a6248: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6248u;
    {
        const bool branch_taken_0x1a6248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6248) {
            ctx->pc = 0x1A626Cu;
            return;
        }
    }
    ctx->pc = 0x1A6250u;
    // 0x1a6250: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A6250u;
    SET_GPR_U32(ctx, 31, 0x1A6258u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A6250u, 0x1A6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a625c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a6260: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A6260u;
    SET_GPR_U32(ctx, 31, 0x1A6268u);
    ctx->pc = 0x1A6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6260u;
    // 0x1a6264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A6260u, 0x1A6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1a626cu;
}
