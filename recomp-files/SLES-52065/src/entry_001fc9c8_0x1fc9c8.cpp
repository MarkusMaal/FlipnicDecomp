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

// Function: entry_001fc9c8
// Address: 0x1fc9c8 - 0x1fc9f8
void entry_001fc9c8_0x1fc9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc9c8_0x1fc9c8");
#endif

    switch (ctx->pc) {
        case 0x1fc9ecu: goto label_1fc9ec;
        default: break;
    }

    ctx->pc = 0x1fc9c8u;

    // 0x1fc9c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc9cc: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc9d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9d4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1fc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fc9d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc9dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc9e4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC9E4u;
    SET_GPR_U32(ctx, 31, 0x1FC9ECu);
    ctx->pc = 0x1FC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9E4u;
    // 0x1fc9e8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC9E4u, 0x1FC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9ECu;
label_1fc9ec:
    // 0x1fc9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC9ECu;
    {
        const bool branch_taken_0x1fc9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9ECu;
        // 0x1fc9f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9ec) {
            ctx->pc = 0x1FCA10u;
            return;
        }
    }
    ctx->pc = 0x1FC9F4u;
    // 0x1fc9f4: 0x0  nop
    ctx->pc = 0x1fc9f4u;
    // NOP
    ctx->pc = 0x1fc9f8u;
}
