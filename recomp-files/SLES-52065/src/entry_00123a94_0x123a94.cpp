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

// Function: entry_00123a94
// Address: 0x123a94 - 0x123acc
void entry_00123a94_0x123a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a94_0x123a94");
#endif

    ctx->pc = 0x123a94u;

    // 0x123a94: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123a98: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x123a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123a9c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123aa0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123aa4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x123aa8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x123aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x123aac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x123ab0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123ab4: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x123ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x123ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123abc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x123ABCu;
    {
        const bool branch_taken_0x123abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x123abc) {
            ctx->pc = 0x123ACCu;
            return;
        }
    }
    ctx->pc = 0x123AC4u;
    // 0x123ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123AC4u;
    {
        const bool branch_taken_0x123ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC4u;
        // 0x123ac8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ac4) {
            ctx->pc = 0x123AD0u;
            return;
        }
    }
    ctx->pc = 0x123ACCu;
}
