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

// Function: entry_001492a4
// Address: 0x1492a4 - 0x1492d0
void entry_001492a4_0x1492a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492a4_0x1492a4");
#endif

    ctx->pc = 0x1492a4u;

    // 0x1492a4: 0x0  nop
    ctx->pc = 0x1492a4u;
    // NOP
    // 0x1492a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1492a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1492ac: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1492b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1492b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1492b8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1492b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1492bc: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1492bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1492c0: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1492C0u;
    {
        const bool branch_taken_0x1492c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492c0) {
            ctx->pc = 0x149274u;
            return;
        }
    }
    ctx->pc = 0x1492C8u;
    // 0x1492c8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1492C8u;
    {
        const bool branch_taken_0x1492c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492c8) {
            ctx->pc = 0x1495E8u;
            return;
        }
    }
    ctx->pc = 0x1492D0u;
}
