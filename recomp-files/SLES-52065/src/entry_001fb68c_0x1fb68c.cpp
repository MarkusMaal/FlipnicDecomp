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

// Function: entry_001fb68c
// Address: 0x1fb68c - 0x1fb6cc
void entry_001fb68c_0x1fb68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb68c_0x1fb68c");
#endif

    ctx->pc = 0x1fb68cu;

    // 0x1fb68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb690: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fb694: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fb698: 0x24424d78  addiu       $v0, $v0, 0x4D78
    ctx->pc = 0x1fb698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19832));
    // 0x1fb69c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb6a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb6a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1fb6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb6a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1fb6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb6ac: 0x24634d68  addiu       $v1, $v1, 0x4D68
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19816));
    // 0x1fb6b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb6b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb6b8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1fb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb6bc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1fb6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1fb6c0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB6C0u;
    {
        const bool branch_taken_0x1fb6c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1FB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C0u;
        // 0x1fb6c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6c0) {
            ctx->pc = 0x1FB6CCu;
            return;
        }
    }
    ctx->pc = 0x1FB6C8u;
    // 0x1fb6c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fb6c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1fb6ccu;
}
