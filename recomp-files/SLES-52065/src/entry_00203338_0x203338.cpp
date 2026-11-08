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

// Function: entry_00203338
// Address: 0x203338 - 0x203350
void entry_00203338_0x203338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203338_0x203338");
#endif

    ctx->pc = 0x203338u;

    // 0x203338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203338u;
    {
        const bool branch_taken_0x203338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203338u;
        // 0x20333c: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203338) {
            ctx->pc = 0x203350u;
            return;
        }
    }
    ctx->pc = 0x203340u;
    // 0x203340: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x203340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x203344: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x203348: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x203348u;
    {
        const bool branch_taken_0x203348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203348u;
        // 0x20334c: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203348) {
            ctx->pc = 0x2032D0u;
            return;
        }
    }
    ctx->pc = 0x203350u;
}
