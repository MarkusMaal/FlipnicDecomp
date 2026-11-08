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

// Function: entry_0015c9ac
// Address: 0x15c9ac - 0x15c9c8
void entry_0015c9ac_0x15c9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c9ac_0x15c9ac");
#endif

    ctx->pc = 0x15c9acu;

    // 0x15c9ac: 0x0  nop
    ctx->pc = 0x15c9acu;
    // NOP
    // 0x15c9b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c9b4: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x15c9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c9b8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x15C9B8u;
    {
        const bool branch_taken_0x15c9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B8u;
        // 0x15c9bc: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9b8) {
            ctx->pc = 0x15C8B0u;
            return;
        }
    }
    ctx->pc = 0x15C9C0u;
    // 0x15c9c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c9c8u;
}
