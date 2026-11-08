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

// Function: entry_00123240
// Address: 0x123240 - 0x123260
void entry_00123240_0x123240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123240_0x123240");
#endif

    ctx->pc = 0x123240u;

    // 0x123240: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123244: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x123244u;
    {
        const bool branch_taken_0x123244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123244) {
            ctx->pc = 0x123260u;
            return;
        }
    }
    ctx->pc = 0x12324Cu;
    // 0x12324c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x12324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123250: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123254: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123258: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x123258u;
    {
        const bool branch_taken_0x123258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123258) {
            ctx->pc = 0x1232ACu;
            return;
        }
    }
    ctx->pc = 0x123260u;
}
