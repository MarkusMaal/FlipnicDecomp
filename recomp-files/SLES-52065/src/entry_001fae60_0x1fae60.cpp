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

// Function: entry_001fae60
// Address: 0x1fae60 - 0x1fae80
void entry_001fae60_0x1fae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae60_0x1fae60");
#endif

    ctx->pc = 0x1fae60u;

label_1fae60:
    // 0x1fae60: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fae60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fae64: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fae68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fae6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fae70: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x1fae70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fae74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fae74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fae78: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FAE78u;
    {
        const bool branch_taken_0x1fae78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae78) {
            ctx->pc = 0x1FAE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae60;
        }
    }
    ctx->pc = 0x1FAE80u;
}
