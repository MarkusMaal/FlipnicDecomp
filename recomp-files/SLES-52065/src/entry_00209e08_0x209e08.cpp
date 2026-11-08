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

// Function: entry_00209e08
// Address: 0x209e08 - 0x209e20
void entry_00209e08_0x209e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e08_0x209e08");
#endif

    ctx->pc = 0x209e08u;

    // 0x209e08: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x209e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x209e0c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x209e10: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x209e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x209e14: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x209e14u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x209e18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E80u;
            return;
        }
    }
    ctx->pc = 0x209E20u;
}
