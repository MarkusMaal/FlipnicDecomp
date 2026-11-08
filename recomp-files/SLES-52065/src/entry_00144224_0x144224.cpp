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

// Function: entry_00144224
// Address: 0x144224 - 0x144244
void entry_00144224_0x144224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144224_0x144224");
#endif

    ctx->pc = 0x144224u;

    // 0x144224: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x144224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144228: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14422c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x144230: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x144230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x144234: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x144234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x144238: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x144238u;
    {
        const bool branch_taken_0x144238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144238) {
            ctx->pc = 0x144264u;
            return;
        }
    }
    ctx->pc = 0x144240u;
    // 0x144240: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x144244u;
}
