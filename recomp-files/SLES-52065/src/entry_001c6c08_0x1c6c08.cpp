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

// Function: entry_001c6c08
// Address: 0x1c6c08 - 0x1c6c24
void entry_001c6c08_0x1c6c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c08_0x1c6c08");
#endif

    switch (ctx->pc) {
        case 0x1c6c10u: goto label_1c6c10;
        case 0x1c6c1cu: goto label_1c6c1c;
        default: break;
    }

    ctx->pc = 0x1c6c08u;

    // 0x1c6c08: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C08u;
    SET_GPR_U32(ctx, 31, 0x1C6C10u);
    ctx->pc = 0x1C6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C08u;
    // 0x1c6c0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C08u, 0x1C6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C10u;
label_1c6c10:
    // 0x1c6c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1C6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C14u;
    // 0x1c6c18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C1Cu;
    {
        const bool branch_taken_0x1c6c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c1c) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6C24u;
}
