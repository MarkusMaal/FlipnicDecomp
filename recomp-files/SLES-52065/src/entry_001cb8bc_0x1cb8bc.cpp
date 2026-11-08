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

// Function: entry_001cb8bc
// Address: 0x1cb8bc - 0x1cb8d8
void entry_001cb8bc_0x1cb8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb8bc_0x1cb8bc");
#endif

    switch (ctx->pc) {
        case 0x1cb8c4u: goto label_1cb8c4;
        default: break;
    }

    ctx->pc = 0x1cb8bcu;

    // 0x1cb8bc: 0xc060014  jal         func_180050
    ctx->pc = 0x1CB8BCu;
    SET_GPR_U32(ctx, 31, 0x1CB8C4u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CB8BCu, 0x1CB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C4u;
label_1cb8c4:
    // 0x1cb8c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8cc: 0x24a58040  addiu       $a1, $a1, -0x7FC0
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    // 0x1cb8d0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB8D0u;
    SET_GPR_U32(ctx, 31, 0x1CB8D8u);
    ctx->pc = 0x1CB8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8D0u;
    // 0x1cb8d4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB8D0u, 0x1CB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8D8u;
}
