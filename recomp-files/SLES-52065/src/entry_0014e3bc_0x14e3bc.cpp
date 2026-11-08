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

// Function: entry_0014e3bc
// Address: 0x14e3bc - 0x14e3f4
void entry_0014e3bc_0x14e3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3bc_0x14e3bc");
#endif

    ctx->pc = 0x14e3bcu;

    // 0x14e3bc: 0x0  nop
    ctx->pc = 0x14e3bcu;
    // NOP
    // 0x14e3c0: 0x2f32023  subu        $a0, $s7, $s3
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x14e3c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e3cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e3d0: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x14e3d4: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14e3d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e3d8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E3D8u;
    {
        const bool branch_taken_0x14e3d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3D8u;
        // 0x14e3dc: 0x2848021  addu        $s0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3d8) {
            ctx->pc = 0x14E3F8u;
            return;
        }
    }
    ctx->pc = 0x14E3E0u;
    // 0x14e3e0: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x14e3e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e3e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E3E4u;
    {
        const bool branch_taken_0x14e3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3e4) {
            ctx->pc = 0x14E3F4u;
            return;
        }
    }
    ctx->pc = 0x14E3ECu;
    // 0x14e3ec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x14e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e3f0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x14e3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->pc = 0x14e3f4u;
}
