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

// Function: entry_002035a0
// Address: 0x2035a0 - 0x2035b8
void entry_002035a0_0x2035a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035a0_0x2035a0");
#endif

    ctx->pc = 0x2035a0u;

    // 0x2035a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2035A0u;
    {
        const bool branch_taken_0x2035a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A0u;
        // 0x2035a4: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035a0) {
            ctx->pc = 0x2035B8u;
            return;
        }
    }
    ctx->pc = 0x2035A8u;
    // 0x2035a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2035ac: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x2035b0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2035B0u;
    {
        const bool branch_taken_0x2035b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B0u;
        // 0x2035b4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b0) {
            ctx->pc = 0x203538u;
            return;
        }
    }
    ctx->pc = 0x2035B8u;
}
