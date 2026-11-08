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

// Function: entry_00203ed4
// Address: 0x203ed4 - 0x203ee8
void entry_00203ed4_0x203ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ed4_0x203ed4");
#endif

    ctx->pc = 0x203ed4u;

    // 0x203ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203ED4u;
    {
        const bool branch_taken_0x203ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED4u;
        // 0x203ed8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ed4) {
            ctx->pc = 0x203EE8u;
            return;
        }
    }
    ctx->pc = 0x203EDCu;
    // 0x203edc: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x203edcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203EE0u;
    {
        const bool branch_taken_0x203ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE0u;
        // 0x203ee4: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee0) {
            ctx->pc = 0x203EF0u;
            return;
        }
    }
    ctx->pc = 0x203EE8u;
}
