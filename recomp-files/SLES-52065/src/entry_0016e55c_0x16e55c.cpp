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

// Function: entry_0016e55c
// Address: 0x16e55c - 0x16e57c
void entry_0016e55c_0x16e55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e55c_0x16e55c");
#endif

    ctx->pc = 0x16e55cu;

    // 0x16e55c: 0x0  nop
    ctx->pc = 0x16e55cu;
    // NOP
    // 0x16e560: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e564: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e568: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x16E568u;
    {
        const bool branch_taken_0x16e568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E568u;
        // 0x16e56c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e568) {
            ctx->pc = 0x16E4FCu;
            return;
        }
    }
    ctx->pc = 0x16E570u;
    // 0x16e570: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x16e570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e574: 0xa6200216  sh          $zero, 0x216($s1)
    ctx->pc = 0x16e574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 534), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e578: 0xa6200218  sh          $zero, 0x218($s1)
    ctx->pc = 0x16e578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x16e57cu;
}
