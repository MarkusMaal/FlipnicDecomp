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

// Function: entry_001e3da4
// Address: 0x1e3da4 - 0x1e3dcc
void entry_001e3da4_0x1e3da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3da4_0x1e3da4");
#endif

    ctx->pc = 0x1e3da4u;

    // 0x1e3da4: 0x90820042  lbu         $v0, 0x42($a0)
    ctx->pc = 0x1e3da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x1e3da8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3DA8u;
    {
        const bool branch_taken_0x1e3da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3da8) {
            ctx->pc = 0x1E3DE8u;
            return;
        }
    }
    ctx->pc = 0x1E3DB0u;
    // 0x1e3db0: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x1e3db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x1e3db4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3DB4u;
    {
        const bool branch_taken_0x1e3db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DB4u;
        // 0x1e3db8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3db4) {
            ctx->pc = 0x1E3DE8u;
            return;
        }
    }
    ctx->pc = 0x1E3DBCu;
    // 0x1e3dbc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3DBCu;
    {
        const bool branch_taken_0x1e3dbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DBCu;
        // 0x1e3dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dbc) {
            ctx->pc = 0x1E3DCCu;
            return;
        }
    }
    ctx->pc = 0x1E3DC4u;
    // 0x1e3dc4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3DC4u;
    {
        const bool branch_taken_0x1e3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3dc4) {
            ctx->pc = 0x1E3E3Cu;
            return;
        }
    }
    ctx->pc = 0x1E3DCCu;
}
