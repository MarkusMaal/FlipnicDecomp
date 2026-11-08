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

// Function: entry_0019d3bc
// Address: 0x19d3bc - 0x19d3f4
void entry_0019d3bc_0x19d3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d3bc_0x19d3bc");
#endif

    ctx->pc = 0x19d3bcu;

    // 0x19d3bc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19d3c0: 0x8cc40938  lw          $a0, 0x938($a2)
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2360)));
    // 0x19d3c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d3cc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19d3d0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x19d3d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D3D4u;
    {
        const bool branch_taken_0x19d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d3d4) {
            ctx->pc = 0x19D3F4u;
            return;
        }
    }
    ctx->pc = 0x19D3DCu;
    // 0x19d3dc: 0x8cc308f8  lw          $v1, 0x8F8($a2)
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2296)));
    // 0x19d3e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d3e4: 0xacc308f8  sw          $v1, 0x8F8($a2)
    ctx->pc = 0x19d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2296), GPR_U32(ctx, 3));
    // 0x19d3e8: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x19d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19d3ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x19d3f0: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x19d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
    ctx->pc = 0x19d3f4u;
}
