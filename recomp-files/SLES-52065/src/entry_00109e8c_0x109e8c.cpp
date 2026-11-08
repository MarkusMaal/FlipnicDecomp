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

// Function: entry_00109e8c
// Address: 0x109e8c - 0x109ecc
void entry_00109e8c_0x109e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e8c_0x109e8c");
#endif

    ctx->pc = 0x109e8cu;

    // 0x109e8c: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x109e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109e90: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x109e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x109e94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109e98: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109e9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x109e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109ea4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x109ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109ea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109eac: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x109eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x109eb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x109eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109eb4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x109eb8: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x109ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109ec0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x109ec0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109ec4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x109EC4u;
    {
        const bool branch_taken_0x109ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC4u;
        // 0x109ec8: 0x7c460040  sq          $a2, 0x40($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec4) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109ECCu;
}
