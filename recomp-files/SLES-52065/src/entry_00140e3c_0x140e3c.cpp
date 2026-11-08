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

// Function: entry_00140e3c
// Address: 0x140e3c - 0x140e80
void entry_00140e3c_0x140e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e3c_0x140e3c");
#endif

    ctx->pc = 0x140e3cu;

    // 0x140e3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x140e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x140e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140e44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x140e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x140e48: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x140e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e50: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x140e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x140e54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140e58: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x140e5c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x140e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x140e60: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x140e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x140e64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140e68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x140e6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140e70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x140e74: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x140E74u;
    {
        const bool branch_taken_0x140e74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x140e74) {
            ctx->pc = 0x140E80u;
            return;
        }
    }
    ctx->pc = 0x140E7Cu;
    // 0x140e7c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x140e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x140e80u;
}
