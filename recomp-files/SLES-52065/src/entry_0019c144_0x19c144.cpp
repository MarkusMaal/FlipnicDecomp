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

// Function: entry_0019c144
// Address: 0x19c144 - 0x19c164
void entry_0019c144_0x19c144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c144_0x19c144");
#endif

    ctx->pc = 0x19c144u;

    // 0x19c144: 0x8e230914  lw          $v1, 0x914($s1)
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x19c148: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x19c14c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19c14cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19c150: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C150u;
    {
        const bool branch_taken_0x19c150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c150) {
            ctx->pc = 0x19C164u;
            return;
        }
    }
    ctx->pc = 0x19C158u;
    // 0x19c158: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19c160: 0xae220928  sw          $v0, 0x928($s1)
    ctx->pc = 0x19c160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 2));
    ctx->pc = 0x19c164u;
}
