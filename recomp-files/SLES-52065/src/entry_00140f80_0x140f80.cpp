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

// Function: entry_00140f80
// Address: 0x140f80 - 0x140fc8
void entry_00140f80_0x140f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140f80_0x140f80");
#endif

    ctx->pc = 0x140f80u;

    // 0x140f80: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140f84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140f88: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140f8c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x140f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x140f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140f98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x140f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x140f9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140fa0: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140fa4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x140fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x140fa8: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x140fac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x140facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140fb0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x140fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140fb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x140fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x140fbc: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140FBCu;
    {
        const bool branch_taken_0x140fbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x140fbc) {
            ctx->pc = 0x140FC8u;
            return;
        }
    }
    ctx->pc = 0x140FC4u;
    // 0x140fc4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x140fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x140fc8u;
}
