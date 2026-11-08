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

// Function: entry_00107f18
// Address: 0x107f18 - 0x107f48
void entry_00107f18_0x107f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f18_0x107f18");
#endif

    ctx->pc = 0x107f18u;

    // 0x107f18: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107f1c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x107f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x107f20: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x107f24: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x107f28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x107f2c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x107f30: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x107f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x107f34: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107f38: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107FB4u;
            return;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x107F40u;
    {
        const bool branch_taken_0x107f40 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x107f40) {
            ctx->pc = 0x107FB4u;
            return;
        }
    }
    ctx->pc = 0x107F48u;
}
