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

// Function: entry_00191610
// Address: 0x191610 - 0x191624
void entry_00191610_0x191610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191610_0x191610");
#endif

    ctx->pc = 0x191610u;

    // 0x191610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191614: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x191614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x191618: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x191618u;
    {
        const bool branch_taken_0x191618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191618u;
        // 0x19161c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191618) {
            ctx->pc = 0x1915BCu;
            return;
        }
    }
    ctx->pc = 0x191620u;
    // 0x191620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191624u;
}
