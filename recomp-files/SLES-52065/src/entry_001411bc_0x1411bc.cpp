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

// Function: entry_001411bc
// Address: 0x1411bc - 0x1411dc
void entry_001411bc_0x1411bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001411bc_0x1411bc");
#endif

    ctx->pc = 0x1411bcu;

    // 0x1411bc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1411c0: 0x1272023  subu        $a0, $t1, $a3
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1411c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1411c8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1411cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1411d0: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1411d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1411d4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1411d8: 0xafb20120  sw          $s2, 0x120($sp)
    ctx->pc = 0x1411d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
    ctx->pc = 0x1411dcu;
}
