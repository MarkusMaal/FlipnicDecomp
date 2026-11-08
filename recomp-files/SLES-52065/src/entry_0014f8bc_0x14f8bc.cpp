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

// Function: entry_0014f8bc
// Address: 0x14f8bc - 0x14f8cc
void entry_0014f8bc_0x14f8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f8bc_0x14f8bc");
#endif

    ctx->pc = 0x14f8bcu;

    // 0x14f8bc: 0x0  nop
    ctx->pc = 0x14f8bcu;
    // NOP
    // 0x14f8c0: 0x152d0002  bne         $t1, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F8C0u;
    {
        const bool branch_taken_0x14f8c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        ctx->pc = 0x14F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8C0u;
        // 0x14f8c4: 0x24190024  addiu       $t9, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8c0) {
            ctx->pc = 0x14F8CCu;
            return;
        }
    }
    ctx->pc = 0x14F8C8u;
    // 0x14f8c8: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14f8ccu;
}
