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

// Function: entry_00173ae8
// Address: 0x173ae8 - 0x173b00
void entry_00173ae8_0x173ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ae8_0x173ae8");
#endif

    ctx->pc = 0x173ae8u;

    // 0x173ae8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173AE8u;
    {
        const bool branch_taken_0x173ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ae8) {
            ctx->pc = 0x173B04u;
            return;
        }
    }
    ctx->pc = 0x173AF0u;
    // 0x173af0: 0x93828614  lbu         $v0, -0x79EC($gp)
    ctx->pc = 0x173af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x173af4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x173AF4u;
    {
        const bool branch_taken_0x173af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AF4u;
        // 0x173af8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173af4) {
            ctx->pc = 0x173B00u;
            return;
        }
    }
    ctx->pc = 0x173AFCu;
    // 0x173afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173b00u;
}
