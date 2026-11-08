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

// Function: entry_001423b4
// Address: 0x1423b4 - 0x1423e4
void entry_001423b4_0x1423b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423b4_0x1423b4");
#endif

    ctx->pc = 0x1423b4u;

    // 0x1423b4: 0x0  nop
    ctx->pc = 0x1423b4u;
    // NOP
    // 0x1423b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423bc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1423bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1423c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1423C0u;
    {
        const bool branch_taken_0x1423c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423c0) {
            ctx->pc = 0x1423E4u;
            return;
        }
    }
    ctx->pc = 0x1423C8u;
    // 0x1423c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1423c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1423cc: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1423d0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1423d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1423d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1423d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1423d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1423d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1423dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1423dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1423e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1423e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1423e4u;
}
